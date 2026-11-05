#!/usr/bin/env python3
"""
tools/patch_decoder.py
Decodes and analyzes Firehawk: Thexder II Audio Hardware Patch files:
- PATCH.001 -> Roland MT-32 / LAPC-I System Exclusive sound bank & LCD messages
- PATCH.003 -> AdLib / Sound Blaster YM3812 (OPL2) FM synthesis instrument bank
- PATCH.101 -> Creative Music System (CMS) / Game Blaster SAA1099 voice map

Generates:
1. Standard Roland MT-32 SysEx bank (.syx) loadable in Munt / real MT-32 hardware
2. Structured JSON catalog of all 64 MT-32 timbres and 192 OPL2 FM instruments
3. Visual graphics:
   - Roland MT-32 backlit dot-matrix LCD display rendering Rob Atesalp's messages
   - OPL2 Modulator vs Carrier ADSR envelope curves
   - Patch architecture & timbre bank overview matrix
"""

import os
import sys
import json
import wave
import struct
import numpy as np
from PIL import Image, ImageDraw, ImageFont

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if REPO_ROOT not in sys.path:
    sys.path.insert(0, REPO_ROOT)

from tools.extract_graphics import decompress_firehawk_lzw

ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
OUT_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data", "audio", "patches")
IMG_DIR = os.path.join(OUT_DIR, "images")
WAV_DIR = os.path.join(OUT_DIR, "wav")

os.makedirs(OUT_DIR, exist_ok=True)
os.makedirs(IMG_DIR, exist_ok=True)
os.makedirs(WAV_DIR, exist_ok=True)


def decompress_patch_file(filepath: str) -> tuple[int, bytes]:
    """Decompresses a PATCH.* container with 4-byte uncompressed size header."""
    with open(filepath, "rb") as f:
        raw = f.read()
    if len(raw) < 4:
        raise ValueError(f"File {filepath} too short")
    expected_size = int.from_bytes(raw[:4], "little")
    decomp = decompress_firehawk_lzw(raw[4:])
    if len(decomp) != expected_size:
        raise ValueError(
            f"Size mismatch in {filepath}: expected {expected_size}, got {len(decomp)}"
        )
    return expected_size, decomp


def calculate_mt32_checksum(addr: list[int], data: list[int]) -> int:
    """Calculates Roland MT-32 DT1 SysEx checksum."""
    total = (sum(addr) + sum(data)) & 0x7F
    return (128 - total) & 0x7F


def parse_patch_001(decomp: bytes) -> dict:
    """Parses PATCH.001 (Roland MT-32 Patch Bank)."""
    res_type = decomp[0]
    title_len = decomp[1]
    title = decomp[2:2 + title_len].decode("latin1", errors="replace").strip()

    # LCD messages (3 lines of 20 chars)
    idx = 2 + title_len
    lcd_lines = [
        decomp[idx:idx + 20].decode("latin1", errors="replace"),
        decomp[idx + 20:idx + 40].decode("latin1", errors="replace"),
        decomp[idx + 40:idx + 60].decode("latin1", errors="replace"),
    ]
    idx += 60

    # System setup block (offsets 75 to 506)
    sys_setup = decomp[idx:507]

    # Extract 64 timbres (246 bytes each)
    timbres = []
    timbre_start = 507
    for t_idx in range(64):
        offset = timbre_start + t_idx * 246
        t_data = decomp[offset:offset + 246]
        name = t_data[:10].decode("latin1", errors="replace").strip()

        # Common parameters
        common = {
            "partial_structure_1_2": t_data[10] & 0x1F,
            "partial_structure_3_4": t_data[11] & 0x1F,
            "partial_mute": t_data[12],
            "env_mode": t_data[13],
        }

        # 4 Partials (58 bytes each)
        partials = []
        for p_idx in range(4):
            p_off = 14 + p_idx * 58
            p_bytes = t_data[p_off:p_off + 58]
            p_dict = {
                "partial_number": p_idx + 1,
                "wg_pitch_coarse": p_bytes[0],
                "wg_pitch_fine": p_bytes[1],
                "wg_pitch_keyfollow": p_bytes[2],
                "wg_waveform": "Square/Saw" if p_bytes[3] == 0 else f"PCM_{p_bytes[3]}",
                "wg_pcm_wave": p_bytes[4],
                "wg_pulse_width": p_bytes[5],
                "tvf_cutoff_frequency": p_bytes[7],
                "tvf_resonance": p_bytes[8],
                "tvf_env_depth": p_bytes[9],
                "tva_level": p_bytes[25],
                "tva_velocity_sensitivity": p_bytes[26],
            }
            partials.append(p_dict)

        timbres.append({
            "index": t_idx + 1,
            "memory_bank": 0,
            "name": name,
            "offset_in_file": offset,
            "common": common,
            "partials": partials,
            "raw_hex": t_data.hex(),
        })

    # Rhythm map (offsets 16251 to 16637)
    rhythm_raw = decomp[16251:]

    return {
        "file": "PATCH.001",
        "resource_type": res_type,
        "title": title,
        "lcd_messages": lcd_lines,
        "system_setup_bytes": len(sys_setup),
        "timbre_count": len(timbres),
        "timbres": timbres,
        "rhythm_map_bytes": len(rhythm_raw),
    }


