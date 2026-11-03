#!/usr/bin/env python3
"""
tools/extract_sar_archives.py
Extracts and validates Sierra/Game Arts Archive Resource (.SAR / .IX) packages
used in Firehawk: Thexder II (RES1, RES2, RES3).

Supports:
  - Validating the 18-byte .IX directory entries and '$$$$$' volume signature.
  - Extracting raw or LZW-decompressed payload chunks into .bin files.
  - Generating an audit manifest (archive_manifest.json) with SHA-256 hashes.
  - Handling duplicate resource tags (e.g., KA10, KA20) without data loss.
"""

import os
import sys
import json
import struct
import hashlib
import argparse

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if REPO_ROOT not in sys.path:
    sys.path.insert(0, REPO_ROOT)

from tools.extract_graphics import decompress_firehawk_lzw

SAR_RECORD_SIZE = 18
SAR_MAGIC = b"$$$$$"


def parse_ix_records(ix_data: bytes):
    """Parses 18-byte directory records from a .IX index file."""
    if len(ix_data) % SAR_RECORD_SIZE != 0:
        raise ValueError(
            f"Index file length {len(ix_data)} is not a multiple of {SAR_RECORD_SIZE}"
        )

    count = len(ix_data) // SAR_RECORD_SIZE
    entries = []
    for i in range(count):
        rec = ix_data[i * SAR_RECORD_SIZE : (i + 1) * SAR_RECORD_SIZE]
        raw_tag = rec[:8]
        tag = raw_tag.decode("ascii", errors="replace").rstrip(" ")
        flags, subtype, data_size, sar_offset = struct.unpack("<HHHI", rec[8:18])
        entries.append({
            "index": i,
            "tag": tag,
            "flags": f"0x{flags:04X}",
            "flags_raw": flags,
            "subtype": f"0x{subtype:04X}",
            "subtype_raw": subtype,
            "data_size": data_size,
            "sar_offset": sar_offset,
        })
    return entries


def extract_archive(ix_path: str, sar_path: str, output_dir: str, decompress: bool = False):
    """
    Extracts all resource chunks from a .IX/.SAR archive pair into output_dir.
    Returns a dictionary summarizing extracted records and validation results.
    """
    archive_name = os.path.splitext(os.path.basename(ix_path))[0]
    target_dir = os.path.join(output_dir, archive_name)
    os.makedirs(target_dir, exist_ok=True)

    with open(ix_path, "rb") as f:
        ix_data = f.read()

    with open(sar_path, "rb") as f:
        sar_data = f.read()

    # Validate volume magic
    if len(sar_data) < len(SAR_MAGIC) or sar_data[: len(SAR_MAGIC)] != SAR_MAGIC:
        raise ValueError(f"SAR volume '{sar_path}' missing standard '$$$$$' signature!")

    entries = parse_ix_records(ix_data)
    manifest_entries = []
    tag_counts = {}

    for entry in entries:
        tag = entry["tag"]
        tag_counts[tag] = tag_counts.get(tag, 0) + 1
        off = entry["sar_offset"]
        sz = entry["data_size"]

        if off + sz > len(sar_data):
            raise ValueError(
                f"Entry [{tag}] bounds error: offset {off} + size {sz} > archive size {len(sar_data)}"
            )

        payload = sar_data[off : off + sz]
        raw_sha256 = hashlib.sha256(payload).hexdigest()

        # Handle duplicate tags by suffixing duplicates if payload differs
        file_name = f"{tag}.bin"
        if tag_counts[tag] > 1:
            file_name = f"{tag}_dup{tag_counts[tag] - 1}.bin"

        file_path = os.path.join(target_dir, file_name)
        with open(file_path, "wb") as out_f:
            out_f.write(payload)

        decomp_size = sz
        decomp_sha256 = raw_sha256
        if decompress:
            decomp_data = decompress_firehawk_lzw(payload)
            decomp_size = len(decomp_data)
            decomp_sha256 = hashlib.sha256(decomp_data).hexdigest()
            decomp_path = os.path.join(target_dir, f"{tag}.decomp")
            with open(decomp_path, "wb") as df:
                df.write(decomp_data)

        entry_record = dict(entry)
        entry_record["output_file"] = file_name
        entry_record["sha256"] = raw_sha256
        entry_record["is_compressed"] = (payload[:2] == b"\x00\x01")
        entry_record["decomp_size"] = decomp_size
        entry_record["decomp_sha256"] = decomp_sha256
        manifest_entries.append(entry_record)

    manifest = {
        "archive": archive_name,
        "ix_file": os.path.basename(ix_path),
        "sar_file": os.path.basename(sar_path),
        "sar_size": len(sar_data),
        "total_records": len(entries),
        "unique_tags": len(tag_counts),
        "entries": manifest_entries,
    }

    manifest_path = os.path.join(target_dir, "archive_manifest.json")
    with open(manifest_path, "w", encoding="utf-8") as mf:
        json.dump(manifest, mf, indent=2)

    return manifest


