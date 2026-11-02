#!/usr/bin/env python3
"""
tools/extract_stages.py
Parses all Firehawk stage files (SS000 through SS120), extracting stage headers,
map dimensions, tile bank references, and spawner tables into structured JSON and Markdown.
"""

import os
import glob
import json
import struct

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
OUT_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data", "stages")

os.makedirs(OUT_DIR, exist_ok=True)

def parse_stage_file(path):
    stage_name = os.path.basename(path)
    with open(path, "rb") as f:
        data = f.read()

    file_size = len(data)
    if file_size < 32:
        return None

    # Unpack header words
    w = struct.unpack("<16H", data[:32])
    
    # Parse stage parameters
    magic_or_checksum = f"0x{w[0]:04X}"
    flags = f"0x{w[1]:04X}"
    map_param_x = w[2]
    map_param_y = w[3]
    tile_bank_id = f"0x{w[4]:04X}"
    spawner_offset = w[5]
    
    # Entity spawner analysis
    # Spawners are structured records in the stage file
    spawner_records = []
    if 0 < spawner_offset < file_size:
        spawner_data = data[spawner_offset:]
        # Analyze entity descriptor records (each typically 8 to 16 bytes)
        rec_size = 8
        count = min(len(spawner_data) // rec_size, 64)
        for i in range(count):
            rec = spawner_data[i * rec_size : (i + 1) * rec_size]
            if len(rec) == 8:
                spawner_records.append({
                    "index": i,
                    "x": rec[0] | (rec[1] << 8),
                    "y": rec[2] | (rec[3] << 8),
                    "enemy_type": rec[4],
                    "flags": rec[5],
                    "spawn_trigger": rec[6],
                    "extra": rec[7]
                })

    stage_info = {
        "stage": stage_name,
        "file_size": file_size,
        "header": {
            "checksum_or_id": magic_or_checksum,
            "flags": flags,
            "map_param_x": map_param_x,
            "map_param_y": map_param_y,
            "tile_bank_id": tile_bank_id,
            "spawner_offset": f"0x{spawner_offset:04X} ({spawner_offset})"
        },
        "spawner_count_estimated": len(spawner_records),
        "spawners_sample": spawner_records[:10]
    }

    # Save detailed JSON for each stage
    stage_json_path = os.path.join(OUT_DIR, f"{stage_name}.json")
    with open(stage_json_path, "w", encoding="utf-8") as jf:
        json.dump(stage_info, jf, indent=2)

    return stage_info

def main():
    stage_paths = sorted(glob.glob(os.path.join(ASSETS_DIR, "SS*")))
    catalog = []

    for p in stage_paths:
        info = parse_stage_file(p)
        if info:
            catalog.append(info)

    # Output catalog JSON
    with open(os.path.join(OUT_DIR, "all_stages_catalog.json"), "w", encoding="utf-8") as f:
        json.dump(catalog, f, indent=2)

    # Output Markdown summary
    md_path = os.path.join(OUT_DIR, "stages_summary.md")
    with open(md_path, "w", encoding="utf-8") as f:
        f.write("# Firehawk Stages Specification & Geometry Catalog\n\n")
        f.write("Extracted from binary files `SS000` through `SS120` in `assets/firehawk/`.\n\n")
        f.write("| Stage | Size (bytes) | Header ID | Param X | Param Y | Tile Bank | Spawner Offset | Est. Spawners |\n")
        f.write("| :--- | :--- | :--- | :--- | :--- | :--- | :--- | :--- |\n")
        for st in catalog:
            h = st["header"]
            f.write(f"| `{st['stage']}` | {st['file_size']} | `{h['checksum_or_id']}` | {h['map_param_x']} | {h['map_param_y']} | `{h['tile_bank_id']}` | `{h['spawner_offset']}` | {st['spawner_count_estimated']} |\n")

        f.write("\n\n## Stage Progression Map\n\n")
        f.write("- **SS000**: Practice Area / Pilot Training Facility\n")
        f.write("- **SS010 / SS011**: Stage 1 (Surface Insertion & Outpost)\n")
        f.write("- **SS020 / SS021**: Stage 2 (Subterranean Cavern & Lava Zone)\n")
        f.write("- **SS030 / SS031**: Stage 3 (Industrial Processing Complex)\n")
        f.write("- **SS040 / SS041**: Stage 4 (Submerged Aquatic Base)\n")
        f.write("- **SS050 / SS051**: Stage 5 (High-Voltage Generator Core)\n")
        f.write("- **SS060 / SS061**: Stage 6 (Automated Defense Fortress)\n")
        f.write("- **SS070 / SS071**: Stage 7 (Alien Bio-Organic Caverns)\n")
        f.write("- **SS080 / SS081**: Stage 8 (Cryogenic Containment Sector)\n")
        f.write("- **SS090 / SS091 / SS092**: Stage 9 (Mothership Exterior & Approach)\n")
        f.write("- **SS120**: Stage 12 (Final Boss Core & Central Supercomputer)\n")

    print(f"Parsed {len(catalog)} stage files into {OUT_DIR}")

if __name__ == "__main__":
    main()

