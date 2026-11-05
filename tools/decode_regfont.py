#!/usr/bin/env python3
"""
decode_regfont.py - Forensic decoder and visualizer for Firehawk: Thexder II REGFONT.

Features:
- Decompresses 9-12 bit variable LZW container
- Validates 4-byte uncompressed size header (0x00001000 = 4096 bytes)
- Renders authentic 8x8 MCGA bitmap font atlas
- Renders authentic 16x8 EGA bitmap font atlas
- Renders annotated character chart with ASCII and Japanese kana mapping
- Renders arbitrary text strings using the authentic in-game font
- Exports raw binary and JSON character catalog
"""

import os
import sys
import argparse
import json
from PIL import Image, ImageDraw, ImageFont

# Add tools directory to path for LZW decompressor
TOOLS_DIR = os.path.dirname(os.path.abspath(__file__))
if TOOLS_DIR not in sys.path:
    sys.path.insert(0, TOOLS_DIR)

from extract_graphics import decompress_firehawk_lzw


def load_regfont(font_path):
    """
    Reads and decompresses REGFONT container.
    Returns (header_decomp_size, decompressed_bytes).
    """
    with open(font_path, "rb") as f:
        file_bytes = f.read()

    if len(file_bytes) < 4:
        raise ValueError(f"File too small to contain valid header: {len(file_bytes)} bytes")

    header_decomp_size = int.from_bytes(file_bytes[:4], "little")
    raw_font = decompress_firehawk_lzw(file_bytes[4:])

    if len(raw_font) != header_decomp_size:
        raise ValueError(
            f"Decompressed size mismatch: header expects {header_decomp_size} bytes, got {len(raw_font)} bytes"
        )

    return header_decomp_size, raw_font


def render_mcga_sheet(raw_font, out_path, scale=4, grid_cols=16):
    """
    Renders 8x8 MCGA font sheet (256 characters in 16x16 grid).
    In MCGA 320x200 mode, each 16-bit word is downsampled by taking bit pairs.
    """
    num_chars = len(raw_font) // 16
    grid_rows = (num_chars + grid_cols - 1) // grid_cols
    cw, ch = 8, 8
    pad = 2

    w = grid_cols * (cw * scale + pad) + pad
    h = grid_rows * (ch * scale + pad) + pad

    img = Image.new("RGBA", (w, h), (18, 22, 28, 255))
    pix = img.load()

    for idx in range(num_chars):
        col_idx = idx % grid_cols
        row_idx = idx // grid_cols
        gx = col_idx * (cw * scale + pad) + pad
        gy = row_idx * (ch * scale + pad) + pad
        block = raw_font[idx * 16 : (idx + 1) * 16]

        for r in range(8):
            w16 = (block[r * 2] << 8) | block[r * 2 + 1]
            for c in range(8):
                bit = (w16 >> (15 - c * 2)) & 1
                color = (245, 245, 250, 255) if bit else (28, 34, 42, 255)
                for dy in range(scale):
                    for dx in range(scale):
                        pix[gx + c * scale + dx, gy + r * scale + dy] = color

    img.save(out_path)
    print(f"[OK] MCGA 8x8 Font Sheet saved to: {out_path} ({w}x{h})")
    return img


def render_ega_sheet(raw_font, out_path, scale=2, grid_cols=16):
    """
    Renders 16x8 EGA font sheet (256 characters in 16x16 grid).
    In EGA 640x200 mode, each 16-bit word corresponds to 16 horizontal pixels.
    """
    num_chars = len(raw_font) // 16
    grid_rows = (num_chars + grid_cols - 1) // grid_cols
    cw, ch = 16, 8
    pad = 2

    w = grid_cols * (cw * scale + pad) + pad
    h = grid_rows * (ch * scale + pad) + pad

    img = Image.new("RGBA", (w, h), (18, 22, 28, 255))
    pix = img.load()

    for idx in range(num_chars):
        col_idx = idx % grid_cols
        row_idx = idx // grid_cols
        gx = col_idx * (cw * scale + pad) + pad
        gy = row_idx * (ch * scale + pad) + pad
        block = raw_font[idx * 16 : (idx + 1) * 16]

        for r in range(8):
            w16 = (block[r * 2] << 8) | block[r * 2 + 1]
            for c in range(16):
                bit = (w16 >> (15 - c)) & 1
                color = (80, 230, 160, 255) if bit else (28, 34, 42, 255)
                for dy in range(scale):
                    for dx in range(scale):
                        pix[gx + c * scale + dx, gy + r * scale + dy] = color

    img.save(out_path)
    print(f"[OK] EGA 16x8 Font Sheet saved to: {out_path} ({w}x{h})")
    return img


