#!/usr/bin/env python3
"""
tools/grph_decoder.py
Authentic decoder and analysis tool for Firehawk: Thexder II GRPH planar EGA bitplane graphics.
Derived purely from raw disassembly (GAME.EXE 1000:0678, EGA640.DRV 0000:1909, MCGA320.DRV 0000:16df).
Does NOT use any synthetic or modern data from src/.
"""

import os
import sys
import argparse
from PIL import Image, ImageDraw

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
RES1_DIR = os.path.join(REPO_ROOT, "build", "extracted", "RES1")
DEFAULT_OUT_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data", "images")

# Authentic 16-color EGA hardware palette programmed by EGA640.DRV / MCGA320.DRV
EGA_DEFAULT_PALETTE = [
    (0x00, 0x00, 0x00), # 0: Black / Transparent
    (0x00, 0x00, 0xAA), # 1: Blue
    (0x00, 0xAA, 0x00), # 2: Green
    (0x00, 0xAA, 0xAA), # 3: Cyan
    (0xAA, 0x00, 0x00), # 4: Red
    (0xAA, 0x00, 0xAA), # 5: Magenta
    (0xAA, 0x55, 0x00), # 6: Brown
    (0xAA, 0xAA, 0xAA), # 7: Light Gray
    (0x55, 0x55, 0x55), # 8: Dark Gray
    (0x55, 0x55, 0xFF), # 9: Bright Blue
    (0x55, 0xFF, 0x55), # 10: Bright Green
    (0x55, 0xFF, 0xFF), # 11: Bright Cyan
    (0xFF, 0x55, 0x55), # 12: Bright Red
    (0xFF, 0x55, 0xFF), # 13: Bright Magenta
    (0xFF, 0xFF, 0x55), # 14: Bright Yellow
    (0xFF, 0xFF, 0xFF), # 15: Bright White
]

def decompress_firehawk_lzw(data: bytes) -> bytes:
    """
    Decompresses variable-width 9-to-12 bit LZW bitstream.
    Reverse-engineered directly from GAME.EXE routine 1000:252b.
    """
    if len(data) < 2:
        return data

    first_9 = (data[0] | ((data[1] & 1) << 8))
    if first_9 != 0x100:
        return data

    bit_offset = 0
    total_bits = len(data) * 8

    def read_code(bit_len):
        nonlocal bit_offset
        if bit_offset + bit_len > total_bits:
            return None
        byte_pos = bit_offset // 8
        bit_pos = bit_offset % 8
        val = data[byte_pos]
        if byte_pos + 1 < len(data):
            val |= (data[byte_pos + 1] << 8)
        if byte_pos + 2 < len(data):
            val |= (data[byte_pos + 2] << 16)
        val >>= bit_pos
        code = val & ((1 << bit_len) - 1)
        bit_offset += bit_len
        return code

    CLEAR_CODE = 0x100
    EOI_CODE = 0x101
    FIRST_CODE = 0x102

    output = bytearray()
    prefix = [0] * 4096
    suffix = [0] * 4096
    bit_len = 9
    next_code = FIRST_CODE
    old_code = None

    while True:
        code = read_code(bit_len)
        if code is None or code == EOI_CODE:
            break
        if code == CLEAR_CODE:
            bit_len = 9
            next_code = FIRST_CODE
            old_code = read_code(bit_len)
            if old_code is None or old_code == EOI_CODE:
                break
            output.append(old_code & 0xFF)
            continue

        stack = []
        c = code
        if code >= next_code:
            stack.append(suffix[old_code] if old_code >= FIRST_CODE else (old_code & 0xFF))
            c = old_code

        while c >= FIRST_CODE:
            stack.append(suffix[c])
            c = prefix[c]
        stack.append(c & 0xFF)
        first_char = c & 0xFF

        if code >= next_code:
            stack[0] = first_char

        while stack:
            output.append(stack.pop())

        if next_code < 4096:
            prefix[next_code] = old_code
            suffix[next_code] = first_char
            next_code += 1
            if next_code >= (1 << bit_len) and bit_len < 12:
                bit_len += 1

        old_code = code

    return bytes(output)

