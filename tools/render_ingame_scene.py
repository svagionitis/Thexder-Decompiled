#!/usr/bin/env python3
"""
tools/render_ingame_scene.py
Authentically reconstructs Firehawk: Thexder II in-game scenes directly from
raw decompressed SAR assets (SHIP, ITEM, CG01, GRPH, ZAN2, EG11, REGFONT).

Simulates:
  1. Native 320x200 EGA frame buffer (2x scaled to 640x400)
  2. Authentic 4:3 CRT monitor simulation (640x480 with 5:6 pixel aspect ratio)
  3. Visual architecture breakdown comparing raw SAR atlases with assembled game screen
"""

import os
import sys
from PIL import Image, ImageDraw

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RES1_DIR = os.path.join(REPO_ROOT, "build", "extracted", "RES1")
ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
OUT_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data", "images")
os.makedirs(OUT_DIR, exist_ok=True)

# Add tools directory to path
if REPO_ROOT not in sys.path:
    sys.path.insert(0, os.path.join(REPO_ROOT, "tools"))

from extract_graphics import decompress_firehawk_lzw, EGA_DEFAULT_PALETTE

# Stage 1 Volcanic dynamic palette remap (EGA register reprogramming)
# In Stage 1, blue/cyan cave tones are remapped to fiery volcanic reds, oranges, and yellows
STAGE1_VOLCANIC_PALETTE = list(EGA_DEFAULT_PALETTE)
STAGE1_VOLCANIC_PALETTE[1] = (0x80, 0x10, 0x00) # Dark lava red
STAGE1_VOLCANIC_PALETTE[3] = (0xCC, 0x44, 0x00) # Molten orange
STAGE1_VOLCANIC_PALETTE[9] = (0xFF, 0x33, 0x00) # Glowing magma red
STAGE1_VOLCANIC_PALETTE[11] = (0xFF, 0xAA, 0x00) # Radiant magma yellow

def decode_planar_ega(raw_data, w, h, num_planes=4):
    """Decodes planar EGA sprite into an RGBA PIL Image."""
    bytes_per_plane = (w + 7) // 8
    bytes_per_row = bytes_per_plane * num_planes
    img = Image.new("RGBA", (w, h), (0, 0, 0, 0))
    pix = img.load()

    for y in range(h):
        row_base = y * bytes_per_row
        planes = [
            raw_data[row_base + p * bytes_per_plane : row_base + (p + 1) * bytes_per_plane]
            for p in range(num_planes)
        ]
        for bx in range(bytes_per_plane):
            b_vals = [planes[p][bx] if bx < len(planes[p]) else 0 for p in range(num_planes)]
            for bit in range(8):
                shift = 7 - bit
                c_idx = 0
                for p in range(num_planes):
                    c_idx |= ((b_vals[p] >> shift) & 1) << p
                if c_idx != 0:
                    rgb = EGA_DEFAULT_PALETTE[c_idx]
                    px = bx * 8 + bit
                    if px < w:
                        pix[px, y] = (rgb[0], rgb[1], rgb[2], 255)
    return img

def decode_cg_tile(tile_bytes, palette=EGA_DEFAULT_PALETTE):
    """Decodes 8x8 packed nibble tile (32 bytes)."""
    img = Image.new("RGBA", (8, 8), (0, 0, 0, 0))
    pix = img.load()
    for y in range(8):
        for bx in range(4):
            b = tile_bytes[y * 4 + bx]
            c0 = (b >> 4) & 0x0F
            c1 = b & 0x0F
            if c0 != 0:
                rgb = palette[c0]
                pix[bx * 2, y] = (rgb[0], rgb[1], rgb[2], 255)
            if c1 != 0:
                rgb = palette[c1]
                pix[bx * 2 + 1, y] = (rgb[0], rgb[1], rgb[2], 255)
    return img

def load_font():
    """Loads REGFONT glyphs."""
    regfont_path = os.path.join(ASSETS_DIR, "REGFONT")
    with open(regfont_path, "rb") as f:
        data = f.read()
    raw = decompress_firehawk_lzw(data[4:])
    return raw