def render_annotated_sheet(raw_font, out_path):
    """
    Generates a high-resolution forensic reference atlas with slot index numbers,
    ASCII character representations, and category labels.
    """
    num_chars = len(raw_font) // 16
    cols, rows = 16, 16
    cell_w, cell_h = 44, 48
    glyph_scale = 3
    margin = 32

    img_w = cols * cell_w + margin * 2
    img_h = rows * cell_h + margin * 2 + 40

    img = Image.new("RGBA", (img_w, img_h), (14, 17, 23, 255))
    draw = ImageDraw.Draw(img)

    # Title
    draw.text((margin, 12), "FIREHAWK: THEXDER II - REGFONT MASTER GLYPH ATLAS (256 CHARACTERS)", fill=(200, 210, 225, 255))

    for idx in range(num_chars):
        col = idx % cols
        row = idx // cols
        x0 = margin + col * cell_w
        y0 = margin + 40 + row * cell_h

        # Cell border
        draw.rectangle([x0, y0, x0 + cell_w - 2, y0 + cell_h - 2], outline=(35, 42, 54, 255))

        # Index label
        draw.text((x0 + 2, y0 + 2), f"{idx:02X}", fill=(110, 125, 145, 255))

        # ASCII label
        ascii_code = idx + 32
        if 32 <= ascii_code <= 126:
            char_label = chr(ascii_code)
            label_col = (100, 200, 255, 255)
        elif idx < 95:
            char_label = ""
            label_col = (150, 150, 150, 255)
        else:
            char_label = "JP"
            label_col = (255, 170, 80, 255)

        draw.text((x0 + cell_w - 16, y0 + 2), char_label, fill=label_col)

        # Draw 8x8 glyph
        gx0 = x0 + (cell_w - 8 * glyph_scale) // 2
        gy0 = y0 + 16
        block = raw_font[idx * 16 : (idx + 1) * 16]

        for r in range(8):
            w16 = (block[r * 2] << 8) | block[r * 2 + 1]
            for c in range(8):
                bit = (w16 >> (15 - c * 2)) & 1
                color = (255, 255, 255, 255) if bit else (22, 26, 34, 255)
                draw.rectangle(
                    [gx0 + c * glyph_scale, gy0 + r * glyph_scale,
                     gx0 + (c + 1) * glyph_scale - 1, gy0 + (r + 1) * glyph_scale - 1],
                    fill=color
                )

    img.save(out_path)
    print(f"[OK] Annotated Reference Sheet saved to: {out_path} ({img_w}x{img_h})")
    return img


def render_text_banner(raw_font, text, out_path, scale=4, fg_color=(255, 255, 255, 255), bg_color=(15, 18, 24, 255)):
    """
    Renders an arbitrary ASCII text string using the authentic REGFONT glyphs.
    """
    lines = text.split("\n")
    max_len = max(len(line) for line in lines) if lines else 0
    num_lines = len(lines)

    pad = 8
    char_w, char_h = 8, 8
    img_w = max_len * char_w * scale + pad * 2
    img_h = num_lines * char_h * scale + pad * 2

    img = Image.new("RGBA", (img_w, img_h), bg_color)
    pix = img.load()

    for line_idx, line in enumerate(lines):
        for char_pos, ch in enumerate(line):
            code = ord(ch)
            idx = code - 32 if code >= 32 else code
            if idx >= 256:
                idx = 0
            block = raw_font[idx * 16 : (idx + 1) * 16]

            gx = pad + char_pos * char_w * scale
            gy = pad + line_idx * char_h * scale

            for r in range(8):
                w16 = (block[r * 2] << 8) | block[r * 2 + 1]
                for c in range(8):
                    bit = (w16 >> (15 - c * 2)) & 1
                    if bit:
                        for dy in range(scale):
                            for dx in range(scale):
                                pix[gx + c * scale + dx, gy + r * scale + dy] = fg_color

    img.save(out_path)
    print(f"[OK] Rendered text banner to: {out_path} ({img_w}x{img_h})")
    return img


