#!/usr/bin/env python3
"""
tools/decode_ttl.py
Authentic decoder, extractor, and visualizer for Firehawk: Thexder II
Title Screen Assets (TTLC and TTLS).

Reverse-Engineered Pipeline:
  - DEMO.EXE: FUN_1000_02c4 .. FUN_1000_0495 (Attract title sequencer & delta renderer)
  - DEMO.EXE: FUN_1000_088b (2-bit opcode RLE decompression engine)
  - EGA640.DRV: Dispatch slot 0x30 / routine 0000:09ba (Planar tilemap compositor)

Assets:
  - TTLC (2,049 bytes): 128 tile glyphs, 16x8 pixels 1-bit planar bitmap (2,048 B + 0x1A EOF)
  - TTLS (3,492 bytes): 736-byte Game Arts sequencing header + 2,756-byte RLE bitstream
                        expanding to 40 sequential 32x16 tilemaps (20,480 B + 0x1A EOF)
"""

import os
import sys
import json
import argparse
from typing import List, Tuple
from PIL import Image, ImageDraw, ImageFont

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if REPO_ROOT not in sys.path:
    sys.path.insert(0, REPO_ROOT)

DEFAULT_ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
DEFAULT_OUT_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data", "images", "ttl_decoded")

# Standard 16-color EGA hardware palette (RGB)
EGA_DEFAULT_PALETTE = [
    (0x00, 0x00, 0x00),  # 0: Black / Transparent
    (0x00, 0x00, 0xAA),  # 1: Blue
    (0x00, 0xAA, 0x00),  # 2: Green
    (0x00, 0xAA, 0xAA),  # 3: Cyan
    (0xAA, 0x00, 0x00),  # 4: Red
    (0xAA, 0x00, 0xAA),  # 5: Magenta
    (0xAA, 0x55, 0x00),  # 6: Brown
    (0xAA, 0xAA, 0xAA),  # 7: Light Gray
    (0x55, 0x55, 0x55),  # 8: Dark Gray
    (0x55, 0x55, 0xFF),  # 9: Bright Blue
    (0x55, 0xFF, 0x55),  # 10: Bright Green
    (0x55, 0xFF, 0xFF),  # 11: Bright Cyan
    (0xFF, 0x55, 0x55),  # 12: Bright Red
    (0xFF, 0x55, 0xFF),  # 13: Bright Magenta
    (0xFF, 0xFF, 0x55),  # 14: Bright Yellow
    (0xFF, 0xFF, 0xFF),  # 15: Bright White
]


def decompress_firehawk_rle(data: bytes) -> bytes:
    """
    Decompresses Firehawk 2-bit opcode RLE bitstream.
    Reverse-engineered directly from DEMO.EXE routine FUN_1000_088b.
    Format opcode byte B:
      - Bits [5:0]: count = (B & 0x3F) + 1 (run length: 1 to 64)
      - Bits [7:6]: mode = (B >> 6) & 3
          00: Repeat 0x00 count times
          01: Repeat 0xFF count times
          10: If count == 1 (B == 0x80): End of Stream (EOS)
              If count > 1: Read next byte V, repeat V count times
          11: Literal copy: Read and copy count literal bytes
    """
    output = bytearray()
    i = 0
    total_len = len(data)

    while i < total_len:
        b = data[i]
        i += 1
        count = (b & 0x3F) + 1
        mode = (b >> 6) & 3

        if mode == 0:  # 00: Zero-run
            output.extend(b"\x00" * count)
        elif mode == 1:  # 01: 0xFF-run
            output.extend(b"\xFF" * count)
        elif mode == 2:  # 10: Repeated value or EOS
            if count == 1:  # 0x80 opcode marks End Of Stream
                break
            if i >= total_len:
                break
            val = data[i]
            i += 1
            output.extend(bytes([val]) * count)
        elif mode == 3:  # 11: Literal copy
            literal_chunk = data[i : i + count]
            i += len(literal_chunk)
            output.extend(literal_chunk)

    return bytes(output)


