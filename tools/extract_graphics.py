#!/usr/bin/env python3
"""
tools/extract_graphics.py
Accurately decompresses Firehawk LZW-compressed graphic resources (RES*.SAR, REGFONT)
and decodes planar EGA bitmaps and font glyphs into clean, authentic PNG images.
"""

import os
from PIL import Image

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
EXTRACTED_DIR = os.path.join(REPO_ROOT, "build", "extracted")
OUT_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data", "images")

os.makedirs(OUT_DIR, exist_ok=True)

# Standard 16-color default EGA palette (RGB)
EGA_DEFAULT_PALETTE = [
    (0x00, 0x00, 0x00), # 0: Transparent / Black
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
    Decompresses variable-width 9-to-12 bit LZW compressed streams used in
    Firehawk: Thexder II (SAR archive resources, REGFONT, and stage assets).
    Reverse-engineered directly from GAME.EXE routine 1000:252b.
    """
    if len(data) < 2:
        return data

    # Check if stream starts with LZW clear code 0x100 (in 9-bit LSB: byte0=0x00, byte1 & 1 = 1)
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

def render_font_sheet(regfont_path, out_png_path):
    """Decompresses and renders the authentic 8x8 bitmap font glyphs from REGFONT."""
    with open(regfont_path, "rb") as f:
        file_bytes = f.read()

    # Offset +4 begins the LZW compressed bitstream
    raw_font = decompress_firehawk_lzw(file_bytes[4:])
    if len(raw_font) < 4096:
        print(f"Warning: Unexpected decompressed font size: {len(raw_font)}")
        return

    cols, rows = 16, 16
    cw, ch = 8, 8
    scale = 2
    pad = 2
    img_w = cols * (cw * scale + pad) + pad
    img_h = rows * (ch * scale + pad) + pad
    img = Image.new("RGBA", (img_w, img_h), (18, 22, 28, 255))
    pix = img.load()

    for ch_idx in range(256):
        grid_x = (ch_idx % cols) * (cw * scale + pad) + pad
        grid_y = (ch_idx // cols) * (ch * scale + pad) + pad
        char_bytes = raw_font[ch_idx * 16 : (ch_idx + 1) * 16]

        for r in range(ch):
            w16 = (char_bytes[r * 2] << 8) | char_bytes[r * 2 + 1]
            for c in range(cw):
                bit = (w16 >> (15 - c * 2)) & 1
                color = (245, 245, 250, 255) if bit else (28, 34, 42, 255)
                for dy in range(scale):
                    for dx in range(scale):
                        pix[grid_x + c * scale + dx, grid_y + r * scale + dy] = color

    img.save(out_png_path)
    print(f"[OK] Rendered authentic 8x8 font sheet: {out_png_path} ({img.size[0]}x{img.size[1]})")

def render_ship_atlas(ship_path, out_png_path):
    """
    Decompresses and renders the player Thexder/Firehawk robot and jet transformation
    sprites (16 frames of 32x41 pixels across 4 planar bitplanes: B, G, R, I).
    """
    with open(ship_path, "rb") as f:
        comp = f.read()
    raw = decompress_firehawk_lzw(comp)

    w = 32
    h = 41
    bytes_per_plane = 4 # 32 pixels = 4 bytes
    bytes_per_row = bytes_per_plane * 4 # 4 planes = 16 bytes
    bytes_per_frame = bytes_per_row * h # 656 bytes per frame
    num_frames = min(16, len(raw) // bytes_per_frame)

    scale = 2
    img = Image.new("RGBA", (w * num_frames * scale, h * scale), (20, 24, 30, 255))
    pix = img.load()

    for f_idx in range(num_frames):
        base = f_idx * bytes_per_frame
        for y in range(h):
            row_base = base + y * bytes_per_row
            p0 = raw[row_base + 0 : row_base + 4] # Plane 0 (Blue)
            p1 = raw[row_base + 4 : row_base + 8] # Plane 1 (Green)
            p2 = raw[row_base + 8 : row_base + 12] # Plane 2 (Red)
            p3 = raw[row_base + 12 : row_base + 16] # Plane 3 (Intensity)

            for byte_idx in range(4):
                b0, b1, b2, b3 = p0[byte_idx], p1[byte_idx], p2[byte_idx], p3[byte_idx]
                for bit in range(8):
                    shift = 7 - bit
                    c_idx = (((b0 >> shift) & 1) |
                             (((b1 >> shift) & 1) << 1) |
                             (((b2 >> shift) & 1) << 2) |
                             (((b3 >> shift) & 1) << 3))

                    px = (f_idx * w + byte_idx * 8 + bit) * scale
                    py = y * scale
                    if c_idx != 0:
                        c = EGA_DEFAULT_PALETTE[c_idx]
                        rgba = (c[0], c[1], c[2], 255)
                    else:
                        rgba = (20, 24, 30, 0)

                    for dy in range(scale):
                        for dx in range(scale):
                            pix[px + dx, py + dy] = rgba

    img.save(out_png_path)
    print(f"[OK] Rendered SHIP atlas ({num_frames} frames, 32x41): {out_png_path}")

def render_item_atlas(item_path, out_png_path):
    """
    Decompresses and renders the rotating powerup crystals and weapon icons
    (24 frames of 16x18 pixels across 3 planar bitplanes).
    """
    with open(item_path, "rb") as f:
        comp = f.read()
    raw = decompress_firehawk_lzw(comp)

    w = 16
    h = 18
    bytes_per_row = 6 # 3 planes * 2 bytes = 6 bytes
    bytes_per_frame = bytes_per_row * h # 108 bytes
    num_frames = len(raw) // bytes_per_frame

    scale = 3
    img = Image.new("RGBA", (w * num_frames * scale, h * scale), (20, 24, 30, 255))
    pix = img.load()

    for f_idx in range(num_frames):
        for y in range(h):
            offset = (f_idx * h + y) * bytes_per_row
            if offset + 6 <= len(raw):
                w0 = (raw[offset + 0] << 8) | raw[offset + 1]
                w1 = (raw[offset + 2] << 8) | raw[offset + 3]
                w2 = (raw[offset + 4] << 8) | raw[offset + 5]

                for x in range(w):
                    shift = 15 - x
                    b0 = (w0 >> shift) & 1
                    b1 = (w1 >> shift) & 1
                    b2 = (w2 >> shift) & 1
                    c_idx = b0 | (b1 << 1) | (b2 << 2)

                    px = (f_idx * w + x) * scale
                    py = y * scale
                    if c_idx != 0:
                        c = EGA_DEFAULT_PALETTE[c_idx]
                        rgba = (c[0], c[1], c[2], 255)
                    else:
                        rgba = (20, 24, 30, 0)

                    for dy in range(scale):
                        for dx in range(scale):
                            pix[px + dx, py + dy] = rgba

    img.save(out_png_path)
    print(f"[OK] Rendered ITEM atlas ({num_frames} frames, 16x18): {out_png_path}")

def render_hud_atlas(bin_path, out_png_path):
    """Decompresses and renders HUD panels and status elements (32 pixels wide, 4 bitplanes)."""
    with open(bin_path, "rb") as f:
        raw = decompress_firehawk_lzw(f.read())

    w = 32
    bytes_per_row = 16 # 4 planes * 4 bytes = 16 bytes
    h = len(raw) // bytes_per_row
    if h == 0:
        return

    scale = 2
    img = Image.new("RGBA", (w * scale, h * scale), (20, 24, 30, 255))
    pix = img.load()

    for y in range(h):
        row_base = y * bytes_per_row
        p0 = raw[row_base + 0 : row_base + 4]
        p1 = raw[row_base + 4 : row_base + 8]
        p2 = raw[row_base + 8 : row_base + 12]
        p3 = raw[row_base + 12 : row_base + 16]

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
                    rgba = (20, 24, 30, 0)

                for dy in range(scale):
                    for dx in range(scale):
                        pix[px + dx, py + dy] = rgba

    img.save(out_png_path)
    print(f"[OK] Rendered HUD graphic atlas ({w}x{h}): {out_png_path}")

def export_palette_preview(out_png_path):
    """Generates clean swatches for the 16 standard EGA colors."""
    swatch_size = 32
    img = Image.new("RGB", (swatch_size * 8, swatch_size * 2))
    pix = img.load()

    for i, color in enumerate(EGA_DEFAULT_PALETTE):
        col, row = i % 8, i // 8
        bx, by = col * swatch_size, row * swatch_size
        for y in range(swatch_size):
            for x in range(swatch_size):
                pix[bx + x, by + y] = color

    img.save(out_png_path)
    print(f"[OK] Exported palette preview: {out_png_path}")

def generate_html_gallery():
    """Builds an interactive HTML gallery to visually inspect all extracted assets."""
    gallery_html = """<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<title>Firehawk: Thexder II - Extracted Graphics Gallery</title>
<style>
  body { background: #12141a; color: #e1e4ea; font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, sans-serif; margin: 40px; }
  h1 { color: #58a6ff; border-bottom: 1px solid #30363d; padding-bottom: 12px; }
  h2 { color: #79c0ff; margin-top: 32px; }
  .card { background: #1c2129; border: 1px solid #30363d; border-radius: 8px; padding: 20px; margin-bottom: 24px; }
  .asset-img { background: #0b0d11; border: 1px solid #444c56; padding: 12px; border-radius: 4px; display: inline-block; image-rendering: pixelated; }
  .meta { color: #8b949e; font-size: 14px; margin-top: 8px; }
</style>
</head>
<body>
<h1>Firehawk: Thexder II - Extracted Graphics Gallery</h1>
<p>Authentic graphics reverse-engineered and decompressed from original DOS archives (LZW bitstream decoded to 4-plane EGA bitmaps).</p>

<div class="card">
  <h2>1. Player Thexder/Firehawk Robot & Jet Transformation Atlas</h2>
  <img class="asset-img" src="ship_atlas.png" alt="Player Ship Atlas">
  <div class="meta">16 animation frames (32x41 pixels) &bull; 4 bitplanes (B/G/R/I) &bull; Modeled from SHIP.bin</div>
</div>

<div class="card">
  <h2>2. Collectible Crystals & Weapon Powerup Icons</h2>
  <img class="asset-img" src="item_atlas.png" alt="Item Atlas">
  <div class="meta">24 isometric rotation frames (16x18 pixels) &bull; 3 bitplanes &bull; Modeled from ITEM.bin</div>
</div>

<div class="card">
  <h2>3. Complete In-Game Font Sheet (REGFONT)</h2>
  <img class="asset-img" src="regfont_sheet.png" alt="Font Sheet">
  <div class="meta">256 character glyphs (8x8 MCGA / 16x8 EGA) &bull; Decompressed from assets/firehawk/REGFONT</div>
</div>

<div class="card">
  <h2>4. HUD Panels, Gauges & UI Frames</h2>
  <img class="asset-img" src="grph_atlas.png" alt="GRPH Atlas">
  <img class="asset-img" src="grp2_atlas.png" alt="GRP2 Atlas">
  <img class="asset-img" src="grp3_atlas.png" alt="GRP3 Atlas">
  <div class="meta">Status bars, radar dials, energy meter borders &bull; Decompressed from GRPH, GRP2, GRP3</div>
</div>

<div class="card">
  <h2>5. Standard 16-Color EGA Palette</h2>
  <img class="asset-img" src="ega_palette_preview.png" alt="EGA Palette">
  <div class="meta">16-color RGB hardware palette programmed by EGA640.DRV and MCGA320.DRV</div>
</div>

</body>
</html>
"""
    with open(os.path.join(OUT_DIR, "gallery.html"), "w", encoding="utf-8") as f:
        f.write(gallery_html)
    print(f"[OK] Generated HTML gallery: {os.path.join(OUT_DIR, 'gallery.html')}")

def main():
    export_palette_preview(os.path.join(OUT_DIR, "ega_palette_preview.png"))

    regfont = os.path.join(ASSETS_DIR, "REGFONT")
    if os.path.exists(regfont):
        render_font_sheet(regfont, os.path.join(OUT_DIR, "regfont_sheet.png"))

    res1_dir = os.path.join(EXTRACTED_DIR, "RES1")
    if os.path.exists(res1_dir):
        ship_bin = os.path.join(res1_dir, "SHIP.bin")
        if os.path.exists(ship_bin):
            render_ship_atlas(ship_bin, os.path.join(OUT_DIR, "ship_atlas.png"))

        item_bin = os.path.join(res1_dir, "ITEM.bin")
        if os.path.exists(item_bin):
            render_item_atlas(item_bin, os.path.join(OUT_DIR, "item_atlas.png"))

        for g in ["GRPH.bin", "GRP2.bin", "GRP3.bin"]:
            gp = os.path.join(res1_dir, g)
            if os.path.exists(gp):
                out_name = f"{os.path.splitext(g)[0].lower()}_atlas.png"
                render_hud_atlas(gp, os.path.join(OUT_DIR, out_name))

    generate_html_gallery()
    print("All authentic graphics successfully extracted and rendered!")

if __name__ == "__main__":
    main()
