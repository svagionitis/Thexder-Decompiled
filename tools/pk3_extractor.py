#!/usr/bin/env python3
"""
tools/pk3_extractor.py
Decompresses and extracts Firehawk: Thexder II Ending Graphic Pack files
(EN23.PK3, EN24.PK3, and EN26.PK3) into decompressed raw payloads and PNG images.

Algorithm:
Firehawk 2-bit Opcode Run-Length Encoding (RLE) Decoder
Reverse-engineered directly from DEMO.EXE routines FUN_1000_0867, FUN_1000_080e,
FUN_1000_088b, and the EGA640.DRV planar graphics subsystem.
"""

import os
import sys
import json
import argparse
from PIL import Image

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if REPO_ROOT not in sys.path:
    sys.path.insert(0, REPO_ROOT)

DEFAULT_ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
DEFAULT_OUT_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data", "images", "pk3_decoded")

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

def decompress_pk3_rle(data: bytes) -> bytes:
    """
    Decompresses Firehawk 2-bit opcode RLE compressed streams.
    Reverse-engineered from DEMO.EXE: FUN_1000_088b.

    Format opcode byte B:
      - Bits [5:0]: count = (B & 0x3F) + 1 (run length: 1 to 64)
      - Bits [7:6]: mode = (B >> 6) & 3
          00 (0x00..0x3F): Repeat 0x00 count times
          01 (0x40..0x7F): Repeat 0xFF count times
          10 (0x80..0xBF):
             if B == 0x80 (count == 1): End of Stream (EOS / Terminator)
             if count > 1: Read next byte V, repeat V count times
          11 (0xC0..0xFF): Read and copy count literal bytes
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
            if count == 1:
                # 0x80 opcode marks End Of Stream
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

def render_ega_planar(planes_data: bytes, width_bytes: int, height: int, num_planes: int = 4) -> Image.Image:
    """
    Renders planar EGA graphics into an RGB PIL Image.
    Each plane has size = width_bytes * height.
    Pixels are reconstructed from 1 bit per plane:
      color = bit0 | (bit1 << 1) | (bit2 << 2) | (bit3 << 3)
    """
    plane_size = width_bytes * height
    width_pixels = width_bytes * 8

    planes = []
    for p in range(num_planes):
        start = p * plane_size
        planes.append(planes_data[start : start + plane_size])

    img = Image.new("RGB", (width_pixels, height), (0, 0, 0))
    pixels = img.load()

    for y in range(height):
        for bx in range(width_bytes):
            idx = y * width_bytes + bx
            bits_per_plane = [planes[p][idx] if idx < len(planes[p]) else 0 for p in range(num_planes)]
            for bit in range(8):
                shift = 7 - bit
                color_idx = 0
                for p in range(num_planes):
                    color_idx |= ((bits_per_plane[p] >> shift) & 1) << p
                pixels[bx * 8 + bit, y] = EGA_DEFAULT_PALETTE[color_idx]

    return img

def render_monochrome_mask(data: bytes, width_bytes: int, height: int) -> Image.Image:
    """
    Renders 1-bit monochrome mask graphics (e.g., EN26 'THE END' title) into a 1-bit PIL Image.
    """
    width_pixels = width_bytes * 8
    img = Image.new("1", (width_pixels, height), 0)
    pixels = img.load()

    for y in range(height):
        for bx in range(width_bytes):
            idx = y * width_bytes + bx
            byte_val = data[idx] if idx < len(data) else 0
            for bit in range(8):
                pixels[bx * 8 + bit, y] = 1 if ((byte_val >> (7 - bit)) & 1) else 0

    return img

def extract_pk3_assets(assets_dir: str, out_dir: str):
    """Extracts, decodes, and visualizes all PK3 files."""
    os.makedirs(out_dir, exist_ok=True)
    bin_dir = os.path.join(out_dir, "raw_bin")
    os.makedirs(bin_dir, exist_ok=True)

    pk3_files = {
        "EN23.PK3": {
            "name": "Earth Curvature / Planet Horizon",
            "scene": "Ending Scene 2 (Orbital Re-entry)",
            "width_bytes": 66,
            "width_px": 528,
            "height": 65,
            "planes": 4,
            "expected_decomp_len": 17160,
            "screen_x": 80,
            "screen_y": 80,
        },
        "EN24.PK3": {
            "name": "Moon & Atmospheric Firehawk Descent",
            "scene": "Ending Scene 2 (Re-entry & Moon)",
            "part1": {
                "width_bytes": 27,
                "width_px": 216,
                "height": 55,
                "planes": 4,
                "len": 5940,
                "screen_x": 184,
                "screen_y": 25,
            },
            "part2": {
                "width_bytes": 27,
                "width_px": 216,
                "height": 29,
                "planes": 2,
                "len": 1566,
                "screen_x": 184,
                "screen_y": 80,
            },
            "expected_decomp_len": 7506,
        },
        "EN26.PK3": {
            "name": "THE END Title Banner",
            "scene": "Ending Finale",
            "width_bytes": 37,
            "width_px": 296,
            "height": 10,
            "planes": 1,
            "expected_decomp_len": 370,
            "screen_x": 168,
            "screen_y": 157,
        },
    }

    manifest = {"files": {}}

    print("==================================================================")
    print("Firehawk: Thexder II PK3 Asset Extraction & Decoding Utility")
    print("==================================================================")

    for filename, meta in pk3_files.items():
        src_path = os.path.join(assets_dir, filename)
        if not os.path.exists(src_path):
            print(f"[WARN] File not found: {src_path}")
            continue

        raw_data = open(src_path, "rb").read()
        decomp_data = decompress_pk3_rle(raw_data)

        # Save decompressed binary
        raw_bin_path = os.path.join(bin_dir, f"{os.path.splitext(filename)[0]}.bin")
        with open(raw_bin_path, "wb") as bf:
            bf.write(decomp_data)

        print(f"[OK] {filename:<10}: Compressed={len(raw_data):>5} B -> Decompressed={len(decomp_data):>5} B")

        file_info = {
            "compressed_size": len(raw_data),
            "decompressed_size": len(decomp_data),
            "meta": meta,
            "exported_images": [],
        }

        # Render specific graphic elements
        if filename == "EN23.PK3":
            img23 = render_ega_planar(decomp_data, meta["width_bytes"], meta["height"], meta["planes"])
            png_name = "EN23_earth_horizon_528x65.png"
            png_path = os.path.join(out_dir, png_name)
            img23.save(png_path)
            file_info["exported_images"].append(png_name)

        elif filename == "EN24.PK3":
            # Part 1: Moon & upper jet flame (4 bitplanes)
            p1_len = meta["part1"]["len"]
            p1_data = decomp_data[:p1_len]
            img24_p1 = render_ega_planar(
                p1_data, meta["part1"]["width_bytes"], meta["part1"]["height"], meta["part1"]["planes"]
            )
            p1_name = "EN24_part1_moon_descent_216x55.png"
            img24_p1.save(os.path.join(out_dir, p1_name))
            file_info["exported_images"].append(p1_name)

            # Part 2: Lower atmospheric tail (2 bitplanes)
            p2_data = decomp_data[p1_len:]
            img24_p2 = render_ega_planar(
                p2_data, meta["part2"]["width_bytes"], meta["part2"]["height"], meta["part2"]["planes"]
            )
            p2_name = "EN24_part2_reentry_tail_216x29.png"
            img24_p2.save(os.path.join(out_dir, p2_name))
            file_info["exported_images"].append(p2_name)

            # Combined EN24 continuous strip (216x84)
            combined_en24 = Image.new("RGB", (meta["part1"]["width_px"], meta["part1"]["height"] + meta["part2"]["height"]), (0, 0, 0))
            combined_en24.paste(img24_p1, (0, 0))
            combined_en24.paste(img24_p2, (0, meta["part1"]["height"]))
            comb_name = "EN24_combined_descent_216x84.png"
            combined_en24.save(os.path.join(out_dir, comb_name))
            file_info["exported_images"].append(comb_name)

        elif filename == "EN26.PK3":
            img26 = render_monochrome_mask(decomp_data, meta["width_bytes"], meta["height"])
            png_name = "EN26_the_end_banner_296x10.png"
            png_path = os.path.join(out_dir, png_name)
            img26.save(png_path)
            file_info["exported_images"].append(png_name)

        manifest["files"][filename] = file_info

    # 4. Render Authentic 640x200 Composite Cutscene Screen
    en23_meta = pk3_files["EN23.PK3"]
    en24_meta = pk3_files["EN24.PK3"]
    en26_meta = pk3_files["EN26.PK3"]

    composite_screen = Image.new("RGB", (640, 200), (0, 0, 0))

    en24_path = os.path.join(out_dir, "EN24_combined_descent_216x84.png")
    if os.path.exists(en24_path):
        en24_img = Image.open(en24_path)
        # Paste with transparency key (black)
        composite_screen.paste(en24_img, (en24_meta["part1"]["screen_x"], en24_meta["part1"]["screen_y"]))

    en23_path = os.path.join(out_dir, "EN23_earth_horizon_528x65.png")
    if os.path.exists(en23_path):
        en23_img = Image.open(en23_path)
        # In the game, Earth curvature overlaps screen from Y=80
        for y in range(en23_img.height):
            for x in range(en23_img.width):
                col = en23_img.getpixel((x, y))
                if col != (0, 0, 0):
                    composite_screen.putpixel((en23_meta["screen_x"] + x, en23_meta["screen_y"] + y), col)

    en26_path = os.path.join(out_dir, "EN26_the_end_banner_296x10.png")
    if os.path.exists(en26_path):
        en26_img = Image.open(en26_path)
        for y in range(en26_img.height):
            for x in range(en26_img.width):
                if en26_img.getpixel((x, y)) != 0:
                    composite_screen.putpixel((en26_meta["screen_x"] + x, en26_meta["screen_y"] + y), (0xFF, 0xFF, 0xFF))

    comp_name = "ending_scene2_full_composite_640x200.png"
    comp_path = os.path.join(out_dir, comp_name)
    composite_screen.save(comp_path)
    manifest["composite_image"] = comp_name
    print(f"[OK] Rendered Composite Cutscene: {comp_name}")

    manifest_path = os.path.join(out_dir, "pk3_manifest.json")
    with open(manifest_path, "w", encoding="utf-8") as jf:
        json.dump(manifest, jf, indent=2)
    print(f"[OK] Manifest written to {manifest_path}")

def main():
    parser = argparse.ArgumentParser(description="Firehawk PK3 Archive & Graphics Extractor")
    parser.add_argument("--assets-dir", default=DEFAULT_ASSETS_DIR, help="Path to assets/firehawk/")
    parser.add_argument("--out-dir", default=DEFAULT_OUT_DIR, help="Output directory for decoded images")
    args = parser.parse_args()

    extract_pk3_assets(args.assets_dir, args.out_dir)

if __name__ == "__main__":
    main()