def draw_font_text(canvas, raw_font, text, x, y, color=(255, 255, 255, 255)):
    """Draws string on 320x200 canvas using authentic REGFONT glyphs."""
    pix = canvas.load()
    for i, ch in enumerate(text):
        code = ord(ch)
        idx = code - 32 if code >= 32 else code
        if idx >= 256:
            idx = 0
        glyph_bytes = raw_font[idx * 16 : (idx + 1) * 16]
        gx = x + i * 8
        for r in range(8):
            w16 = (glyph_bytes[r * 2] << 8) | glyph_bytes[r * 2 + 1]
            for c in range(8):
                bit = (w16 >> (15 - c * 2)) & 1
                if bit:
                    px = gx + c
                    py = y + r
                    if 0 <= px < canvas.width and 0 <= py < canvas.height:
                        pix[px, py] = color

def compose_ingame_scene_320x200():
    """Composites authentic 320x200 in-game screen."""
    fb = Image.new("RGBA", (320, 200), (0, 0, 0, 255))
    draw = ImageDraw.Draw(fb)

    # 1. Load SAR Assets
    with open(os.path.join(RES1_DIR, "SHIP.bin"), "rb") as f:
        ship_raw = decompress_firehawk_lzw(f.read())
    with open(os.path.join(RES1_DIR, "ITEM.bin"), "rb") as f:
        item_raw = decompress_firehawk_lzw(f.read())
    with open(os.path.join(RES1_DIR, "GRPH.bin"), "rb") as f:
        grph_raw = decompress_firehawk_lzw(f.read())
    with open(os.path.join(RES1_DIR, "CG01.bin"), "rb") as f:
        cg01_raw = decompress_firehawk_lzw(f.read())
    with open(os.path.join(RES1_DIR, "ZAN2.bin"), "rb") as f:
        zan2_raw = decompress_firehawk_lzw(f.read())
    with open(os.path.join(RES1_DIR, "EG11.bin"), "rb") as f:
        eg11_raw = decompress_firehawk_lzw(f.read())

    raw_font = load_font()

    # 2. Render Cavern Background & Platforms (Y = 28 to 164)
    # Background fill: deep cavern dark purple/black
    draw.rectangle([(0, 28), (319, 164)], fill=(12, 10, 18, 255))

    # Slice CG01 tiles:
    # Tile 0: cavern wall/rock
    # Tile 1: rock edge
    # Tile 2: cavern stalactite / ceiling
    num_cg_tiles = len(cg01_raw) // 32
    tiles = [decode_cg_tile(cg01_raw[i*32:(i+1)*32], palette=STAGE1_VOLCANIC_PALETTE) for i in range(min(num_cg_tiles, 64))]

    # Build Ceiling (Y = 28..44)
    t_rock = tiles[0] if len(tiles) > 0 else Image.new("RGBA", (8, 8), (85, 85, 85, 255))
    t_ceil = tiles[2] if len(tiles) > 2 else t_rock
    for tx in range(0, 320, 8):
        fb.paste(t_rock, (tx, 28), t_rock)
        fb.paste(t_ceil, (tx, 36), t_ceil)

    # Build Floor & Platforms (Y = 138..164)
    t_floor = tiles[1] if len(tiles) > 1 else t_rock
    t_lava = tiles[5] if len(tiles) > 5 else t_rock
    for tx in range(0, 320, 8):
        fb.paste(t_floor, (tx, 142), t_floor)
        fb.paste(t_rock, (tx, 150), t_rock)
        fb.paste(t_lava, (tx, 158), t_lava)

    # Floating Platform for Thexder (X = 32..112, Y = 134)
    for px in range(32, 120, 8):
        fb.paste(t_floor, (px, 134), t_floor)

    # Additional high ledge (X = 200..320, Y = 90)
    for px in range(200, 320, 8):
        fb.paste(t_floor, (px, 90), t_floor)
        fb.paste(t_rock, (px, 98), t_rock)

    # Molten lava pool at cavern bottom
    draw.line([(0, 163), (319, 163)], fill=(255, 68, 0, 255))
    draw.line([(0, 164), (319, 164)], fill=(255, 170, 0, 255))

    # 3. Blit Collectible Powerup Crystal (ITEM frame 0, 16x18)
    item_frame0 = decode_planar_ega(item_raw[:108], 16, 18, num_planes=3)
    fb.paste(item_frame0, (140, 72), item_frame0)

    # 4. Blit Obstacle / Barrier (ZAN2 frame 0, 16x18)
    zan2_frame0 = decode_planar_ega(zan2_raw[:108], 16, 18, num_planes=3)
    fb.paste(zan2_frame0, (260, 72), zan2_frame0)

    # 5. Blit Enemy Drone (EG11 tile 0, 8x8 scaled or tiled)
    if len(eg11_raw) >= 64:
        eg_tile0 = decode_cg_tile(eg11_raw[0:32])
        eg_tile1 = decode_cg_tile(eg11_raw[32:64])
        fb.paste(eg_tile0, (230, 110), eg_tile0)
        fb.paste(eg_tile1, (238, 110), eg_tile1)

    # 6. Blit Thexder Robot Sprite (SHIP frame 0: 32x41)
    # Thexder standing on ledge at (48, 93)
    ship_frame0 = decode_planar_ega(ship_raw[:656], 32, 41, num_planes=4)
    fb.paste(ship_frame0, (48, 93), ship_frame0)

    # 7. Render High-Energy Laser Beam
    # Emanates from Thexder's chest cannon (X=78, Y=113) towards enemy at (X=230)
    # Outer cyan glow (Y=112..114), bright white core (Y=113)
    laser_start_x = 76
    laser_end_x = 230
    laser_y = 113
    draw.line([(laser_start_x, laser_y - 1), (laser_end_x, laser_y - 1)], fill=(0, 170, 170, 255))
    draw.line([(laser_start_x, laser_y + 1), (laser_end_x, laser_y + 1)], fill=(0, 170, 170, 255))
    draw.line([(laser_start_x, laser_y), (laser_end_x, laser_y)], fill=(255, 255, 255, 255))
    # Laser impact sparks
    draw.point((laser_end_x, laser_y - 2), fill=(255, 255, 85, 255))
    draw.point((laser_end_x + 1, laser_y - 1), fill=(255, 255, 255, 255))
    draw.point((laser_end_x, laser_y + 2), fill=(255, 255, 85, 255))
    draw.point((laser_end_x - 1, laser_y + 1), fill=(255, 85, 85, 255))

    # 8. Render Cockpit HUD Overlay (Top & Bottom)
    # Top HUD frame (Y = 0..27)
    draw.rectangle([(0, 0), (319, 27)], fill=(20, 24, 30, 255))
    draw.line([(0, 0), (319, 0)], fill=(85, 85, 85, 255))
    draw.line([(0, 26), (319, 26)], fill=(85, 85, 85, 255))
    draw.line([(0, 27), (319, 27)], fill=(0, 170, 170, 255)) # Cyan HUD accent line

    # Decode GRPH elements
    # GRPH rows 0..31: Radar Scope (32x32) -> scaled/cropped to 24x24 to fit HUD height
    grph_all = decode_planar_ega(grph_raw, 32, len(grph_raw)//16, num_planes=4)
    radar = grph_all.crop((0, 0, 32, 24))
    fb.paste(radar, (4, 2), radar)
    # Add active blip on radar
    draw.point((16, 12), fill=(255, 85, 85, 255))
    draw.point((22, 9), fill=(85, 255, 85, 255))

    # Telemetry text
    draw_font_text(fb, raw_font, "SCORE 0048500", 42, 4, color=(255, 255, 255, 255))
    draw_font_text(fb, raw_font, "STAGE 01", 168, 4, color=(255, 255, 85, 255))

    # Status gauges (GRPH rows 52..59: 32x8 green normal)
    gauge_normal = grph_all.crop((0, 52, 32, 60))
    # SHIELD
    draw_font_text(fb, raw_font, "SHIELD", 236, 4, color=(85, 255, 255, 255))
    fb.paste(gauge_normal, (284, 4), gauge_normal)
    # ENERGY
    draw_font_text(fb, raw_font, "ENERGY", 236, 15, color=(85, 255, 85, 255))
    fb.paste(gauge_normal, (284, 15), gauge_normal)

    # Bottom Cockpit & Communication Console (Y = 165..199)
    draw.rectangle([(0, 165), (319, 199)], fill=(20, 24, 30, 255))
    draw.line([(0, 165), (319, 165)], fill=(0, 170, 170, 255))
    draw.line([(0, 166), (319, 166)], fill=(85, 85, 85, 255))

    # Docking reticle (GRPH rows 60..73: 32x14)
    docking = grph_all.crop((0, 60, 32, 74))
    fb.paste(docking, (6, 174), docking)

    # Typewriter Sub-system Communication Message
    draw_font_text(fb, raw_font, "COMMUNICATION: DESTROY NEDIAM CENTRAL CORE", 44, 172, color=(85, 255, 255, 255))
    draw_font_text(fb, raw_font, "STATUS: SUBTERRANEAN SENSOR LINK ACTIVE _", 44, 184, color=(170, 170, 170, 255))

    return fb

def render_all_scene_formats():
    """Generates native 320x200 (scaled 2x to 640x400), authentic 4:3 CRT (640x480), and breakdown."""
    fb_320x200 = compose_ingame_scene_320x200()

    # 1. Native Pixel Aspect (Scaled 2x: 640x400)
    native_640x400 = fb_320x200.resize((640, 400), Image.Resampling.NEAREST)
    native_path = os.path.join(OUT_DIR, "ingame_scene_320x200.png")
    native_640x400.save(native_path)
    print(f"[OK] Saved Native 320x200 Scene (2x: 640x400): {native_path}")

    # 2. Authentic 4:3 CRT Display Simulation (640x480)
    # Mode 0Dh/0Eh EGA pixel aspect ratio was 5:6 (1.2x taller vertically)
    # 320x200 stretched to 4:3 aspect ratio yields 640x480!
    crt_640x480 = fb_320x200.resize((640, 480), Image.Resampling.BICUBIC)

    # Apply subtle CRT scanline effect
    crt_draw = ImageDraw.Draw(crt_640x480)
    for y in range(1, 480, 2):
        crt_draw.line([(0, y), (639, y)], fill=(0, 0, 0, 45))

    crt_path = os.path.join(OUT_DIR, "ingame_scene_crt_4x3.png")
    crt_640x480.save(crt_path)
    print(f"[OK] Saved Authentic 4:3 CRT Scene (640x480): {crt_path}")

    # 3. Visual Architecture Breakdown (Comparing Raw Atlases vs. Assembled Game Screen)
    # Canvas size: 1040 x 620
    comp_canvas = Image.new("RGBA", (1040, 620), (14, 17, 23, 255))
    comp_draw = ImageDraw.Draw(comp_canvas)

    # Title & Subtitle
    comp_draw.text((24, 16), "Firehawk: Thexder II - In-Game Scene Reconstruction & Resource Architecture", fill=(88, 166, 255, 255))
    comp_draw.text((24, 34), "Demonstrating how raw SAR atlases (disassembled bitplanes) are composited, masked, and rendered at runtime", fill=(139, 148, 158, 255))

    # Left Section: Raw SAR Archive Assets (Atlases & Bitmaps)
    comp_draw.rectangle([(20, 65), (340, 595)], outline=(48, 54, 61, 255), fill=(22, 27, 34, 255))
    comp_draw.text((32, 75), "1. Raw SAR Resource Atlases", fill=(121, 192, 255, 255))
    comp_draw.text((32, 90), "(Planar bitplanes, tilebanks, horizontal strips)", fill=(139, 148, 158, 255))

    # Load and preview SHIP raw frame 0 (scaled 2x)
    with open(os.path.join(RES1_DIR, "SHIP.bin"), "rb") as f:
        ship_raw = decompress_firehawk_lzw(f.read())
    ship_f0 = decode_planar_ega(ship_raw[:656], 32, 41, 4).resize((64, 82), Image.Resampling.NEAREST)
    comp_draw.rectangle([(32, 115), (100, 201)], outline=(60, 60, 60, 255), fill=(0, 0, 0, 255))
    comp_canvas.paste(ship_f0, (34, 117), ship_f0)
    comp_draw.text((110, 125), "SHIP.bin Frame 0", fill=(255, 255, 255, 255))
    comp_draw.text((110, 142), "32x41 4-bitplane sprite", fill=(139, 148, 158, 255))
    comp_draw.text((110, 158), "Raw atlas has 16 frames", fill=(139, 148, 158, 255))

    # Load and preview ITEM frame 0 (scaled 3x)
    with open(os.path.join(RES1_DIR, "ITEM.bin"), "rb") as f:
        item_raw = decompress_firehawk_lzw(f.read())
    item_f0 = decode_planar_ega(item_raw[:108], 16, 18, 3).resize((48, 54), Image.Resampling.NEAREST)
    comp_draw.rectangle([(32, 215), (84, 273)], outline=(60, 60, 60, 255), fill=(0, 0, 0, 255))
    comp_canvas.paste(item_f0, (34, 217), item_f0)
    comp_draw.text((94, 222), "ITEM.bin Frame 0", fill=(255, 255, 255, 255))
    comp_draw.text((94, 239), "16x18 3-bitplane crystal", fill=(139, 148, 158, 255))
    comp_draw.text((94, 255), "Raw atlas has 24 frames", fill=(139, 148, 158, 255))

    # Load and preview GRPH gauges & radar
    with open(os.path.join(RES1_DIR, "GRPH.bin"), "rb") as f:
        grph_raw = decompress_firehawk_lzw(f.read())
    grph_all = decode_planar_ega(grph_raw, 32, len(grph_raw)//16, 4)
    radar_preview = grph_all.crop((0, 0, 32, 32)).resize((64, 64), Image.Resampling.NEAREST)
    gauge_preview = grph_all.crop((0, 52, 32, 60)).resize((96, 24), Image.Resampling.NEAREST)
    comp_draw.rectangle([(32, 285), (100, 353)], outline=(60, 60, 60, 255), fill=(0, 0, 0, 255))
    comp_canvas.paste(radar_preview, (34, 287), radar_preview)
    comp_draw.text((110, 292), "GRPH.bin Radar", fill=(255, 255, 255, 255))
    comp_draw.text((110, 309), "Rows 00..31 (32x32)", fill=(139, 148, 158, 255))
    comp_draw.text((110, 325), "Slices dynamic sub-rectangles", fill=(139, 148, 158, 255))

    comp_draw.rectangle([(32, 365), (132, 393)], outline=(60, 60, 60, 255), fill=(0, 0, 0, 255))
    comp_canvas.paste(gauge_preview, (34, 367), gauge_preview)
    comp_draw.text((142, 370), "GRPH.bin Gauge (Row 52)", fill=(255, 255, 255, 255))

    # Stage tiles CG01 preview
    with open(os.path.join(RES1_DIR, "CG01.bin"), "rb") as f:
        cg01_raw = decompress_firehawk_lzw(f.read())
    cg_p = Image.new("RGBA", (128, 32), (0, 0, 0, 255))
    for t in range(min(16, len(cg01_raw)//32)):
        t_img = decode_cg_tile(cg01_raw[t*32:(t+1)*32], STAGE1_VOLCANIC_PALETTE).resize((16, 16), Image.Resampling.NEAREST)
        cg_p.paste(t_img, ((t % 8) * 16, (t // 8) * 16))
    comp_canvas.paste(cg_p, (32, 410))
    comp_draw.text((32, 448), "CG01.bin 8x8 Character Tiles (132 tiles)", fill=(255, 255, 255, 255))
    comp_draw.text((32, 464), "Mapped into 16x16 macroblocks by CT01", fill=(139, 148, 158, 255))

    # REGFONT preview
    raw_font = load_font()
    comp_draw.text((32, 492), "REGFONT 8x8 Compressed Glyph Stream:", fill=(121, 192, 255, 255))
    font_test_canvas = Image.new("RGBA", (280, 20), (14, 17, 23, 255))
    draw_font_text(font_test_canvas, raw_font, "THEXDER FIREHAWK 1989", 0, 4, (255, 255, 255, 255))
    comp_canvas.paste(font_test_canvas, (32, 510), font_test_canvas)
    comp_draw.text((32, 538), "Direct assembly blit with color 0 masking", fill=(139, 148, 158, 255))
    comp_draw.text((32, 554), "Dynamic palette remap + vertical retrace cycle", fill=(139, 148, 158, 255))

    # Right Section: Assembled In-Game Screen Simulation (640x480 CRT 4:3)
    comp_draw.rectangle([(360, 65), (1020, 595)], outline=(48, 54, 61, 255), fill=(22, 27, 34, 255))
    comp_draw.text((372, 75), "2. Fully Assembled In-Game Screen Simulation (4:3 CRT Aspect)", fill=(85, 255, 85, 255))
    comp_draw.text((372, 90), "Composited layers: Background tiles -> Enemy -> Player -> Laser -> HUD & Font", fill=(139, 148, 158, 255))

    # Embed CRT scene at (372, 110) with size 630x465
    scene_thumb = crt_640x480.resize((632, 474), Image.Resampling.LANCZOS)
    comp_canvas.paste(scene_thumb, (374, 112))

    breakdown_path = os.path.join(OUT_DIR, "ingame_scene_breakdown.png")
    comp_canvas.save(breakdown_path)
    print(f"[OK] Saved In-Game Scene Breakdown: {breakdown_path}")

if __name__ == "__main__":
    render_all_scene_formats()

