#!/usr/bin/env python3
"""
test_sar_extractor.py
Automated verification test for Sierra Archive Resource (.SAR) loading and extraction.
"""

import os
import sys

# Ensure repository root is on sys.path
REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if REPO_ROOT not in sys.path:
    sys.path.insert(0, REPO_ROOT)

from tools.sar_extractor import sar_load, sar_find_entry, sar_extract_all, sar_free


def main() -> int:
    print("=== Test: Sierra Archive Resource (SAR) Loading & Parsing ===")

    ix_path = os.path.join(REPO_ROOT, "assets", "firehawk", "RES1.IX")
    sar_path = os.path.join(REPO_ROOT, "assets", "firehawk", "RES1.SAR")

    archive = sar_load(ix_path, sar_path)
    if archive is None:
        sys.stderr.write("[FAIL] Failed to load RES1.IX / RES1.SAR\n")
        return 1

    print("[PASS] sar_load succeeded.")
    print(f"       Entries: {archive.entry_count}, SAR Size: {archive.sar_size} bytes")

    # Verify entry count: RES1.IX is 828 bytes / 18 = 46 entries
    if archive.entry_count != 46:
        sys.stderr.write(f"[FAIL] Expected exactly 46 entries in RES1.IX, got {archive.entry_count}\n")
        sar_free(archive)
        return 1

    if archive.sar_size != 49800:
        sys.stderr.write(f"[FAIL] Expected RES1.SAR size 49800 bytes, got {archive.sar_size}\n")
        sar_free(archive)
        return 1

    # Test entry 0: KA00
    ka00 = sar_find_entry(archive, "KA00")
    if ka00 is None or ka00.data_size != 501 or ka00.sar_offset != 13:
        sys.stderr.write("[FAIL] Entry KA00 validation failed\n")
        sar_free(archive)
        return 1
    print(f"[PASS] Entry KA00 validated: offset={ka00.sar_offset}, size={ka00.data_size}")

    # Test entry 1: AD01
    ad01 = sar_find_entry(archive, "AD01")
    if ad01 is None or ad01.data_size != 166 or ad01.sar_offset != 527:
        sys.stderr.write("[FAIL] Entry AD01 validation failed\n")
        sar_free(archive)
        return 1
    print(f"[PASS] Entry AD01 validated: offset={ad01.sar_offset}, size={ad01.data_size}")

    # Test extraction
    test_out = os.path.join(REPO_ROOT, "build", "test_extracted")
    extracted = sar_extract_all(archive, test_out)
    if not extracted:
        sys.stderr.write("[FAIL] sar_extract_all failed\n")
        sar_free(archive)
        return 1
    print(f"[PASS] sar_extract_all successfully extracted entries to {test_out}")

    # Check extracted file on disk
    ka00_file = os.path.join(test_out, "KA00.bin")
    if not os.path.isfile(ka00_file):
        sys.stderr.write("[FAIL] Extracted KA00.bin does not exist\n")
        sar_free(archive)
        return 1

    sz = os.path.getsize(ka00_file)
    if sz != 501:
        sys.stderr.write(f"[FAIL] Extracted KA00.bin size mismatch: expected 501, got {sz}\n")
        sar_free(archive)
        return 1
    print(f"[PASS] Verified extracted file KA00.bin: {sz} bytes")

    sar_free(archive)
    if archive.entries or archive.sar_data:
        sys.stderr.write("[FAIL] sar_free failed to clear entries/data\n")
        return 1
    print("[PASS] sar_free cleanly released all memory.")

    print("\n>>> ALL SAR EXTRACTOR TESTS PASSED <<<")
    return 0


if __name__ == "__main__":
    sys.exit(main())