def decode_ttlc_tiles(raw_bytes: bytes) -> List[Image.Image]:
    """
    Decodes the TTLC 1-bit tile glyph charset.
    TTLC contains 128 tiles of 16x8 pixels (16 bytes per tile = 2 bytes per scanline).
    Tile 0 is reserved for transparent space (empty 16x8 tile).
    Tiles 1..128 correspond to records in TTLC.
    """
    tile_images = [Image.new("1", (16, 8), 0)]  # Tile 0: Blank / transparent

    num_tiles = min(128, len(raw_bytes) // 16)
    for t_idx in range(num_tiles):
        tile_chunk = raw_bytes[t_idx * 16 : (t_idx + 1) * 16]
        img = Image.new("1", (16, 8), 0)
        pixels = img.load()
        for y in range(8):
            b0 = tile_chunk[y * 2]
            b1 = tile_chunk[y * 2 + 1]
            w = (b0 << 8) | b1
            for x in range(16):
                if (w >> (15 - x)) & 1:
                    pixels[x, y] = 1
        tile_images.append(img)

    return tile_images


def create_ttlc_atlas(tile_images: List[Image.Image], scale: int = 4) -> Image.Image:
    """
    Creates an annotated 16x8 grid atlas of all 128 TTLC glyphs.
    """
    cols = 16
    rows = 8
    tile_w, tile_h = 16, 8
    padding = 2

    canvas_w = cols * (tile_w * scale + padding) + padding
    canvas_h = rows * (tile_h * scale + padding) + padding
    atlas = Image.new("RGB", (canvas_w, canvas_h), (30, 30, 30))
    draw = ImageDraw.Draw(atlas)

    for idx in range(1, len(tile_images)):
        t_num = idx - 1  # 0..127
        gx = t_num % cols
        gy = t_num // cols

        x_pos = padding + gx * (tile_w * scale + padding)
        y_pos = padding + gy * (tile_h * scale + padding)

        # Draw tile bounding box
        draw.rectangle(
            [x_pos, y_pos, x_pos + tile_w * scale - 1, y_pos + tile_h * scale - 1],
            fill=(10, 10, 10),
            outline=(60, 60, 60)
        )

        tile = tile_images[idx]
        for ty in range(tile_h):
            for tx in range(tile_w):
                if tile.getpixel((tx, ty)) == 1:
                    draw.rectangle(
                        [
                            x_pos + tx * scale,
                            y_pos + ty * scale,
                            x_pos + (tx + 1) * scale - 1,
                            y_pos + (ty + 1) * scale - 1,
                        ],
                        fill=(255, 255, 255)
                    )

    return atlas


def render_ttls_frame(
    frame_data: bytes,
    tile_images: List[Image.Image],
    fg_color: Tuple[int, int, int] = (255, 255, 255),
    bg_color: Tuple[int, int, int] = (0, 0, 0)
) -> Image.Image:
    """
    Renders a single 32x16 tilemap frame into a 512x128 pixel Image.
    """
    width = 32 * 16  # 512 px
    height = 16 * 8  # 128 px
    img = Image.new("RGB", (width, height), bg_color)
    pixels = img.load()

    for row in range(16):
        for col in range(32):
            cell_offset = row * 32 + col
            if cell_offset >= len(frame_data):
                break
            tile_idx = frame_data[cell_offset]
            if 0 < tile_idx < len(tile_images):
                t = tile_images[tile_idx]
                base_x = col * 16
                base_y = row * 8
                for ty in range(8):
                    for tx in range(16):
                        if t.getpixel((tx, ty)) == 1:
                            pixels[base_x + tx, base_y + ty] = fg_color

    return img


def composite_on_ega_canvas(
    frame_img: Image.Image,
    screen_x: int = 64,
    screen_y: int = 40
) -> Image.Image:
    """
    Places the 512x128 frame onto the authentic 640x200 EGA backbuffer canvas.
    Screen coordinate (64, 40) directly mirrors EGA640.DRV routine 0000:09ba (mov di, 0x2808).
    """
    canvas = Image.new("RGB", (640, 200), (0, 0, 0))
    canvas.paste(frame_img, (screen_x, screen_y))
    return canvas


def extract_ttl(assets_dir: str, out_dir: str):
    """
    Extracts, decodes, and documents TTLC and TTLS assets.
    """
    ttlc_path = os.path.join(assets_dir, "TTLC")
    ttls_path = os.path.join(assets_dir, "TTLS")

    if not os.path.exists(ttlc_path) or not os.path.exists(ttls_path):
        raise FileNotFoundError(f"Missing TTLC or TTLS in {assets_dir}")

    os.makedirs(out_dir, exist_ok=True)
    frames_dir = os.path.join(out_dir, "frames")
    composite_dir = os.path.join(out_dir, "composites")
    os.makedirs(frames_dir, exist_ok=True)
    os.makedirs(composite_dir, exist_ok=True)

    print("=" * 70)
    print("FIrehawk: Thexder II — TTLC & TTLS Asset Decoder & Visualizer")
    print("=" * 70)

    # 1. Parse TTLC
    with open(ttlc_path, "rb") as f:
        ttlc_raw = f.read()
    print(f"[*] Loaded TTLC: {len(ttlc_raw):,} bytes")
    has_ttlc_eof = (ttlc_raw[-1] == 0x1A)
    ttlc_glyph_bytes = ttlc_raw[:2048]

    # Save raw tile glyph binary
    raw_glyphs_path = os.path.join(out_dir, "ttlc_glyphs_128x16.bin")
    with open(raw_glyphs_path, "wb") as f:
        f.write(ttlc_glyph_bytes)
    print(f"[+] Saved raw tile glyphs: {raw_glyphs_path} (2,048 B)")

    tile_images = decode_ttlc_tiles(ttlc_glyph_bytes)
    print(f"[+] Decoded {len(tile_images) - 1} glyphs (16x8 pixels each)")

    # Save TTLC tile atlas
    atlas_img = create_ttlc_atlas(tile_images, scale=4)
    atlas_path = os.path.join(out_dir, "ttlc_tileset_atlas.png")
    atlas_img.save(atlas_path)
    print(f"[+] Rendered TTLC glyph atlas: {atlas_path} ({atlas_img.width}x{atlas_img.height})")

    # 2. Parse TTLS
    with open(ttls_path, "rb") as f:
        ttls_raw = f.read()
    print(f"[*] Loaded TTLS: {len(ttls_raw):,} bytes")

    offset_word = int.from_bytes(ttls_raw[:2], "little")
    rle_offset = offset_word - 0x6000
    print(f"[+] Header Base Offset Word: 0x{offset_word:04X} -> File Offset: 0x{rle_offset:04X} ({rle_offset} bytes)")

    header_bytes = ttls_raw[:rle_offset]
    compressed_payload = ttls_raw[rle_offset:]
    print(f"[+] RLE Compressed Stream: {len(compressed_payload):,} bytes")

    decompressed_payload = decompress_firehawk_rle(compressed_payload)
    has_ttls_eof = (len(decompressed_payload) > 0 and decompressed_payload[-1] == 0x1A)
    tilemap_data = decompressed_payload[:20480]
    num_frames = len(tilemap_data) // 512

    print(f"[+] Decompressed Payload: {len(decompressed_payload):,} bytes ({num_frames} frames of 512 bytes)")

    # Save raw tilemap binary
    raw_tilemaps_path = os.path.join(out_dir, "ttls_tilemaps_40x512.bin")
    with open(raw_tilemaps_path, "wb") as f:
        f.write(tilemap_data)
    print(f"[+] Saved raw tilemap stream: {raw_tilemaps_path} (20,480 B)")

    # 3. Render all frames and full-canvas composites
    rendered_frames: List[Image.Image] = []
    composite_frames: List[Image.Image] = []

    for frame_idx in range(num_frames):
        frame_chunk = tilemap_data[frame_idx * 512 : (frame_idx + 1) * 512]
        frame_img = render_ttls_frame(frame_chunk, tile_images)
        frame_file = f"ttls_frame_{frame_idx:02d}.png"
        frame_img.save(os.path.join(frames_dir, frame_file))
        rendered_frames.append(frame_img)

        # Composite onto 640x200 canvas
        comp_img = composite_on_ega_canvas(frame_img, screen_x=64, screen_y=40)
        comp_file = f"ttls_composite_{frame_idx:02d}.png"
        comp_img.save(os.path.join(composite_dir, comp_file))
        composite_frames.append(comp_img)

    print(f"[+] Rendered {num_frames} individual 512x128 frames into {frames_dir}")
    print(f"[+] Rendered {num_frames} full 640x200 EGA canvas frames into {composite_dir}")

    # 4. Generate Animated GIF
    gif_path = os.path.join(out_dir, "ttls_title_animation.gif")
    rendered_frames[0].save(
        gif_path,
        save_all=True,
        append_images=rendered_frames[1:],
        duration=100,
        loop=0
    )
    print(f"[+] Generated animated title sequence: {gif_path}")

    # 5. Generate Contact Sheet Montage (8 columns x 5 rows)
    montage_cols = 8
    montage_rows = 5
    m_thumb_w = 512 // 4  # 128 px
    m_thumb_h = 128 // 4  # 32 px
    pad = 4

    montage_w = montage_cols * (m_thumb_w + pad) + pad
    montage_h = montage_rows * (m_thumb_h + pad) + pad
    montage_img = Image.new("RGB", (montage_w, montage_h), (20, 20, 20))

    for idx, f_img in enumerate(rendered_frames):
        gx = idx % montage_cols
        gy = idx // montage_cols
        thumb = f_img.resize((m_thumb_w, m_thumb_h), Image.Resampling.NEAREST)
        x_pos = pad + gx * (m_thumb_w + pad)
        y_pos = pad + gy * (m_thumb_h + pad)
        montage_img.paste(thumb, (x_pos, y_pos))

    montage_path = os.path.join(out_dir, "ttls_contact_sheet.png")
    montage_img.save(montage_path)
    print(f"[+] Generated contact sheet montage: {montage_path} ({montage_w}x{montage_h})")

    # 6. Save JSON Manifest
    manifest = {
        "metadata": {
            "game": "Firehawk: Thexder II",
            "developer": "Game Arts / Sierra On-Line (1990)",
            "subsystem": "Attract Mode Title Screen Animation Sequencer",
            "reverse_engineered_from": [
                "DEMO.EXE: FUN_1000_02c4..FUN_1000_0495",
                "DEMO.EXE: FUN_1000_088b (2-bit opcode RLE decompressor)",
                "EGA640.DRV: Dispatch slot 0x30 / routine 0000:09ba"
            ]
        },
        "ttlc": {
            "file": "TTLC",
            "file_size": len(ttlc_raw),
            "payload_size": 2048,
            "has_eof_marker_0x1a": has_ttlc_eof,
            "glyph_count": 128,
            "glyph_dimensions": {"width": 16, "height": 8, "bits_per_pixel": 1},
            "bytes_per_glyph": 16,
            "atlas_image": "ttlc_tileset_atlas.png",
            "raw_binary": "ttlc_glyphs_128x16.bin"
        },
        "ttls": {
            "file": "TTLS",
            "file_size": len(ttls_raw),
            "header_size": rle_offset,
            "header_base_word": f"0x{offset_word:04X}",
            "compressed_rle_size": len(compressed_payload),
            "decompressed_payload_size": len(decompressed_payload),
            "has_eof_marker_0x1a": has_ttls_eof,
            "frame_count": num_frames,
            "frame_dimensions": {
                "tiles_x": 32,
                "tiles_y": 16,
                "pixels_w": 512,
                "pixels_h": 128,
                "screen_dest_x": 64,
                "screen_dest_y": 40,
                "canvas_w": 640,
                "canvas_h": 200
            },
            "animation_gif": "ttls_title_animation.gif",
            "contact_sheet": "ttls_contact_sheet.png",
            "raw_binary": "ttls_tilemaps_40x512.bin"
        }
    }

    manifest_path = os.path.join(out_dir, "ttl_manifest.json")
    with open(manifest_path, "w", encoding="utf-8") as jf:
        json.dump(manifest, jf, indent=2)
    print(f"[+] Manifest saved: {manifest_path}")
    print("=" * 70)
    print("Extraction and decoding completed successfully!")


def main():
    parser = argparse.ArgumentParser(description="Firehawk TTLC and TTLS Title Asset Decoder")
    parser.add_argument("--assets-dir", default=DEFAULT_ASSETS_DIR, help="Path to Firehawk assets")
    parser.add_argument("--out-dir", default=DEFAULT_OUT_DIR, help="Output directory")
    args = parser.parse_args()

    extract_ttl(args.assets_dir, args.out_dir)


if __name__ == "__main__":
    main()