def export_mt32_sysex(parsed_p1: dict, decomp: bytes, out_syx_path: str):
    """Builds a complete, standard .SYX file loadable into Munt or Roland MT-32."""
    syx = bytearray()

    # 1. LCD Message 1 & 2 (Address 0x20 0x00 0x00, 20 bytes)
    msg1 = parsed_p1["lcd_messages"][0].ljust(20).encode("latin1")[:20]
    addr = [0x20, 0x00, 0x00]
    data = list(msg1)
    csum = calculate_mt32_checksum(addr, data)
    syx.extend([0xF0, 0x41, 0x10, 0x16, 0x12] + addr + data + [csum, 0xF7])

    # 2. Upload each of the 64 Timbres
    # Timbre memory address in Roland MT-32:
    # Starts at 0x08 0x00 0x00. Each timbre spans 0x01 0x76 (246) bytes.
    # Base address for timbre i:
    # In MT-32 memory map, Timbre Memory area 0x08 00 00 to 0x08 7F 7F.
    # Timbre i is at offset i * 246 (in 7-bit math: mid = (i * 246) // 128, low = (i * 246) % 128)
    timbre_start = 507
    for i in range(64):
        offset = timbre_start + i * 246
        t_data = list(decomp[offset:offset + 246])
        # MT-32 requires SysEx packets to be split or sent at valid 7-bit addresses
        # We split the 246 bytes into two 123-byte packets or send as standard DT1
        addr_base = i * 256  # 2 x 128
        addr_high = 0x08
        addr_mid = (i * 2) & 0x7F
        addr_low = 0x00

        # Send first 128 bytes
        part1 = t_data[:128]
        addr1 = [addr_high, addr_mid, addr_low]
        csum1 = calculate_mt32_checksum(addr1, part1)
        syx.extend([0xF0, 0x41, 0x10, 0x16, 0x12] + addr1 + part1 + [csum1, 0xF7])

        # Send remaining 118 bytes
        part2 = t_data[128:]
        addr2 = [addr_high, (addr_mid + 1) & 0x7F, 0x00]
        csum2 = calculate_mt32_checksum(addr2, part2)
        syx.extend([0xF0, 0x41, 0x10, 0x16, 0x12] + addr2 + part2 + [csum2, 0xF7])

    with open(out_syx_path, "wb") as f:
        f.write(syx)


