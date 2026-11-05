#!/usr/bin/env python3
"""
sar_extractor.py
Sierra Archive Resource (.SAR / .IX) parser and extraction tool for Firehawk: Thexder II.

Provides programmatic access and command-line extraction for .IX index and companion
.SAR volume archives.
"""

import os
import sys
import struct
from typing import Optional, List

SAR_RECORD_SIZE = 18
SAR_MAGIC = b"$$$$$"
SAR_MAGIC_LEN = len(SAR_MAGIC)


class SarEntry:
    """Represents a single resource entry from a Sierra/Game Arts .IX file."""

    def __init__(self, tag: str, flags: int, subtype: int, data_size: int, sar_offset: int):
        self.tag: str = tag
        self.flags: int = flags
        self.subtype: int = subtype
        self.data_size: int = data_size
        self.sar_offset: int = sar_offset

    def __repr__(self) -> str:
        return (
            f"SarEntry(tag='{self.tag}', flags=0x{self.flags:04X}, "
            f"subtype=0x{self.subtype:04X}, size={self.data_size}, offset={self.sar_offset})"
        )


class SarArchive:
    """Represents a parsed Sierra Archive Resource."""

    def __init__(self, entries: List[SarEntry], sar_data: bytes):
        self.entries: List[SarEntry] = entries
        self.sar_data: bytes = sar_data
        self.sar_size: int = len(sar_data)

    @property
    def entry_count(self) -> int:
        return len(self.entries)


def sar_load(ix_path: str, sar_path: str) -> Optional[SarArchive]:
    """
    Loads and parses a paired .IX index and .SAR volume file.

    :param ix_path: Path to the .IX index file.
    :param sar_path: Path to the companion .SAR archive volume file.
    :return: SarArchive instance if successful, None otherwise.
    """
    if not ix_path or not sar_path:
        return None

    if not os.path.isfile(ix_path):
        sys.stderr.write(f"sar_extractor: Failed to open index file: {ix_path}\n")
        return None

    try:
        with open(ix_path, "rb") as f:
            ix_data = f.read()
    except OSError as err:
        sys.stderr.write(f"sar_extractor: Failed to read index file: {err}\n")
        return None

    ix_size = len(ix_data)
    if ix_size == 0 or (ix_size % SAR_RECORD_SIZE) != 0:
        sys.stderr.write(
            f"sar_extractor: Invalid index file size ({ix_size} bytes, not multiple of {SAR_RECORD_SIZE}): {ix_path}\n"
        )
        return None

    if not os.path.isfile(sar_path):
        sys.stderr.write(f"sar_extractor: Failed to open volume file: {sar_path}\n")
        return None

    try:
        with open(sar_path, "rb") as f:
            sar_data = f.read()
    except OSError as err:
        sys.stderr.write(f"sar_extractor: Failed to read volume file: {err}\n")
        return None

    sar_size = len(sar_data)
    if sar_size < SAR_MAGIC_LEN or not sar_data.startswith(SAR_MAGIC):
        sys.stderr.write(f"sar_extractor: Missing '$$$$$' signature in: {sar_path}\n")
        return None

    entry_count = ix_size // SAR_RECORD_SIZE
    entries: List[SarEntry] = []

    for i in range(entry_count):
        rec = ix_data[i * SAR_RECORD_SIZE : (i + 1) * SAR_RECORD_SIZE]
        raw_tag = rec[:8]
        tag = raw_tag.decode("ascii", errors="replace").rstrip(" ")
        flags, subtype, data_size, sar_offset = struct.unpack("<HHHI", rec[8:18])

        if sar_offset + data_size > sar_size:
            sys.stderr.write(
                f"sar_extractor: Warning: Entry [{tag}] exceeds archive bounds "
                f"(offset {sar_offset}, size {data_size}, file size {sar_size})\n"
            )

        entries.append(SarEntry(tag, flags, subtype, data_size, sar_offset))

    return SarArchive(entries, sar_data)


def sar_free(archive: Optional[SarArchive]) -> None:
    """Frees archive references (kept for C API parity)."""
    if archive is not None:
        archive.entries = []
        archive.sar_data = b""
        archive.sar_size = 0


def sar_find_entry(archive: Optional[SarArchive], tag: str) -> Optional[SarEntry]:
    """Searches archive for an entry matching the resource tag."""
    if archive is None or not archive.entries or not tag:
        return None

    for entry in archive.entries:
        if entry.tag == tag:
            return entry
    return None


def sar_extract_all(archive: Optional[SarArchive], output_dir: str) -> bool:
    """Extracts all contained resource records to files in output_dir."""
    if archive is None or not archive.entries or not archive.sar_data or not output_dir:
        return False

    os.makedirs(output_dir, exist_ok=True)
    all_ok = True

    for entry in archive.entries:
        if entry.sar_offset + entry.data_size > archive.sar_size:
            all_ok = False
            continue

        out_path = os.path.join(output_dir, f"{entry.tag}.bin")
        try:
            with open(out_path, "wb") as fp:
                if entry.data_size > 0:
                    payload = archive.sar_data[entry.sar_offset : entry.sar_offset + entry.data_size]
                    fp.write(payload)
        except OSError as err:
            sys.stderr.write(f"sar_extractor: Could not create output file: {out_path} ({err})\n")
            all_ok = False

    return all_ok


def main() -> int:
    """CLI entrypoint matching sar_main.c functionality."""
    if len(sys.argv) < 2:
        print("Usage: sar_extractor <path_to_ix_file_or_dir> [output_directory]")
        print("Example: sar_extractor assets/firehawk/RES1.IX build/extracted/res1")
        print("         sar_extractor assets/firehawk build/extracted")
        return 1

    target_path = sys.argv[1]
    out_dir = sys.argv[2] if len(sys.argv) >= 3 else "build/extracted_assets"

    # Check if target is a single IX file
    if target_path.upper().endswith(".IX"):
        sar_path = target_path[:-3] + ".SAR"
        archive = sar_load(target_path, sar_path)
        if archive is None:
            return 1

        print(f"Loaded {target_path}: {archive.entry_count} entries, {archive.sar_size} bytes total.")
        ok = sar_extract_all(archive, out_dir)
        sar_free(archive)

        if ok:
            print(f"Successfully extracted all entries to: {out_dir}")
            return 0
        return 1

    # Process standard volumes: RES1, RES2, RES3
    volumes = ["RES1", "RES2", "RES3"]
    success_count = 0

    for vol in volumes:
        ix_file = os.path.join(target_path, f"{vol}.IX")
        sar_file = os.path.join(target_path, f"{vol}.SAR")
        vol_out = os.path.join(out_dir, vol)

        archive = sar_load(ix_file, sar_file)
        if archive is not None:
            print(f"Volume {vol}: {archive.entry_count} entries, {archive.sar_size} bytes.")
            if sar_extract_all(archive, vol_out):
                print(f"  Extracted to: {vol_out}")
                success_count += 1
            sar_free(archive)

    return 0 if success_count > 0 else 1


if __name__ == "__main__":
    sys.exit(main())

