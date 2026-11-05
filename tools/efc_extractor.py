#!/usr/bin/env python3
"""
tools/efc_extractor.py
Decompresses and extracts Firehawk: Thexder II Sound Effect files (EFC1 through EFC4)
into standard digital audio (WAV) and musical sequencer (MIDI) formats.

Formats extracted:
- EFC3 & EFC4 -> Standard 11,000 Hz, 8-bit unsigned mono PCM WAV files (.wav)
                 High-resolution time-domain oscillogram waveform diagrams (.png)
- EFC1 & EFC2 -> Standard MIDI Files (.mid - SMF Format 1) with multi-track events
                 Disassembled sequencer bytecode catalogs (.json)
"""

import os
import sys
import json
import wave
import struct
import argparse
import numpy as np
from PIL import Image, ImageDraw

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if REPO_ROOT not in sys.path:
    sys.path.insert(0, REPO_ROOT)

from tools.extract_graphics import decompress_firehawk_lzw

ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
OUT_BASE = os.path.join(REPO_ROOT, "reference", "extracted_data", "audio")

SFX_NAMES = [
    "sfx_0_laser_primary",
    "sfx_1_laser_secondary",
    "sfx_2_explosion_large",
    "sfx_3_missile_fire",
    "sfx_4_shield_activate",
    "sfx_5_explosion_small",
    "sfx_6_powerup_charge",
    "sfx_7_transformation",
    "sfx_8_warning_barrier"
]

def write_vlq(n: int) -> bytes:
    """Encodes an integer into a MIDI Variable-Length Quantity (VLQ)."""
    res = bytearray([n & 0x7F])
    n >>= 7
    while n > 0:
        res.insert(0, (n & 0x7F) | 0x80)
        n >>= 7
    return bytes(res)

def render_waveform_png(pcm_samples, sample_rate, title, out_png_path, width=640, height=160):
    """Renders a clean, high-resolution oscillogram waveform PNG using PIL."""
    samples = np.frombuffer(pcm_samples, dtype=np.uint8).astype(np.float32) - 128.0
    img = Image.new("RGB", (width, height), (18, 22, 28))
    draw = ImageDraw.Draw(img)

    # Grid / center line
    cy = height // 2
    draw.line([(0, cy), (width, cy)], fill=(45, 55, 72), width=1)
    for y_offset in [-40, 40]:
        draw.line([(0, cy + y_offset), (width, cy + y_offset)], fill=(28, 35, 48), width=1)

    step = len(samples) / float(width)
    for px in range(width):
        idx_start = int(px * step)
        idx_end = max(idx_start + 1, int((px + 1) * step))
        chunk = samples[idx_start:idx_end]
        if len(chunk) > 0:
            val_min = chunk.min()
            val_max = chunk.max()
            y1 = int(cy - (val_max / 128.0) * (height / 2 - 12))
            y2 = int(cy - (val_min / 128.0) * (height / 2 - 12))
            draw.line([(px, y1), (px, y2)], fill=(0, 224, 180), width=1)

    duration_sec = len(samples) / float(sample_rate)
    header_str = f"{title} | {duration_sec:.2f}s ({len(samples)} samples @ {sample_rate}Hz, 8-bit PCM)"
    draw.text((12, 8), header_str, fill=(230, 235, 240))

    img.save(out_png_path)