def parse_patch_003(decomp: bytes) -> dict:
    """Parses PATCH.003 (AdLib / Sound Blaster OPL2 FM Patch Bank)."""
    res_type = decomp[0]
    title_len = decomp[1]
    title = decomp[2:2 + title_len].decode("latin1", errors="replace").strip()

    payload = decomp[2 + title_len:]
    instr_count = 192  # 128 melodic + 64 rhythm
    instruments = []

    for i in range(instr_count):
        off = i * 14
        inst = payload[off:off + 14]

        # Extract OPL2 register parameters
        # Byte 0: Modulator Characteristics (Reg 0x20)
        # Byte 1: Carrier Characteristics (Reg 0x23)
        # Byte 2: Modulator Total Level / KSL (Reg 0x40)
        # Byte 3: Carrier Total Level / KSL (Reg 0x43)
        # Byte 4: Modulator Attack (high nibble) / Decay (low nibble) (Reg 0x60)
        # Byte 5: Carrier Attack (high nibble) / Decay (low nibble) (Reg 0x63)
        # Byte 6: Modulator Sustain (high nibble) / Release (low nibble) (Reg 0x80)
        # Byte 7: Carrier Sustain (high nibble) / Release (low nibble) (Reg 0x83)
        # Byte 8: Feedback (bits 3-1) / Connection (bit 0) (Reg 0xC0)
        # Byte 9: Modulator Waveform Select (Reg 0xE0)
        # Byte 10: Carrier Waveform Select (Reg 0xE3)

        mod_char = inst[0]
        car_char = inst[1]
        mod_scale = inst[2]
        car_scale = inst[3]
        mod_ad = inst[4]
        car_ad = inst[5]
        mod_sr = inst[6]
        car_sr = inst[7]
        fb_conn = inst[8]
        mod_ws = inst[9] if len(inst) > 9 else 0
        car_ws = inst[10] if len(inst) > 10 else 0

        inst_dict = {
            "index": i,
            "type": "melodic" if i < 128 else "rhythm",
            "modulator": {
                "am_tremolo": bool(mod_char & 0x80),
                "vibrato": bool(mod_char & 0x40),
                "sustaining": bool(mod_char & 0x20),
                "ksr": bool(mod_char & 0x10),
                "multiplier": mod_char & 0x0F,
                "ksl": (mod_scale >> 6) & 3,
                "total_level": mod_scale & 0x3F,
                "attack": (mod_ad >> 4) & 0x0F,
                "decay": mod_ad & 0x0F,
                "sustain": (mod_sr >> 4) & 0x0F,
                "release": mod_sr & 0x0F,
                "waveform": mod_ws & 0x07,
            },
            "carrier": {
                "am_tremolo": bool(car_char & 0x80),
                "vibrato": bool(car_char & 0x40),
                "sustaining": bool(car_char & 0x20),
                "ksr": bool(car_char & 0x10),
                "multiplier": car_char & 0x0F,
                "ksl": (car_scale >> 6) & 3,
                "total_level": car_scale & 0x3F,
                "attack": (car_ad >> 4) & 0x0F,
                "decay": car_ad & 0x0F,
                "sustain": (car_sr >> 4) & 0x0F,
                "release": car_sr & 0x0F,
                "waveform": car_ws & 0x07,
            },
            "feedback": (fb_conn >> 1) & 0x07,
            "connection": "Additive" if (fb_conn & 1) else "Frequency Modulation (FM)",
            "raw_hex": inst.hex(),
        }
        instruments.append(inst_dict)

    sentinel = payload[instr_count * 14:].hex()

    return {
        "file": "PATCH.003",
        "resource_type": res_type,
        "title": title,
        "instrument_count": len(instruments),
        "instruments": instruments,
        "sentinel_hex": sentinel,
    }


def parse_patch_101(decomp: bytes) -> dict:
    """Parses PATCH.101 (CMS / Game Blaster Mapping Table)."""
    res_type = decomp[0]
    title_len = decomp[1]

    payload = decomp[2 + title_len:]
    prog_map = []
    for i in range(128):
        val = payload[i * 2] | (payload[i * 2 + 1] << 8)
        prog_map.append(val)

    noise_section = list(payload[256:272])

    return {
        "file": "PATCH.101",
        "resource_type": res_type,
        "title": "(None / CMS Driver Map)",
        "program_map_entries": len(prog_map),
        "program_map": prog_map,
        "noise_generator_parameters": noise_section,
    }


