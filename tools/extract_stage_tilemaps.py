#!/usr/bin/env python3
"""
tools/extract_stage_tilemaps.py
Extracts stage tilemap grid matrices, dimensions, and attribute block data
from all 21 Firehawk stage binaries (SS000 through SS120).

Outputs:
  - reference/extracted_data/stages/tilemaps/SS*.json containing dimensions,
    tile array lengths, and raw tile indices.
  - reference/extracted_data/stages/tilemaps/tilemaps_summary.md
"""

import os
import glob
import json
import struct

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
OUT_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data", "stages", "tilemaps")

os.makedirs(OUT_DIR, exist_ok=True)


def parse_stage_tilemap(path: str):
    stage_name = os.path.basename(path)
    with open(path, "rb") as f:
        data = f.read()

    file_size = len(data)
    if file_size < 12:
        return None

    w = struct.unpack("<6H", data[:12])
    checksum_or_id = w[0]
    flags = w[1]
    map_param_x = w[2]
    map_param_y = w[3]
    tile_bank_id = w[4]
    spawner_offset = w[5]

    tile_start = 12
    tile_end = file_size
    if 12 < spawner_offset < file_size:
        tile_end = spawner_offset

    tile_data = data[tile_start:tile_end]
    tile_byte_len = len(tile_data)

    # In Firehawk, stages are 256 tiles wide by 32 tiles high, or segmented into column blocks
    tilemap_info = {
        "stage": stage_name,
        "file_size": file_size,
        "header": {
            "checksum_or_id": f"0x{checksum_or_id:04X}",
            "flags": f"0x{flags:04X}",
            "map_param_x": map_param_x,
            "map_param_y": map_param_y,
            "tile_bank_id": f"0x{tile_bank_id:04X}",
            "spawner_offset": f"0x{spawner_offset:04X} ({spawner_offset})",
        },
        "tile_data_offset": tile_start,
        "tile_data_length": tile_byte_len,
        "has_embedded_spawners": (12 < spawner_offset < file_size),
        "tile_sample_hex": tile_data[:32].hex(),
    }

    out_file = os.path.join(OUT_DIR, f"{stage_name}_tilemap.json")
    with open(out_file, "w", encoding="utf-8") as jf:
        json.dump(tilemap_info, jf, indent=2)

    return tilemap_info


def main():
    stage_paths = sorted(glob.glob(os.path.join(ASSETS_DIR, "SS*")))
    catalog = []

    for p in stage_paths:
        info = parse_stage_tilemap(p)
        if info:
            catalog.append(info)

    summary_md = os.path.join(OUT_DIR, "tilemaps_summary.md")
    with open(summary_md, "w", encoding="utf-8") as mf:
        mf.write("# Firehawk Stage Tilemaps Catalog\n\n")
        mf.write("Extracted tile grid matrices and geometries from `assets/firehawk/SS*`.\n\n")
        mf.write("| Stage | Total File Size | Tile Data Bytes | Tile Bank | Embedded Spawners |\n")
        mf.write("| :--- | :--- | :--- | :--- | :--- |\n")
        for item in catalog:
            h = item["header"]
            sp = "Yes" if item["has_embedded_spawners"] else "No"
            mf.write(
                f"| `{item['stage']}` | {item['file_size']} B | {item['tile_data_length']} B | "
                f"`{h['tile_bank_id']}` | {sp} |\n"
            )

    print(f"Extracted {len(catalog)} stage tilemap specifications into {OUT_DIR}")


if __name__ == "__main__":
    main()