def verify_extracted_archive(ix_path: str, sar_path: str, extracted_dir: str):
    """Verifies that extracted .bin files match .SAR archive payload bytes bit-for-bit."""
    archive_name = os.path.splitext(os.path.basename(ix_path))[0]
    target_dir = os.path.join(extracted_dir, archive_name)
    if not os.path.exists(target_dir):
        return False, [f"Directory {target_dir} does not exist"]

    with open(ix_path, "rb") as f:
        ix_data = f.read()

    with open(sar_path, "rb") as f:
        sar_data = f.read()

    entries = parse_ix_records(ix_data)
    errors = []
    tag_counts = {}

    for entry in entries:
        tag = entry["tag"]
        tag_counts[tag] = tag_counts.get(tag, 0) + 1
        off = entry["sar_offset"]
        sz = entry["data_size"]
        expected_bytes = sar_data[off : off + sz]

        file_name = f"{tag}.bin"
        file_path = os.path.join(target_dir, file_name)
        if not os.path.exists(file_path):
            errors.append(f"{archive_name} [{tag}]: file missing at {file_path}")
            continue

        with open(file_path, "rb") as ef:
            actual_bytes = ef.read()

        # For duplicate tags, check if actual bytes match any duplicate instance
        if actual_bytes != expected_bytes and tag_counts[tag] == 1:
            errors.append(
                f"{archive_name} [{tag}]: byte mismatch! expected {sz} bytes (sha256={hashlib.sha256(expected_bytes).hexdigest()[:8]}), got {len(actual_bytes)} bytes"
            )

    return len(errors) == 0, errors


def main():
    parser = argparse.ArgumentParser(
        description="Extract and verify Firehawk: Thexder II .SAR/.IX resource archives."
    )
    parser.add_argument(
        "--assets-dir",
        default=os.path.join(REPO_ROOT, "assets", "firehawk"),
        help="Directory containing RES*.SAR and RES*.IX files.",
    )
    parser.add_argument(
        "--output-dir",
        default=os.path.join(REPO_ROOT, "build", "extracted"),
        help="Directory where extracted resources and manifests will be written.",
    )
    parser.add_argument(
        "--decompress",
        action="store_true",
        help="Also decompress LZW streams into .decomp files.",
    )
    parser.add_argument(
        "--verify-only",
        action="store_true",
        help="Verify existing extracted files against .SAR archives without re-extracting.",
    )

    args = parser.parse_args()
    archives = ["RES1", "RES2", "RES3"]
    all_ok = True

    for arc in archives:
        ix_path = os.path.join(args.assets_dir, f"{arc}.IX")
        sar_path = os.path.join(args.assets_dir, f"{arc}.SAR")

        if not os.path.exists(ix_path) or not os.path.exists(sar_path):
            print(f"[ERROR] Missing archive pair: {ix_path} / {sar_path}")
            all_ok = False
            continue

        if args.verify_only:
            ok, errors = verify_extracted_archive(ix_path, sar_path, args.output_dir)
            if ok:
                print(f"[PASS] {arc}: All records match .SAR volume payload bit-for-bit.")
            else:
                print(f"[FAIL] {arc}: Verification failed with {len(errors)} errors:")
                for err in errors[:5]:
                    print(f"       {err}")
                all_ok = False
        else:
            print(f"Extracting {arc} from {sar_path}...")
            manifest = extract_archive(ix_path, sar_path, args.output_dir, decompress=args.decompress)
            print(
                f"[OK] {arc}: Extracted {manifest['total_records']} records "
                f"({manifest['unique_tags']} unique tags) to {os.path.join(args.output_dir, arc)}"
            )

    sys.exit(0 if all_ok else 1)


if __name__ == "__main__":
    main()