def synthesize_opl2_instrument(
    inst: dict, note_freq: float, duration: float = 1.5, sample_rate: int = 44100
) -> np.ndarray:
    """
    Simulates Yamaha YM3812 (OPL2) 2-Operator FM synthesis for an instrument from PATCH.003.
    Returns 16-bit PCM samples as a numpy array.
    """
    total_samples = int(duration * sample_rate)
    dt = 1.0 / sample_rate

    mod_dict = inst["modulator"]
    car_dict = inst["carrier"]

    def calc_mult(m):
        return 0.5 if m == 0 else float(m)

    f_mod = note_freq * calc_mult(mod_dict["multiplier"])
    f_car = note_freq * calc_mult(car_dict["multiplier"])

    def eval_waveform(phase, wf_type):
        phase = phase % (2.0 * np.pi)
        if wf_type == 1:
            return np.where(phase < np.pi, np.sin(phase), 0.0)
        elif wf_type == 2:
            return np.abs(np.sin(phase))
        elif wf_type == 3:
            return np.where(phase < np.pi * 0.5, np.sin(phase), 0.0)
        return np.sin(phase)

    def build_envelope(op_dict):
        att_rate = op_dict["attack"]
        dec_rate = op_dict["decay"]
        sus_lvl = op_dict["sustain"]
        rel_rate = op_dict["release"]

        att_time = max(0.002, (15 - att_rate) * 0.025)
        dec_time = max(0.01, (15 - dec_rate) * 0.06)
        sus_gain = max(0.0, 1.0 - (sus_lvl / 15.0))
        rel_time = max(0.02, (15 - rel_rate) * 0.05)

        gate_time = duration * 0.65
        t = np.linspace(0, duration, total_samples, endpoint=False)
        env = np.zeros(total_samples, dtype=np.float32)

        for i, ct in enumerate(t):
            if ct < att_time:
                env[i] = ct / att_time
            elif ct < att_time + dec_time:
                frac = (ct - att_time) / dec_time
                env[i] = 1.0 - frac * (1.0 - sus_gain)
            elif ct < gate_time:
                env[i] = sus_gain
            else:
                rel_frac = (ct - gate_time) / rel_time
                env[i] = max(0.0, sus_gain * (1.0 - rel_frac))

        tl_gain = np.power(10.0, -(op_dict["total_level"] / 63.0) * 2.0)
        return env * tl_gain

    env_mod = build_envelope(mod_dict)
    env_car = build_envelope(car_dict)

    out = np.zeros(total_samples, dtype=np.float32)
    phase_m = 0.0
    phase_c = 0.0
    fb_val = 0.0
    fb_factor = inst["feedback"] * 0.25
    is_additive = (inst["connection"] == "Additive")
    mod_index = 4.0

    for n in range(total_samples):
        m_sample = env_mod[n] * float(eval_waveform(phase_m + fb_val * fb_factor, mod_dict["waveform"]))
        fb_val = m_sample

        if is_additive:
            c_sample = env_car[n] * float(eval_waveform(phase_c, car_dict["waveform"]))
            out[n] = (c_sample + m_sample) * 0.5
        else:
            c_sample = env_car[n] * float(eval_waveform(phase_c + m_sample * mod_index, car_dict["waveform"]))
            out[n] = c_sample

        phase_m += 2.0 * np.pi * f_mod * dt
        phase_c += 2.0 * np.pi * f_car * dt

    peak = np.max(np.abs(out))
    if peak > 1e-4:
        out = (out / peak) * 0.85
    return (out * 32767).astype(np.int16)


def export_sample_wavs(parsed_p3: dict, out_wav_dir: str):
    """Generates standard 16-bit PCM WAV audio previews for key PATCH.003 instruments."""
    sample_presets = [
        (0, "inst_000_grand_piano.wav", 261.63, 1.5),   # Middle C (C4)
        (33, "inst_033_electric_bass.wav", 110.0, 1.2),  # Low A (A2)
        (80, "inst_080_synth_lead.wav", 440.0, 1.5),     # Concert A (A4)
        (127, "inst_127_gunshot_sfx.wav", 80.0, 1.8),    # Low impact rumble
        (128, "inst_128_bass_drum.wav", 65.4, 0.8),      # Kick (C2)
        (130, "inst_130_snare_drum.wav", 185.0, 0.7),    # Snare (F#3)
    ]

    for idx, fname, freq, dur in sample_presets:
        inst = parsed_p3["instruments"][idx]
        pcm = synthesize_opl2_instrument(inst, note_freq=freq, duration=dur)
        wav_path = os.path.join(out_wav_dir, fname)
        with wave.open(wav_path, "wb") as wf:
            wf.setnchannels(1)
            wf.setsampwidth(2)
            wf.setframerate(44100)
            wf.writeframes(pcm.tobytes())
        print(f"[OK] Rendered OPL2 WAV audio: {wav_path} ({len(pcm)} samples @ 44.1kHz)")

    # Render a short musical arpeggio demo (C4 -> E4 -> G4 -> C5) using Lead Synth (#80) and Bass (#33)
    sr = 44100
    notes = [
        (261.63, 0.3, 33),  # Bass C
        (329.63, 0.3, 80),  # Lead E
        (392.00, 0.3, 80),  # Lead G
        (523.25, 0.6, 80),  # Lead C5
    ]
    medley = []
    for freq, dur, i_idx in notes:
        inst = parsed_p3["instruments"][i_idx]
        medley.append(synthesize_opl2_instrument(inst, note_freq=freq, duration=dur, sample_rate=sr))
    medley_pcm = np.concatenate(medley)
    medley_path = os.path.join(out_wav_dir, "patch003_opl2_medley_preview.wav")
    with wave.open(medley_path, "wb") as wf:
        wf.setnchannels(1)
        wf.setsampwidth(2)
        wf.setframerate(sr)
        wf.writeframes(medley_pcm.tobytes())
    print(f"[OK] Rendered OPL2 Medley WAV: {medley_path}")