def disassemble_bytecode_track(track_bytes, channel_id):
    """Decodes Game Arts sequencer bytecode into structured MIDI/synth events."""
    events = []
    pos = 0
    while pos < len(track_bytes):
        b = track_bytes[pos]
        if b == 0xFC:
            events.append({"offset": pos, "type": "END_OF_TRACK", "hex": "FC"})
            pos += 1
            break
        elif (b & 0xF0) == 0x90: # Note On
            ch = b & 0x0F
            note = track_bytes[pos+1] if pos+1 < len(track_bytes) else 0
            vel = track_bytes[pos+2] if pos+2 < len(track_bytes) else 0
            dur = track_bytes[pos+3] if pos+3 < len(track_bytes) else 0
            events.append({
                "offset": pos,
                "type": "NOTE_ON",
                "channel": ch,
                "note": note,
                "velocity": vel,
                "duration": dur,
                "hex": track_bytes[pos:pos+4].hex()
            })
            pos += 4
        elif (b & 0xF0) == 0xB0: # Control Change
            ch = b & 0x0F
            ctrl = track_bytes[pos+1] if pos+1 < len(track_bytes) else 0
            val = track_bytes[pos+2] if pos+2 < len(track_bytes) else 0
            ctrl_name = "VOLUME" if ctrl == 7 else f"CC_{ctrl}"
            events.append({
                "offset": pos,
                "type": "CONTROL_CHANGE",
                "channel": ch,
                "controller": ctrl_name,
                "value": val,
                "hex": track_bytes[pos:pos+4].hex()
            })
            pos += 4
        elif (b & 0xF0) == 0xC0: # Program Change
            ch = b & 0x0F
            prog = track_bytes[pos+1] if pos+1 < len(track_bytes) else 0
            events.append({
                "offset": pos,
                "type": "PROGRAM_CHANGE",
                "channel": ch,
                "program": prog,
                "hex": track_bytes[pos:pos+3].hex()
            })
            pos += 3
        else: # Note pitch modulation / delay
            events.append({
                "offset": pos,
                "type": "PARAM_OR_DELAY",
                "val0": b,
                "val1": track_bytes[pos+1] if pos+1 < len(track_bytes) else 0,
                "val2": track_bytes[pos+2] if pos+2 < len(track_bytes) else 0,
                "hex": track_bytes[pos:pos+3].hex()
            })
            pos += 3
    return events

def track_bytecode_to_midi_track(track_bytes, track_name="Track"):
    """Encodes a single Game Arts sequencer bytecode track into a Standard MIDI MTrk chunk."""
    events = bytearray()

    # Meta Event: Track Name (FF 03)
    name_bytes = track_name.encode("ascii", errors="replace")
    events += write_vlq(0) + b"\xff\x03" + write_vlq(len(name_bytes)) + name_bytes

    # Meta Event: Set Tempo (FF 51 03) -> 120 BPM (500,000 microseconds per beat)
    events += write_vlq(0) + b"\xff\x51\x03\x07\xa1\x20"

    pos = 0
    cur_ch = 0
    active_notes = []
    delta_ticks = 0

    while pos < len(track_bytes):
        b = track_bytes[pos]
        if b == 0xFC: # End of Track
            break
        elif (b & 0xF0) == 0xC0: # Program Change
            cur_ch = b & 0x0F
            prog = track_bytes[pos+1] if pos+1 < len(track_bytes) else 0
            events += write_vlq(delta_ticks) + bytes([b, prog])
            delta_ticks = 0
            pos += 3
        elif (b & 0xF0) == 0xB0: # Control Change
            cur_ch = b & 0x0F
            ctrl = track_bytes[pos+1] if pos+1 < len(track_bytes) else 0
            val = track_bytes[pos+2] if pos+2 < len(track_bytes) else 0
            events += write_vlq(delta_ticks) + bytes([b, ctrl, val])
            delta_ticks = 0
            pos += 4
        elif (b & 0xF0) == 0x90: # Note On
            cur_ch = b & 0x0F
            note = track_bytes[pos+1] if pos+1 < len(track_bytes) else 60
            vel = track_bytes[pos+2] if pos+2 < len(track_bytes) else 64
            dur = track_bytes[pos+3] if pos+3 < len(track_bytes) else 4
            events += write_vlq(delta_ticks) + bytes([b, note, vel])
            active_notes.append((note, cur_ch))
            delta_ticks = max(4, dur * 8)
            pos += 4
        elif b in (0x00, 0x01, 0x0A, 0x0B): # Voice init
            if pos + 2 < len(track_bytes) and track_bytes[pos+1] == 0x01 and track_bytes[pos+2] == 0x00:
                cur_ch = b & 0x0F
                pos += 3
            else:
                pos += 1
        else: # Note Off or note slide
            note = b
            vel = track_bytes[pos+1] if pos+1 < len(track_bytes) else 0
            dur = track_bytes[pos+2] if pos+2 < len(track_bytes) else 0
            if vel == 0:
                events += write_vlq(delta_ticks) + bytes([0x80 | cur_ch, note, 0])
                if (note, cur_ch) in active_notes:
                    active_notes.remove((note, cur_ch))
            else:
                events += write_vlq(delta_ticks) + bytes([0x90 | cur_ch, note, vel])
                active_notes.append((note, cur_ch))
            delta_ticks = max(4, dur * 8)
            pos += 3

    # Close remaining active notes
    for n, ch in active_notes:
        events += write_vlq(delta_ticks) + bytes([0x80 | ch, n, 0])
        delta_ticks = 0

    # Meta Event: End of Track (FF 2F 00)
    events += write_vlq(delta_ticks) + b"\xff\x2f\x00"

    # Wrap in MTrk chunk
    return b"MTrk" + struct.pack(">I", len(events)) + bytes(events)

