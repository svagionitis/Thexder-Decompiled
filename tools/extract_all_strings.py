#!/usr/bin/env python3
"""
tools/extract_all_strings.py
Extracts and categorizes strings, messages, and identifiers from Firehawk DOS binaries
and decompressed archive resources into structured human-readable JSON and Markdown files.
"""

import os
import sys
import json

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if REPO_ROOT not in sys.path:
    sys.path.insert(0, REPO_ROOT)

from tools.extract_graphics import decompress_firehawk_lzw
ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
EXTRACTED_DIR = os.path.join(REPO_ROOT, "build", "extracted")
OUT_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data", "strings")

os.makedirs(OUT_DIR, exist_ok=True)

def extract_strings_from_bytes(data: bytes, min_len: int = 4):
    strings = []
    curr = []
    start_offset = 0
    for idx, b in enumerate(data):
        if 32 <= b <= 126 or b in (10, 13, 9):
            if not curr:
                start_offset = idx
            curr.append(chr(b))
        else:
            if len(curr) >= min_len:
                raw_str = "".join(curr)
                l_stripped = raw_str.lstrip()
                lead_spaces = len(raw_str) - len(l_stripped)
                s = l_stripped.rstrip()
                actual_offset = start_offset + lead_spaces
                if len(s) >= min_len and any(c.isalpha() for c in s):
                    strings.append({
                        "offset": f"0x{actual_offset:05X}",
                        "text": s
                    })
            curr = []
    if len(curr) >= min_len:
        raw_str = "".join(curr)
        l_stripped = raw_str.lstrip()
        lead_spaces = len(raw_str) - len(l_stripped)
        s = l_stripped.rstrip()
        actual_offset = start_offset + lead_spaces
        if len(s) >= min_len and any(c.isalpha() for c in s):
            strings.append({
                "offset": f"0x{actual_offset:05X}",
                "text": s
            })
    return strings

def process_file(file_path, rel_category):
    with open(file_path, "rb") as f:
        data = f.read()

    # If file is LZW compressed, decompress it first
    decompressed = decompress_firehawk_lzw(data)
    is_compressed = (len(decompressed) != len(data))

    strs = extract_strings_from_bytes(decompressed)
    return {
        "file": os.path.basename(file_path),
        "category": rel_category,
        "is_compressed": is_compressed,
        "raw_size": len(data),
        "decompressed_size": len(decompressed),
        "string_count": len(strs),
        "strings": strs
    }

def main():
    catalog = {}

    # 1. Executables
    for exe in ["GAME.EXE", "SIERRA.EXE", "DEMO.EXE", "INSTALL.EXE"]:
        p = os.path.join(ASSETS_DIR, exe)
        if os.path.exists(p):
            catalog[exe] = process_file(p, "executable")

    # 2. Drivers
    for root, _, files in os.walk(ASSETS_DIR):
        for f in files:
            if f.endswith(".DRV"):
                p = os.path.join(root, f)
                catalog[f] = process_file(p, "driver")

    # 3. Extracted archive resources (text, dialogue, menus)
    text_resources = ["COMMDATA.bin", "GMEN.bin", "DED1.bin", "DED2.bin"]
    for root, _, files in os.walk(EXTRACTED_DIR):
        for f in files:
            if f in text_resources or f.endswith(".txt") or f.endswith(".CFG"):
                p = os.path.join(root, f)
                catalog[f] = process_file(p, "resource")

    # Write JSON output
    json_path = os.path.join(OUT_DIR, "all_strings_catalog.json")
    with open(json_path, "w", encoding="utf-8") as f:
        json.dump(catalog, f, indent=2)

    # Write Markdown summary
    md_path = os.path.join(OUT_DIR, "strings_summary.md")
    with open(md_path, "w", encoding="utf-8") as f:
        f.write("# Firehawk Extracted Text & Strings Catalog\n\n")
        f.write("| Binary / Resource | Category | Raw Size | Decompressed Size | String Count |\n")
        f.write("| :--- | :--- | :--- | :--- | :--- |\n")
        for name, item in catalog.items():
            f.write(f"| `{name}` | {item['category']} | {item['raw_size']} B | {item['decompressed_size']} B | {item['string_count']} |\n")

        f.write("\n## Key Dialogue & Error Messages\n\n")
        for name in ["SIERRA.EXE", "GAME.EXE", "INSTALL.EXE", "COMMDATA.bin"]:
            if name in catalog:
                f.write(f"### Strings from `{name}`\n\n```text\n")
                for s in catalog[name]["strings"][:35]:
                    f.write(f"[{s['offset']}] {s['text']}\n")
                f.write("```\n\n")

    print(f"Extracted strings for {len(catalog)} binaries to {OUT_DIR}")

if __name__ == "__main__":
    main()