def render_mt32_lcd_display(parsed_p1: dict, out_png_path: str):
    """Renders authentic Roland MT-32 20x2 dot-matrix backlit LCD display."""
    # 20 chars x 2 lines. Roland MT-32 has a phosphorescent green/yellow LCD display.
    # Dot matrix: 5x7 dots per character cell, with 1-dot spacing.
    char_w, char_h = 5, 7
    dot_size = 4
    dot_gap = 1
    cell_w = char_w * (dot_size + dot_gap) + 4
    cell_h = char_h * (dot_size + dot_gap) + 6

    disp_cols, disp_rows = 20, 2
    lcd_w = disp_cols * cell_w + 32
    lcd_h = disp_rows * cell_h + 32

    # Overall image with two display screens (Screen 1: Welcome, Screen 2: Thanks)
    total_w = lcd_w + 64
    total_h = lcd_h * 2 + 100

    img = Image.new("RGB", (total_w, total_h), (24, 26, 30))
    draw = ImageDraw.Draw(img)

    # Bezel styling
    draw.rectangle([(10, 10), (total_w - 10, total_h - 10)], outline=(60, 65, 75), width=2)
    draw.text((24, 20), "ROLAND MT-32 / LAPC-I LCD DISPLAY EMULATION - FIREHAWK: THEXDER II", fill=(180, 195, 215))

    screens = [
        ("INITIALIZATION SCREEN (At Boot / Driver Init)", parsed_p1["lcd_messages"][0], parsed_p1["lcd_messages"][1]),
        ("ALTERNATE TITLE SCREEN (Credits & Sound Bank Info)", parsed_p1["lcd_messages"][2], "FIREHAWK  64 TIMBRES")
    ]

    # Minimal 5x7 bitmap font for standard ASCII uppercase/numbers/symbols
    # Simple fallback renderer using PIL text on virtual grid
    for s_idx, (screen_title, line1, line2) in enumerate(screens):
        sy = 54 + s_idx * (lcd_h + 36)
        draw.text((32, sy - 18), screen_title, fill=(120, 140, 160))

        # LCD Frame (Chassis recess)
        draw.rectangle([(32, sy), (32 + lcd_w, sy + lcd_h)], fill=(12, 18, 14), outline=(40, 48, 42), width=3)
        # LCD Glass (Backlit green/teal glow)
        draw.rectangle([(42, sy + 10), (42 + lcd_w - 20, sy + lcd_h - 10)], fill=(28, 56, 44))

        # Render 2 lines
        for r_idx, text in enumerate([line1, line2]):
            padded_text = text.ljust(20)[:20]
            for c_idx, char in enumerate(padded_text):
                cx = 50 + c_idx * cell_w
                cy = sy + 18 + r_idx * cell_h

                # Character cell background (subtle unlit matrix dots)
                for gy in range(char_h):
                    for gx in range(char_w):
                        dx = cx + gx * (dot_size + dot_gap)
                        dy = cy + gy * (dot_size + dot_gap)
                        draw.rectangle([(dx, dy), (dx + dot_size - 1, dy + dot_size - 1)], fill=(34, 68, 54))

                # Draw lit character using PIL
                # Create mini character stamp
                c_img = Image.new("L", (char_w * 4, char_h * 4), 0)
                c_draw = ImageDraw.Draw(c_img)
                c_draw.text((0, -2), char, fill=255)
                # Resample and threshold
                c_thumb = c_img.resize((char_w, char_h), Image.Resampling.BILINEAR)
                for gy in range(char_h):
                    for gx in range(char_w):
                        lum = c_thumb.getpixel((gx, gy))
                        if lum > 90:
                            dx = cx + gx * (dot_size + dot_gap)
                            dy = cy + gy * (dot_size + dot_gap)
                            draw.rectangle([(dx, dy), (dx + dot_size - 1, dy + dot_size - 1)], fill=(140, 255, 170))

    img.save(out_png_path)


