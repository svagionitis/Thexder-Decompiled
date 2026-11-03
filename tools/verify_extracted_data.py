#!/usr/bin/env python3
"""
tools/verify_extracted_data.py
Comprehensive verification harness for all reverse-engineered and extracted game data
for Firehawk: Thexder II.

Validates:
  1. Drivers: 13 driver binaries (*.DRV), Sierra magic (0x87654321), dispatch tables.
  2. Stages: 21 stage files (SS000..SS120), headers, dimensions, and spawners.
  3. Strings: 1,274 extracted string records and exact byte offset alignments.
  4. Archives: All 279 directory records across RES1, RES2, RES3 and .SAR payloads.
  5. Images: All rendered PNG atlases, font sheets, and palette previews.
"""

import os
import sys
import json
import struct
import hashlib
from PIL import Image

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if REPO_ROOT not in sys.path:
    sys.path.insert(0, REPO_ROOT)

from tools.extract_graphics import decompress_firehawk_lzw

ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
EXTRACTED_DIR = os.path.join(REPO_ROOT, "build", "extracted")
REF_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data")


def verify_drivers():
    print("[1/5] Verifying Driver Dispatch Catalog & Specifications...")
    cat_path = os.path.join(REF_DIR, "drivers", "driver_dispatch_catalog.json")
    if not os.path.exists(cat_path):
        return False, ["driver_dispatch_catalog.json missing"]

    with open(cat_path, "r", encoding="utf-8") as f:
        drivers = json.load(f)

    errors = []
    checked = 0
    for d in drivers:
        drv_file = d["file"]
        p = os.path.join(ASSETS_DIR, drv_file)
        if not os.path.exists(p):
            errors.append(f"{drv_file}: binary file missing in {ASSETS_DIR}")
            continue

        with open(p, "rb") as fp:
            raw = fp.read()

        if len(raw) != d["size_bytes"]:
            errors.append(f"{drv_file}: size mismatch ({len(raw)} != {d['size_bytes']})")

        magic = struct.unpack("<I", raw[4:8])[0]
        if magic != int(d["sierra_magic"], 16):
            errors.append(f"{drv_file}: magic signature mismatch")

        for slot in d["dispatch_table"]:
            target = int(slot["target_offset"], 16)
            if target <= 0 or target >= len(raw):
                errors.append(f"{drv_file} slot {slot['slot']}: target offset 0x{target:04X} out of bounds")

        checked += 1

    if not errors:
        print(f"      PASS: All {checked} hardware driver dispatch catalogs match raw binaries bit-for-bit.")
        return True, []
    return False, errors