def decode_grph_planar_buffer(raw_buffer, scale=2):
    """
    Decodes 4-bitplane EGA planar rows into an RGBA PIL Image.
    Authentic row stride from EGA640.DRV 0000:1909:
    16 bytes per row (4 planes * 4 bytes = 32 pixels wide).
    """
    w = 32
    bytes_per_row = 16
    h = len(raw_buffer) // bytes_per_row

    img = Image.new("RGBA", (w * scale, h * scale), (0, 0, 0, 0))
    pix = img.load()

    for y in range(h):
        row_base = y * bytes_per_row
        p0 = raw_buffer[row_base + 0 : row_base + 4]
        p1 = raw_buffer[row_base + 4 : row_base + 8]
        p2 = raw_buffer[row_base + 8 : row_base + 12]
        p3 = raw_buffer[row_base + 12 : row_base + 16]

        for byte_idx in range(4):
            b0, b1, b2, b3 = p0[byte_idx], p1[byte_idx], p2[byte_idx], p3[byte_idx]
            for bit in range(8):
                shift = 7 - bit
                c_idx = (((b0 >> shift) & 1) |
                         (((b1 >> shift) & 1) << 1) |
                         (((b2 >> shift) & 1) << 2) |
                         (((b3 >> shift) & 1) << 3))

                px = (byte_idx * 8 + bit) * scale
                py = y * scale
                if c_idx != 0:
                    c = EGA_DEFAULT_PALETTE[c_idx]
                    rgba = (c[0], c[1], c[2], 255)
                else:
                    rgba = (0, 0, 0, 0)

                for dy in range(scale):
                    for dx in range(scale):
                        pix[px + dx, py + dy] = rgba

    return img, w, h

def export_hud_components(decomp_buffer, out_dir):
    """
    Exports isolated in-game HUD telemetry elements and composite dashboard
    as dynamically sliced and blitted by GAME.EXE (1000:0477, 1000:1f4d-1000:1ffc).
    Uses strictly the decoded EGA planar buffer from GRPH without synthetic src/ data.
    """
    os.makedirs(out_dir, exist_ok=True)
    img_1x, w, h = decode_grph_planar_buffer(decomp_buffer, scale=1)

    # 1. Radar Scope (Rows 0..31: 32x32)
    radar = img_1x.crop((0, 0, 32, 32))
    radar_4x = radar.resize((128, 128), Image.Resampling.NEAREST)
    radar_path = os.path.join(out_dir, "grph_radar_scope.png")
    radar_4x.save(radar_path)

    # 2. Status Gauges (8 scanlines each: 32x8)
    # Full / Normal (AL=0x34 -> row 52)
    g_normal = img_1x.crop((0, 52, 32, 60))
    g_normal_4x = g_normal.resize((128, 32), Image.Resampling.NEAREST)
    normal_path = os.path.join(out_dir, "grph_gauge_normal.png")
    g_normal_4x.save(normal_path)

    # Caution / Medium (AL=0x36 -> row 54)
    g_caution = img_1x.crop((0, 54, 32, 62))
    g_caution_4x = g_caution.resize((128, 32), Image.Resampling.NEAREST)
    caution_path = os.path.join(out_dir, "grph_gauge_caution.png")
    g_caution_4x.save(caution_path)

    # Critical / Warning (AL=0x32 -> row 50)
    g_critical = img_1x.crop((0, 50, 32, 58))
    g_critical_4x = g_critical.resize((128, 32), Image.Resampling.NEAREST)
    critical_path = os.path.join(out_dir, "grph_gauge_critical.png")
    g_critical_4x.save(critical_path)

    # 3. Docking & Guidance Reticle (Rows 60..73: 32x14)
    docking = img_1x.crop((0, 60, 32, 74))
    docking_4x = docking.resize((128, 56), Image.Resampling.NEAREST)
    docking_path = os.path.join(out_dir, "grph_docking_reticle.png")
    docking_4x.save(docking_path)

    # 4. Assembled Telemetry Dashboard (560x380)
    canvas = Image.new("RGBA", (560, 380), (14, 17, 23, 255))
    draw = ImageDraw.Draw(canvas)

    # Header
    draw.text((20, 16), "Firehawk: Thexder II - GRPH In-Game HUD Components", fill=(88, 166, 255, 255))
    draw.text((20, 34), "Assembled directly from raw EGA bitplane data (GAME.EXE 1000:1F4D dispatch)", fill=(139, 148, 158, 255))

    # Box 1: Radar Scope
    draw.rectangle([(20, 65), (170, 245)], outline=(48, 54, 61, 255), fill=(0, 0, 0, 255))
    canvas.paste(radar_4x, (31, 80), radar_4x)
    draw.text((25, 218), "1. Radar Scope (32x32)", fill=(121, 192, 255, 255))
    draw.text((25, 230), "Rows 00..31 (AL=0x00)", fill=(139, 148, 158, 255))

    # Box 2: Energy Gauges
    draw.rectangle([(190, 65), (360, 245)], outline=(48, 54, 61, 255), fill=(0, 0, 0, 255))
    draw.text((198, 72), "2. Energy Gauge States", fill=(121, 192, 255, 255))
    canvas.paste(g_normal_4x, (206, 95), g_normal_4x)
    draw.text((206, 122), "Full (AL=0x34): [05FDh] >= 15", fill=(85, 255, 85, 255))
    canvas.paste(g_caution_4x, (206, 140), g_caution_4x)
    draw.text((206, 167), "Caution (AL=0x36): 9 <= E < 15", fill=(255, 255, 85, 255))
    canvas.paste(g_critical_4x, (206, 185), g_critical_4x)
    draw.text((206, 212), "Critical (AL=0x32): E < 9", fill=(255, 85, 85, 255))

    # Box 3: Docking Reticle
    draw.rectangle([(380, 65), (540, 245)], outline=(48, 54, 61, 255), fill=(0, 0, 0, 255))
    canvas.paste(docking_4x, (396, 95), docking_4x)
    draw.text((388, 218), "3. Docking Marker (32x14)", fill=(121, 192, 255, 255))
    draw.text((388, 230), "Rows 60..73 (AL=0x44)", fill=(139, 148, 158, 255))

    # Bottom Technical Spec Box
    draw.rectangle([(20, 260), (540, 360)], outline=(48, 54, 61, 255), fill=(22, 27, 34, 255))
    draw.text((30, 270), "Runtime Video Driver Addressing (EGA640.DRV 0000:1909):", fill=(121, 192, 255, 255))
    draw.text((30, 290), "Source Pointer = [1686h] + (AL * 16)   |  Driver Blit Function: BP=0x38", fill=(230, 237, 243, 255))
    draw.text((30, 310), "In GAME.EXE, [1686h] points directly to buffer 0x6663 (GRPH asset start).", fill=(139, 148, 158, 255))
    draw.text((30, 330), "Decoded directly from assets/firehawk/GRPH (1,184 B) without any synthetic src/ code.", fill=(88, 166, 255, 255))

    board_path = os.path.join(out_dir, "grph_ingame_telemetry.png")
    canvas.save(board_path)

    print(f"[OK] Exported authentic HUD components to {out_dir}:")
    print(f"     - Radar Scope:       {radar_path}")
    print(f"     - Normal Gauge:      {normal_path}")
    print(f"     - Caution Gauge:     {caution_path}")
    print(f"     - Critical Gauge:    {critical_path}")
    print(f"     - Docking Reticle:   {docking_path}")
    print(f"     - Telemetry Board:   {board_path}")
    return True