def render_opl2_adsr_envelopes(parsed_p3: dict, out_png_path: str):
    """Renders ADSR envelope curves for sample AdLib FM instruments."""
    img_w, img_h = 760, 480
    img = Image.new("RGB", (img_w, img_h), (20, 24, 30))
    draw = ImageDraw.Draw(img)

    draw.text((24, 16), "ADLIB / SOUND BLASTER (OPL2) FM ADSR ENVELOPES (PATCH.003)", fill=(230, 235, 245))
    draw.text((24, 34), "Modulator (Yellow/Gold) vs. Carrier (Cyan/Aqua) Operator Envelopes", fill=(140, 155, 175))

    # Pick 4 representative instruments:
    # 0: Melodic 0 (Grand Piano / Lead)
    # 33: Melodic 33 (Electric/Funk Bass)
    # 80: Melodic 80 (Square Lead)
    # 127: Melodic 127 (Gunshot / SFX)
    sample_indices = [0, 33, 80, 127]
    names = ["Preset #00 (Acoustic Piano)", "Preset #33 (Electric Bass)", "Preset #80 (Square Synth Lead)", "Preset #127 (Gunshot / Explosive SFX)"]

    for plot_idx, i_idx in enumerate(sample_indices):
        inst = parsed_p3["instruments"][i_idx]
        px = 30 + (plot_idx % 2) * 360
        py = 70 + (plot_idx // 2) * 195
        pw, ph = 330, 170

        draw.rectangle([(px, py), (px + pw, py + ph)], fill=(15, 18, 22), outline=(45, 52, 64), width=1)
        draw.text((px + 10, py + 8), f"{names[plot_idx]} [ID {i_idx}]", fill=(210, 220, 230))
        draw.text((px + 10, py + 24), f"Mode: {inst['connection']} | FB: {inst['feedback']}", fill=(110, 125, 140))

        # Axis
        gx = px + 20
        gy = py + 45
        gw = pw - 40
        gh = ph - 65
        draw.line([(gx, gy + gh), (gx + gw, gy + gh)], fill=(60, 70, 85), width=1)
        draw.line([(gx, gy), (gx, gy + gh)], fill=(60, 70, 85), width=1)

        # Draw ADSR curve for Operator
        def draw_adsr(op_dict, color):
            # Attack: 0 (slowest) to 15 (fastest). Convert to pixels
            att = max(1, 16 - op_dict["attack"]) * 4
            dec = max(1, 16 - op_dict["decay"]) * 3
            # Sustain: 0 (loudest) to 15 (quietest) in OPL2 attenuation
            sus_lvl = gh - (gh * (15 - op_dict["sustain"]) / 15.0)
            sus_len = 50
            rel = max(1, 16 - op_dict["release"]) * 4

            pts = [
                (gx, gy + gh),
                (gx + att, gy),
                (gx + att + dec, gy + sus_lvl),
                (gx + att + dec + sus_len, gy + sus_lvl),
                (gx + att + dec + sus_len + rel, gy + gh),
            ]
            draw.line(pts, fill=color, width=2)

        # Modulator in Gold, Carrier in Cyan
        draw_adsr(inst["modulator"], (240, 190, 60))
        draw_adsr(inst["carrier"], (40, 210, 220))

    img.save(out_png_path)


def render_patch_architecture_overview(parsed_p1: dict, parsed_p3: dict, parsed_p101: dict, out_png_path: str):
    """Renders comprehensive architectural matrix infographic of all three PATCH files."""
    img_w, img_h = 860, 640
    img = Image.new("RGB", (img_w, img_h), (18, 20, 25))
    draw = ImageDraw.Draw(img)

    # Title Banner
    draw.rectangle([(0, 0), (img_w, 56)], fill=(26, 32, 42))
    draw.text((24, 12), "FIREHAWK: THEXDER II - AUDIO PATCH ARCHITECTURE MATRIX", fill=(240, 245, 255))
    draw.text((24, 32), "Hardware-Specific Sound Banks: Roland MT-32, AdLib OPL2 FM, & Creative CMS", fill=(120, 140, 165))

    cards = [
        {
            "x": 24, "y": 74, "w": 260, "h": 530,
            "title": "PATCH.001 (Roland MT-32)",
            "subtitle": "MIDI SysEx & Timbre Bank",
            "accent": (230, 90, 110),
            "lines": [
                f"File Size: 9,735 B raw -> 16,637 B",
                f"Algorithm: 9-12 bit Firehawk LZW",
                f"Resource Type: 0x89 (RES_PATCH)",
                f"Header: 'MT32 - THEX2 '",
                "",
                "--- SUBSECTIONS ---",
                "1. LCD Messages (60 Bytes):",
                f"   '{parsed_p1['lcd_messages'][0]}'",
                f"   '{parsed_p1['lcd_messages'][1]}'",
                f"   '{parsed_p1['lcd_messages'][2]}'",
                "",
                "2. System Setup (432 Bytes):",
                "   Reverb: Room/Hall, Master Vol,",
                "   Partial Reserve across 9 parts",
                "",
                "3. Custom Timbre Bank (15,744 B):",
                f"   64 User Timbres @ 246 B each",
                "   - Funk Bass, MiniBass, BIG Bass",
                "   - Liquid Low, XmasChoir, Wind Bell",
                "   - SFX: Laser, Shield, Explode",
                "",
                "4. Rhythm Setup Map (386 Bytes):",
                "   Drum note mappings (keys 33..87)",
            ]
        },
        {
            "x": 300, "y": 74, "w": 260, "h": 530,
            "title": "PATCH.003 (AdLib / SB)",
            "subtitle": "OPL2 2-Operator FM Timbres",
            "accent": (40, 210, 180),
            "lines": [
                f"File Size: 1,212 B raw -> 2,706 B",
                f"Algorithm: 9-12 bit Firehawk LZW",
                f"Resource Type: 0x89 (RES_PATCH)",
                f"Header: 'AdLib - THEX2 '",
                "",
                "--- SUBSECTIONS ---",
                "1. Melodic Bank (1,792 Bytes):",
                "   128 Melodic Presets (0..127)",
                "   14 Bytes per Voice Definition",
                "",
                "2. Rhythm Bank (896 Bytes):",
                "   64 Percussion Presets",
                "   Mapped to BassDrum, Snare, Cymbal",
                "",
                "3. OPL2 Register Parameters:",
                "   - Reg 0x20/0x23: AM/VIB/KSR/Mult",
                "   - Reg 0x40/0x43: Total Level/KSL",
                "   - Reg 0x60/0x63: Attack / Decay",
                "   - Reg 0x80/0x83: Sustain / Release",
                "   - Reg 0xC0: Feedback / Connection",
                "   - Reg 0xE0/0xE3: Waveform Select",
                "",
                "4. Sentinel: 0x03 0x03 (2 Bytes)",
            ]
        },
        {
            "x": 576, "y": 74, "w": 260, "h": 530,
            "title": "PATCH.101 (Creative CMS)",
            "subtitle": "Game Blaster SAA1099 Mapping",
            "accent": (240, 180, 50),
            "lines": [
                f"File Size: 71 B raw -> 314 B",
                f"Algorithm: 9-12 bit Firehawk LZW",
                f"Resource Type: 0x89 (RES_PATCH)",
                f"Header: Length 0 (No banner)",
                "",
                "--- SUBSECTIONS ---",
                "1. Program Map Table (256 Bytes):",
                "   128 16-bit word entries",
                "   Translates MIDI Program Changes",
                "   to SAA1099 Dual Square-Wave",
                "   Channel Allocations",
                "",
                "2. Noise Generator Table (56 Bytes):",
                "   Noise octave & frequency",
                "   registers for rhythm effects",
                "   Trailing 0xFF padding",
                "",
                "--- HARDWARE STATUS ---",
                "Philips SAA1099 sound generators",
                "12 stereo square wave channels",
                "2 noise generators, 2 envelopes",
            ]
        }
    ]

    for card in cards:
        cx, cy, cw, ch = card["x"], card["y"], card["w"], card["h"]
        draw.rectangle([(cx, cy), (cx + cw, cy + ch)], fill=(22, 26, 33), outline=(42, 50, 62), width=1)
        draw.rectangle([(cx, cy), (cx + cw, cy + 32)], fill=(28, 34, 44))
        draw.line([(cx, cy + 32), (cx + cw, cy + 32)], fill=card["accent"], width=2)
        draw.text((cx + 10, cy + 8), card["title"], fill=(235, 240, 250))
        draw.text((cx + 10, cy + 38), card["subtitle"], fill=card["accent"])

        line_y = cy + 60
        for line in card["lines"]:
            if line.startswith("---"):
                draw.text((cx + 10, line_y), line, fill=(160, 175, 195))
            elif line.startswith("1.") or line.startswith("2.") or line.startswith("3.") or line.startswith("4."):
                draw.text((cx + 10, line_y), line, fill=(215, 225, 240))
            else:
                draw.text((cx + 10, line_y), line, fill=(135, 145, 160))
            line_y += 18

    img.save(out_png_path)


def main():
    print("[*] Firehawk: Thexder II Audio Hardware Patch Decoder & Analyzer")
    print(f"[*] Processing assets in: {ASSETS_DIR}")

    # 1. Decompress files
    p1_size, p1_decomp = decompress_patch_file(os.path.join(ASSETS_DIR, "PATCH.001"))
    p3_size, p3_decomp = decompress_patch_file(os.path.join(ASSETS_DIR, "PATCH.003"))
    p101_size, p101_decomp = decompress_patch_file(os.path.join(ASSETS_DIR, "PATCH.101"))

    print(f"[OK] PATCH.001: {p1_size} bytes decompressed")
    print(f"[OK] PATCH.003: {p3_size} bytes decompressed")
    print(f"[OK] PATCH.101: {p101_size} bytes decompressed")

    # 2. Parse structures
    parsed_p1 = parse_patch_001(p1_decomp)
    parsed_p3 = parse_patch_003(p3_decomp)
    parsed_p101 = parse_patch_101(p101_decomp)

    # 3. Export Roland MT-32 SysEx file (.syx)
    syx_path = os.path.join(OUT_DIR, "mt32_thexder2.syx")
    export_mt32_sysex(parsed_p1, p1_decomp, syx_path)
    print(f"[OK] Exported Roland MT-32 SysEx bank: {syx_path} ({os.path.getsize(syx_path)} bytes)")

    # 4. Export JSON manifest
    manifest = {
        "title": "Firehawk: Thexder II - Audio Hardware Patch Manifest",
        "description": "Comprehensive decoded parameters for Roland MT-32, AdLib OPL2, and Creative CMS sound hardware",
        "patch_001_mt32": parsed_p1,
        "patch_003_adlib": parsed_p3,
        "patch_101_cms": parsed_p101,
    }
    manifest_path = os.path.join(OUT_DIR, "patch_manifest.json")
    with open(manifest_path, "w", encoding="utf-8") as f:
        json.dump(manifest, f, indent=2)
    print(f"[OK] Exported JSON manifest: {manifest_path}")

    # 5. Render Visual Graphics
    lcd_img_path = os.path.join(IMG_DIR, "mt32_lcd_display.png")
    render_mt32_lcd_display(parsed_p1, lcd_img_path)
    print(f"[OK] Rendered Roland MT-32 LCD display: {lcd_img_path}")

    opl2_img_path = os.path.join(IMG_DIR, "opl2_adsr_envelopes.png")
    render_opl2_adsr_envelopes(parsed_p3, opl2_img_path)
    print(f"[OK] Rendered OPL2 ADSR envelope curves: {opl2_img_path}")

    arch_img_path = os.path.join(IMG_DIR, "patch_architecture_overview.png")
    render_patch_architecture_overview(parsed_p1, parsed_p3, parsed_p101, arch_img_path)
    print(f"[OK] Rendered Patch Architecture Overview: {arch_img_path}")

    # 6. Render Synthesized WAV Previews
    export_sample_wavs(parsed_p3, WAV_DIR)

    print("\n[SUCCESS] All patch decoding and visualization tasks completed cleanly.")


if __name__ == "__main__":
    main()