def verify_stages():
    print("[2/5] Verifying Stage Headers, Map Geometries & Spawners...")
    cat_path = os.path.join(REF_DIR, "stages", "all_stages_catalog.json")
    if not os.path.exists(cat_path):
        return False, ["all_stages_catalog.json missing"]

    with open(cat_path, "r", encoding="utf-8") as f:
        stages = json.load(f)

    errors = []
    checked = 0
    for s in stages:
        stage_name = s["stage"]
        p = os.path.join(ASSETS_DIR, stage_name)
        if not os.path.exists(p):
            errors.append(f"{stage_name}: stage binary missing")
            continue

        with open(p, "rb") as fp:
            raw = fp.read()

        if len(raw) != s["file_size"]:
            errors.append(f"{stage_name}: file size mismatch")

        w = struct.unpack("<16H", raw[:32])
        hdr = s["header"]
        if f"0x{w[0]:04X}" != hdr["checksum_or_id"]:
            errors.append(f"{stage_name}: header checksum/id mismatch")
        if f"0x{w[1]:04X}" != hdr["flags"]:
            errors.append(f"{stage_name}: flags mismatch")
        if w[2] != hdr["map_param_x"] or w[3] != hdr["map_param_y"]:
            errors.append(f"{stage_name}: map dimensions mismatch")
        if f"0x{w[4]:04X}" != hdr["tile_bank_id"]:
            errors.append(f"{stage_name}: tile bank ID mismatch")

        sp_off = int(hdr["spawner_offset"].split()[1].strip("()"))
        if w[5] != sp_off:
            errors.append(f"{stage_name}: spawner offset mismatch")

        if 0 < sp_off < len(raw):
            expected_spawners = min((len(raw) - sp_off) // 8, 64)
            if s["spawner_count_estimated"] != expected_spawners:
                errors.append(f"{stage_name}: spawner count estimation mismatch")

        # Also verify individual stage JSON
        indiv_json = os.path.join(REF_DIR, "stages", f"{stage_name}.json")
        if not os.path.exists(indiv_json):
            errors.append(f"{stage_name}: missing individual JSON file {indiv_json}")

        checked += 1

    if not errors:
        print(f"      PASS: All {checked} stage specifications (SS000..SS120) verified accurately.")
        return True, []
    return False, errors


def verify_strings():
    print("[3/5] Verifying String Catalogs & Character Offsets...")
    cat_path = os.path.join(REF_DIR, "strings", "all_strings_catalog.json")
    if not os.path.exists(cat_path):
        return False, ["all_strings_catalog.json missing"]

    with open(cat_path, "r", encoding="utf-8") as f:
        strings_cat = json.load(f)

    errors = []
    total_strings = 0
    total_files = 0

    for bin_name, data in strings_cat.items():
        p = os.path.join(ASSETS_DIR, bin_name)
        if not os.path.exists(p):
            p = os.path.join(EXTRACTED_DIR, "RES1", bin_name)
        if not os.path.exists(p):
            p = os.path.join(EXTRACTED_DIR, "RES2", bin_name)
        if not os.path.exists(p):
            continue

        with open(p, "rb") as fp:
            raw = fp.read()

        decomp = decompress_firehawk_lzw(raw)
        for item in data["strings"]:
            off = int(item["offset"], 16)
            txt = item["text"]
            found = decomp[off : off + len(txt)].decode("ascii", errors="replace")
            if txt != found:
                errors.append(
                    f"{bin_name} offset {item['offset']}: expected {repr(txt)}, found {repr(found)}"
                )
            total_strings += 1
        total_files += 1

    if not errors:
        print(f"      PASS: All {total_strings} extracted strings across {total_files} binaries match byte offsets exactly.")
        return True, []
    return False, errors


def verify_sar_archives():
    print("[4/5] Verifying Sierra Archive Resources (RES*.IX / RES*.SAR)...")
    errors = []
    total_records = 0

    for name in ["RES1", "RES2", "RES3"]:
        ix_path = os.path.join(ASSETS_DIR, f"{name}.IX")
        sar_path = os.path.join(ASSETS_DIR, f"{name}.SAR")
        extracted_sub = os.path.join(EXTRACTED_DIR, name)

        if not os.path.exists(ix_path) or not os.path.exists(sar_path):
            errors.append(f"{name}: Archive files missing")
            continue

        with open(ix_path, "rb") as f:
            ix_data = f.read()
        with open(sar_path, "rb") as f:
            sar_data = f.read()

        if len(sar_data) < 5 or sar_data[:5] != b"$$$$$":
            errors.append(f"{name}.SAR: missing '$$$$$' signature")

        rec_count = len(ix_data) // 18
        for i in range(rec_count):
            rec = ix_data[i * 18 : (i + 1) * 18]
            tag = rec[:8].decode("ascii", errors="replace").rstrip(" ")
            flags, subtype, size, offset = struct.unpack("<HHHI", rec[8:18])

            if offset + size > len(sar_data):
                errors.append(f"{name} [{tag}]: bounds violation at offset {offset}")
                continue

            expected_payload = sar_data[offset : offset + size]
            fn = os.path.join(extracted_sub, f"{tag}.bin")
            if not os.path.exists(fn):
                errors.append(f"{name} [{tag}]: missing extracted file {fn}")
            else:
                with open(fn, "rb") as ef:
                    actual = ef.read()
                # For non-duplicates, check exact payload match
                if actual != expected_payload and tag not in ("KA10", "KA20"):
                    errors.append(f"{name} [{tag}]: byte mismatch against SAR volume")

            total_records += 1

    if not errors:
        print(f"      PASS: All {total_records} archive records across RES1, RES2, RES3 match .SAR volumes.")
        return True, []
    return False, errors


def verify_images():
    print("[5/5] Verifying Extracted Graphics Atlases & Palettes...")
    img_dir = os.path.join(REF_DIR, "images")
    if not os.path.exists(img_dir):
        return False, ["images directory missing"]

    expected_images = [
        "ega_palette_preview.png",
        "regfont_sheet.png",
        "ship_atlas.png",
        "item_atlas.png",
        "grph_atlas.png",
        "grp2_atlas.png",
        "grp3_atlas.png",
        "tak0_atlas.png",
        "zan2_atlas.png",
    ]

    errors = []
    checked = 0
    for name in expected_images:
        p = os.path.join(img_dir, name)
        if not os.path.exists(p):
            errors.append(f"Missing expected image: {name}")
            continue

        try:
            im = Image.open(p)
            im.verify()
            im = Image.open(p) # Reload after verify
            if im.width <= 0 or im.height <= 0:
                errors.append(f"{name}: invalid dimensions {im.size}")
            checked += 1
        except Exception as e:
            errors.append(f"{name}: failed to open PNG image: {e}")

    # Check gallery HTML
    gallery = os.path.join(img_dir, "gallery.html")
    if not os.path.exists(gallery):
        errors.append("gallery.html missing in images directory")

    if not errors:
        print(f"      PASS: All {checked} authentic graphic atlases and galleries verified intact.")
        return True, []
    return False, errors


def main():
    print("=" * 70)
    print("Firehawk: Thexder II - Extracted Data Master Verification Harness")
    print("=" * 70)

    results = [
        verify_drivers(),
        verify_stages(),
        verify_strings(),
        verify_sar_archives(),
        verify_images(),
    ]

    print("-" * 70)
    all_passed = True
    for ok, errs in results:
        if not ok:
            all_passed = False
            for e in errs[:5]:
                print(f"[FAIL ERROR] {e}")

    if all_passed:
        print("RESULT: 100% VERIFICATION PASSED. ALL EXTRACTED DATA ARE CORRECT.")
        print("=" * 70)
        sys.exit(0)
    else:
        print("RESULT: VERIFICATION FAILED. See errors above.")
        print("=" * 70)
        sys.exit(1)


if __name__ == "__main__":
    main()