def decode_and_save_grph(input_path, out_png_path, scale=2, export_hud=True):
    print("=" * 60)
    print(f"  AUTHENTIC GRPH DECODER: {input_path}")
    print("=" * 60)

    if not os.path.exists(input_path):
        print(f"[ERROR] Input file not found: {input_path}")
        return False

    with open(input_path, "rb") as f:
        file_bytes = f.read()

    decomp = decompress_firehawk_lzw(file_bytes)
    is_lzw = (len(decomp) != len(file_bytes))

    print(f"File Size        : {len(file_bytes)} bytes")
    print(f"LZW Compressed   : {is_lzw}")
    print(f"Decompressed Size: {len(decomp)} bytes")

    img, w, h = decode_grph_planar_buffer(decomp, scale=scale)
    print(f"Resolution       : {w} x {h} pixels (4-bitplane EGA, {h} scanlines)")
    print(f"Output Image     : {out_png_path} ({img.size[0]}x{img.size[1]} scaled {scale}x)")

    out_dir = os.path.dirname(os.path.abspath(out_png_path))
    os.makedirs(out_dir, exist_ok=True)
    img.save(out_png_path)
    print("[OK] Successfully rendered authentic PNG atlas.")

    if export_hud:
        export_hud_components(decomp, out_dir)

    return True

def main():
    parser = argparse.ArgumentParser(description="Decode Firehawk GRPH planar EGA assets to PNG")
    parser.add_argument("input", nargs="?", default=None, help="Input GRPH file path (loose or archive entry)")
    parser.add_argument("--out", "-o", default=None, help="Output PNG path")
    parser.add_argument("--scale", "-s", type=int, default=2, help="Scale factor (default 2)")
    parser.add_argument("--no-hud", action="store_true", help="Disable exporting in-game HUD component images")
    args = parser.parse_args()

    target_path = args.input
    if not target_path:
        target_path = os.path.join(ASSETS_DIR, "GRPH")
        if not os.path.exists(target_path):
            target_path = os.path.join(RES1_DIR, "GRPH.bin")

    out_path = args.out if args.out else os.path.join(DEFAULT_OUT_DIR, "grph_atlas.png")
    decode_and_save_grph(target_path, out_path, scale=args.scale, export_hud=not args.no_hud)

if __name__ == "__main__":
    main()