def create_midi_file(tracks, out_midi_path):
    """Packages multiple MTrk chunks into a valid Standard MIDI File (Format 1)."""
    header = b"MThd" + struct.pack(">IHHH", 6, 1, len(tracks), 96) # Format 1, 96 ticks/quarter note
    midi_content = header + b"".join(tracks)
    with open(out_midi_path, "wb") as f:
        f.write(midi_content)

def process_efc_file(file_path):
    fn = os.path.basename(file_path)
    with open(file_path, "rb") as f:
        raw_data = f.read()

    expected_decomp_len = struct.unpack("<I", raw_data[:4])[0]
    decomp_data = decompress_firehawk_lzw(raw_data[4:])
    
    if len(decomp_data) != expected_decomp_len:
        print(f"[WARN] Decompressed size mismatch for {fn}: got {len(decomp_data)}, expected {expected_decomp_len}")

    is_pcm = fn in ["EFC3", "EFC4"]

    out_dir = os.path.join(OUT_BASE, fn.lower())
    os.makedirs(out_dir, exist_ok=True)
    if is_pcm:
        waveforms_dir = os.path.join(out_dir, "waveforms")
        os.makedirs(waveforms_dir, exist_ok=True)
    else:
        midi_dir = os.path.join(out_dir, "midi")
        os.makedirs(midi_dir, exist_ok=True)

    sec_offsets = list(struct.unpack("<9H", decomp_data[:18]))
    sec_offsets.append(len(decomp_data))

    catalog = {
        "file": fn,
        "compressed_size": len(raw_data),
        "decompressed_size": len(decomp_data),
        "format_type": "DIGITAL_PCM_AUDIO" if is_pcm else "SYNTH_SEQUENCER_BYTECODE",
        "sections": []
    }

    for sec_idx in range(9):
        s_start = sec_offsets[sec_idx]
        s_end = sec_offsets[sec_idx + 1]
        sec_bytes = decomp_data[s_start:s_end]
        sfx_label = SFX_NAMES[sec_idx] if sec_idx < len(SFX_NAMES) else f"sfx_{sec_idx}"

        sec_info = {
            "index": sec_idx,
            "label": sfx_label,
            "offset_in_decomp": s_start,
            "section_length": len(sec_bytes)
        }

        if is_pcm:
            # Sub-header at offset 36 (0x24)
            sample_rate = struct.unpack("<H", sec_bytes[40:42])[0]
            pcm_len = struct.unpack("<H", sec_bytes[42:44])[0]
            pcm_samples = sec_bytes[44 : 44 + pcm_len]

            # 1. Export standard WAV
            wav_name = f"{fn.lower()}_{sfx_label}.wav"
            wav_path = os.path.join(out_dir, wav_name)
            with wave.open(wav_path, "wb") as wf:
                wf.setnchannels(1)
                wf.setsampwidth(1) # 8-bit unsigned
                wf.setframerate(sample_rate)
                wf.writeframes(pcm_samples)

            # 2. Render visual waveform PNG
            png_name = f"{fn.lower()}_{sfx_label}_waveform.png"
            png_path = os.path.join(waveforms_dir, png_name)
            render_waveform_png(pcm_samples, sample_rate, f"{fn} - {sfx_label.upper()}", png_path)

            sec_info["pcm"] = {
                "sample_rate": sample_rate,
                "sample_count": len(pcm_samples),
                "duration_seconds": round(len(pcm_samples) / float(sample_rate), 4),
                "wav_file": wav_name,
                "waveform_png": png_name
            }
        else:
            # Synth sequencer bytecode -> Extract to Standard MIDI File (.mid)
            pos = 5
            channel_tracks = []
            midi_tracks = []
            seen_offsets = set()

            track_num = 1
            while pos + 8 <= len(sec_bytes):
                off, length, marker, ch, unk = struct.unpack("<HHBBH", sec_bytes[pos:pos+8])
                if marker == 0xFF and ch == 0xFF:
                    break
                track_bytes = sec_bytes[off : off + length]
                events = disassemble_bytecode_track(track_bytes, ch)
                channel_tracks.append({
                    "channel_id": f"0x{ch:02X}",
                    "track_offset": off,
                    "track_length": length,
                    "event_count": len(events),
                    "events": events
                })

                # Build MIDI track for each unique track offset
                if off not in seen_offsets:
                    seen_offsets.add(off)
                    mtrk = track_bytecode_to_midi_track(track_bytes, f"Voice {track_num} (Ch 0x{ch:02X})")
                    midi_tracks.append(mtrk)
                    track_num += 1

                pos += 8

            # Export to SMF Format 1 (.mid)
            midi_name = f"{fn.lower()}_{sfx_label}.mid"
            midi_path = os.path.join(midi_dir, midi_name)
            if not midi_tracks:
                # If table was sparse, encode entire section data as single track
                midi_tracks.append(track_bytecode_to_midi_track(sec_bytes[32:], "Voice 1"))
            create_midi_file(midi_tracks, midi_path)

            sec_info["synth"] = {
                "channel_count": len(channel_tracks),
                "midi_file": midi_name,
                "tracks": channel_tracks
            }

        catalog["sections"].append(sec_info)

    json_path = os.path.join(out_dir, f"{fn.lower()}_catalog.json")
    with open(json_path, "w", encoding="utf-8") as f:
        json.dump(catalog, f, indent=2)

    print(f"[OK] Processed {fn} -> {out_dir} ({len(catalog['sections'])} sections)")
    return catalog

def main():
    parser = argparse.ArgumentParser(description="Firehawk: Thexder II EFC Sound Effect Extractor")
    parser.add_argument("--all", action="store_true", default=True, help="Extract all sound archives (WAV and MIDI)")
    args = parser.parse_args()

    print("=" * 70)
    print("Firehawk: Thexder II EFC Sound Extractor (WAV & MIDI Export)")
    print("=" * 70)

    all_catalogs = []
    for efc in ["EFC1", "EFC2", "EFC3", "EFC4"]:
        p = os.path.join(ASSETS_DIR, efc)
        if os.path.exists(p):
            cat = process_efc_file(p)
            all_catalogs.append(cat)

    summary_path = os.path.join(OUT_BASE, "efc_decoding_summary.json")
    with open(summary_path, "w", encoding="utf-8") as f:
        json.dump(all_catalogs, f, indent=2)

    print(f"\n[DONE] Successfully extracted:")
    print(f"  - EFC3 & EFC4 -> Playable 11,000 Hz 8-bit Mono WAV files + Waveform PNGs")
    print(f"  - EFC1 & EFC2 -> Standard MIDI Files (.mid) + Bytecode JSON Catalogs")
    print(f"  - Location: {OUT_BASE}")

if __name__ == "__main__":
    main()