def export_json_catalog(raw_font, out_path):
    """
    Exports a comprehensive JSON catalog of all 256 glyphs with hex dumps,
    ASCII mappings, and row bitmaps.
    """
    catalog = []
    for idx in range(256):
        block = raw_font[idx * 16 : (idx + 1) * 16]
        ascii_code = idx + 32
        is_ascii = (32 <= ascii_code <= 126)

        rows_binary = []
        rows_hex = []
        is_empty = True

        for r in range(8):
            b0 = block[r * 2]
            b1 = block[r * 2 + 1]
            w16 = (b0 << 8) | b1
            if w16 != 0:
                is_empty = False
            rows_hex.append(f"0x{w16:04X}")
            bits = "".join("#" if (w16 >> (15 - c * 2)) & 1 else "." for c in range(8))
            rows_binary.append(bits)

        entry = {
            "slot_index": idx,
            "slot_hex": f"0x{idx:02X}",
            "ascii_code": ascii_code if is_ascii else None,
            "ascii_char": chr(ascii_code) if is_ascii else None,
            "category": "ASCII_PRINTABLE" if is_ascii else ("ASCII_EXTENDED" if idx < 95 else "JAPANESE_KANA_KANJI"),
            "is_empty": is_empty,
            "raw_hex": block.hex(),
            "scanlines_hex": rows_hex,
            "scanlines_ascii": rows_binary
        }
        catalog.append(entry)

    with open(out_path, "w", encoding="utf-8") as f:
        json.dump(catalog, f, indent=2)

    print(f"[OK] Exported JSON catalog with {len(catalog)} entries to: {out_path}")


def main():
    parser = argparse.ArgumentParser(description="Firehawk REGFONT Forensic Decoder & Visualizer")
    parser.add_argument("--font", default="assets/firehawk/REGFONT", help="Path to REGFONT file")
    parser.add_argument("--bin", help="Export decompressed raw binary font")
    parser.add_argument("--mcga-png", help="Export MCGA 8x8 font sheet PNG")
    parser.add_argument("--ega-png", help="Export EGA 16x8 font sheet PNG")
    parser.add_argument("--annotated-png", help="Export annotated master atlas PNG")
    parser.add_argument("--render-text", help="Text string to render into a PNG")
    parser.add_argument("--render-out", default="font_preview.png", help="Output path for rendered text")
    parser.add_argument("--json", help="Export JSON glyph metadata catalog")
    parser.add_argument("--all", action="store_true", help="Generate all assets in reference/extracted_data/")

    args = parser.parse_args()

    if not os.path.exists(args.font):
        print(f"Error: Font file not found: {args.font}")
        sys.exit(1)

    decomp_size, raw_font = load_regfont(args.font)
    print(f"[INFO] Successfully decompressed {args.font}")
    print(f"[INFO] Header uncompressed size: {decomp_size} bytes | Actual: {len(raw_font)} bytes | 256 glyphs")

    if args.bin:
        with open(args.bin, "wb") as f:
            f.write(raw_font)
        print(f"[OK] Raw binary saved to: {args.bin}")

    if args.mcga_png:
        render_mcga_sheet(raw_font, args.mcga_png)

    if args.ega_png:
        render_ega_sheet(raw_font, args.ega_png)

    if args.annotated_png:
        render_annotated_sheet(raw_font, args.annotated_png)

    if args.render_text:
        render_text_banner(raw_font, args.render_text, args.render_out)

    if args.json:
        export_json_catalog(raw_font, args.json)

    if args.all:
        out_dir_img = "reference/extracted_data/images"
        out_dir_data = "reference/extracted_data"
        os.makedirs(out_dir_img, exist_ok=True)
        os.makedirs(out_dir_data, exist_ok=True)

        render_mcga_sheet(raw_font, os.path.join(out_dir_img, "regfont_sheet.png"), scale=2)
        render_mcga_sheet(raw_font, os.path.join(out_dir_img, "regfont_8x8_mcga.png"), scale=4)
        render_ega_sheet(raw_font, os.path.join(out_dir_img, "regfont_16x8_ega.png"), scale=2)
        render_annotated_sheet(raw_font, os.path.join(out_dir_img, "regfont_annotated_atlas.png"))
        render_text_banner(
            raw_font,
            "FIREHAWK: THEXDER II\nCOMMENCE ATTACK - STAGE 01\nSCORE: 0124800  ENERGY: 100",
            os.path.join(out_dir_img, "regfont_in_game_banner.png"),
            scale=3
        )
        export_json_catalog(raw_font, os.path.join(out_dir_data, "regfont_glyph_catalog.json"))


if __name__ == "__main__":
    main()

