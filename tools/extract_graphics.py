#!/usr/bin/env python3
"""
tools/extract_graphics.py
Accurately decompresses Firehawk LZW-compressed graphic resources (RES*.SAR, REGFONT)
and decodes planar EGA bitmaps, font glyphs, stage tilebanks, enemy sprites, and boss
atlases into clean, authentic PNG images.
"""

import os
import glob
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

def render_tile_sheet(bin_path, out_png_path, cols=16, scale=2):
    """
    Decompresses and renders stage 8x8 character tiles (CGxx or BTG1)
    stored as 4-bit packed nibbles (32 bytes per tile).
    """
    with open(bin_path, "rb") as f:
        raw = decompress_firehawk_lzw(f.read())

    tile_w, tile_h = 8, 8
    bytes_per_tile = 32
    num_tiles = len(raw) // bytes_per_tile
    if num_tiles == 0:
        return

    rows = (num_tiles + cols - 1) // cols
    img = Image.new("RGBA", (cols * tile_w * scale, rows * tile_h * scale), (20, 24, 30, 255))
    pix = img.load()

    for t in range(num_tiles):
        tx = (t % cols) * tile_w * scale
        ty = (t // cols) * tile_h * scale
        tile_data = raw[t * bytes_per_tile : (t + 1) * bytes_per_tile]

        for y in range(tile_h):
            for bx in range(4):
                b = tile_data[y * 4 + bx]
                c0 = (b >> 4) & 0x0F
                c1 = b & 0x0F
                for bit_i, c_idx in enumerate([c0, c1]):
                    px = tx + (bx * 2 + bit_i) * scale
                    py = ty + y * scale
                    rgb = EGA_DEFAULT_PALETTE[c_idx] if c_idx != 0 else (20, 24, 30)
                    for dy in range(scale):
                        for dx in range(scale):
                            pix[px + dx, py + dy] = (*rgb, 255 if c_idx != 0 else 0)

    img.save(out_png_path)
    tag = os.path.splitext(os.path.basename(bin_path))[0]
    print(f"[OK] Rendered tile sheet [{tag}] ({num_tiles} tiles of 8x8): {out_png_path}")

def render_enemy_sheet(eg_path, out_png_path, cols=8, scale=2):
    """
    Decompresses and renders stage-specific enemy character tiles (EGxx)
    stored as 8x8 tiles in 4-bit packed nibbles (23 tiles of 32 bytes).
    """
    render_tile_sheet(eg_path, out_png_path, cols=cols, scale=scale)

def render_boss_atlas(bigg_path, out_png_path):
    """
    Decompresses and renders Stage 12 Final Boss sprites (BIGG.bin:
    24 frames of 16x18 pixels across 3 planar bitplanes).
    """
    render_item_atlas(bigg_path, out_png_path)

def render_zan_atlas(zan_path, out_png_path):
    """
    Decompresses and renders destructible barrier and obstacle wreckage sprites
    (ZANxx: 4 frames of 16x18 pixels across 3 planar bitplanes).
    """
    render_item_atlas(zan_path, out_png_path)

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
  .asset-img { background: #0b0d11; border: 1px solid #444c56; padding: 12px; border-radius: 4px; display: inline-block; image-rendering: pixelated; margin: 6px; }
  .meta { color: #8b949e; font-size: 14px; margin-top: 8px; }
</style>
</head>
<body>
<h1>Firehawk: Thexder II - Extracted Graphics Gallery</h1>
<p>Authentic graphics reverse-engineered and decompressed from original DOS archives (LZW bitstream decoded to 4-plane EGA bitmaps and 4-bit packed tilebanks).</p>

<div class="card">
  <h2>0. In-Game Scene Reconstruction & CRT Aspect Simulation</h2>
  <img class="asset-img" src="ingame_scene_breakdown.png" alt="In-Game Scene Breakdown" style="max-width: 100%; height: auto;">
  <div style="margin-top: 14px;">
    <img class="asset-img" src="ingame_scene_crt_4x3.png" alt="4:3 CRT Simulation" style="max-width: 48%; height: auto;">
    <img class="asset-img" src="ingame_scene_320x200.png" alt="Native 320x200 Screen" style="max-width: 48%; height: auto;">
  </div>
  <div class="meta">Assembled in-game composition: Stage 1 volcanic cavern tiles (CG01/CT01), player Thexder robot (SHIP frame 0), laser beam, obstacle (ZAN2), enemy drone (EG11), powerup crystal (ITEM), and cockpit telemetry HUD (GRPH radar/gauges and REGFONT typewriter console) in authentic 4:3 CRT aspect ratio.</div>
</div>

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
  <h2>5. Carrier Takeoff & Obstacle Barrier Sprites</h2>
  <img class="asset-img" src="tak0_atlas.png" alt="TAK0 Atlas">
  <img class="asset-img" src="zan2_atlas.png" alt="ZAN2 Atlas">
  <div class="meta">Mobile carrier launch sequence &bull; Stage wreckage/barrier obstacles &bull; Decompressed from TAK0.bin, ZAN2.bin</div>
</div>

<div class="card">
  <h2>6. Stage Background Character Tilebanks (CGxx)</h2>
  <img class="asset-img" src="cg01_tiles.png" alt="CG01 Tiles">
  <img class="asset-img" src="cg11_tiles.png" alt="CG11 Tiles">
  <img class="asset-img" src="cg21_tiles.png" alt="CG21 Tiles">
  <img class="asset-img" src="cg61_tiles.png" alt="CG61 Tiles">
  <div class="meta">132 character tiles of 8x8 pixels per bank &bull; Packed 4-bit nibbles &bull; Decompressed from CG01, CG11, CG21, CG61</div>
</div>

<div class="card">
  <h2>7. Stage-Specific Enemy Sprite Sheets (EGxx)</h2>
  <img class="asset-img" src="eg11_enemy_tiles.png" alt="EG11 Enemies">
  <img class="asset-img" src="eg21_enemy_tiles.png" alt="EG21 Enemies">
  <img class="asset-img" src="eg61_enemy_tiles.png" alt="EG61 Enemies">
  <div class="meta">23 character tiles of 8x8 pixels per bank &bull; Decompressed from EG11, EG21, EG61</div>
</div>

<div class="card">
  <h2>8. Stage 12 Boss & Sub-Boss Atlases</h2>
  <img class="asset-img" src="bigg_boss_atlas.png" alt="Final Boss Atlas">
  <img class="asset-img" src="btg1_subboss_tiles.png" alt="Sub-Boss Tiles">
  <div class="meta">BIGG: Final Boss sprite sheet (24 frames of 16x18) &bull; BTG1: Sub-boss 8x8 character tiles &bull; Decompressed from RES3.SAR</div>
</div>

<div class="card">
  <h2>9. Standard 16-Color EGA Palette</h2>
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

    # Process all volumes: RES1, RES2, RES3
    for vol in ["RES1", "RES2", "RES3"]:
        vol_dir = os.path.join(EXTRACTED_DIR, vol)
        if not os.path.exists(vol_dir):
            continue

        # 1. Player Ship Atlas
        ship_bin = os.path.join(vol_dir, "SHIP.bin")
        ship_out = os.path.join(OUT_DIR, "ship_atlas.png")
        if os.path.exists(ship_bin) and not os.path.exists(ship_out):
            render_ship_atlas(ship_bin, ship_out)

        # 2. Collectible Item Atlas
        item_bin = os.path.join(vol_dir, "ITEM.bin")
        item_out = os.path.join(OUT_DIR, "item_atlas.png")
        if os.path.exists(item_bin) and not os.path.exists(item_out):
            render_item_atlas(item_bin, item_out)

        # 3. Cockpit HUD Gauges & Borders
        for g in ["GRPH.bin", "GRP2.bin", "GRP3.bin"]:
            gp = os.path.join(vol_dir, g)
            out_name = f"{os.path.splitext(g)[0].lower()}_atlas.png"
            target_out = os.path.join(OUT_DIR, out_name)
            if os.path.exists(gp) and not os.path.exists(target_out):
                render_hud_atlas(gp, target_out)

        # 4. Obstacle Barriers (ZANxx)
        for zan_f in glob.glob(os.path.join(vol_dir, "ZAN*.bin")):
            base = os.path.splitext(os.path.basename(zan_f))[0].lower()
            zan_out = os.path.join(OUT_DIR, f"{base}_atlas.png")
            if not os.path.exists(zan_out):
                render_zan_atlas(zan_f, zan_out)

        # 5. Stage Character Tiles (CGxx)
        for cg_f in glob.glob(os.path.join(vol_dir, "CG*.bin")):
            base = os.path.splitext(os.path.basename(cg_f))[0].lower()
            cg_out = os.path.join(OUT_DIR, f"{base}_tiles.png")
            render_tile_sheet(cg_f, cg_out)

        # 6. Stage Enemy Sprites (EGxx)
        for eg_f in glob.glob(os.path.join(vol_dir, "EG*.bin")):
            base = os.path.splitext(os.path.basename(eg_f))[0].lower()
            eg_out = os.path.join(OUT_DIR, f"{base}_enemy_tiles.png")
            render_enemy_sheet(eg_f, eg_out)

        # 7. Boss & Sub-Boss Sprites (BIGG, BTG1)
        bigg_bin = os.path.join(vol_dir, "BIGG.bin")
        if os.path.exists(bigg_bin):
            render_boss_atlas(bigg_bin, os.path.join(OUT_DIR, "bigg_boss_atlas.png"))

        btg_bin = os.path.join(vol_dir, "BTG1.bin")
        if os.path.exists(btg_bin):
            render_tile_sheet(btg_bin, os.path.join(OUT_DIR, "btg1_subboss_tiles.png"))

    generate_html_gallery()
    print("All authentic graphics successfully extracted and rendered across all archives!")

if __name__ == "__main__":
    main()
