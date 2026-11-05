#!/usr/bin/env python3
"""
tools/fileid_inspector.py
Inspection and diagnostic tool for FILEID3 and Sierra floppy volume identification markers.
Analyzes byte metadata and inspects SIERRA.EXE disk verification routines.
"""

import os
import sys

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")

BYTE_SEMANTICS = {
    0x31: "ASCII '1' (Volume / Disk Number 1)",
    0x32: "ASCII '2' (Volume / Disk Number 2)",
    0x33: "ASCII '3' (Volume / Disk Number 3)",
    0x34: "ASCII '4' (Volume / Disk Number 4)",
    0x35: "ASCII '5' (Volume / Disk Number 5)",
    0x0D: "ASCII '\\r' (Carriage Return - CR, 0x0D)",
    0x0A: "ASCII '\\n' (Line Feed - LF, 0x0A)",
    0x1A: "ASCII '^Z' (DOS End-Of-File Marker - EOF, 0x1A)"
}

def inspect_fileid(file_path):
    print("=" * 60)
    print(f"  FILEID INSPECTION: {file_path}")
    print("=" * 60)
    
    if not os.path.exists(file_path):
        print(f"[ERROR] File not found: {file_path}")
        return False

    with open(file_path, "rb") as f:
        data = f.read()

    print(f"File Size        : {len(data)} bytes")
    print(f"Hex Dump         : {' '.join(f'{b:02X}' for b in data)}")
    print(f"ASCII Raw String : {repr(data.decode('latin1', errors='replace'))}")
    print("\nByte Breakdown:")
    for idx, b in enumerate(data):
        desc = BYTE_SEMANTICS.get(b, f"Character '{chr(b)}'" if 32 <= b < 127 else f"0x{b:02X}")
        print(f"  Offset +0x{idx:02X} (byte {idx}): 0x{b:02X} -> {desc}")

    return True

def inspect_sierra_exe_disk_check(sierra_path):
    print("\n" + "=" * 60)
    print(f"  SIERRA.EXE DISK VERIFICATION ROUTINE INSPECTION")
    print("=" * 60)
    
    if not os.path.exists(sierra_path):
        print(f"[ERROR] SIERRA.EXE not found: {sierra_path}")
        return False

    with open(sierra_path, "rb") as f:
        data = f.read()

    probe_str = b"fileid5\0"
    pos = data.find(probe_str)
    if pos == -1:
        print("[WARN] Could not find 'fileid5' string in SIERRA.EXE.")
        return False

    print(f"Target String    : 'fileid5\\0' located at file offset 0x{pos:04X}")
    print(f"Routine Location : File offsets 0x{pos+8:04X} .. 0x{pos+8+0x41:04X}")
    print("\nReverse-Engineered Logic:")
    print("  1. SIERRA.EXE loads DS=CS, DX=pointer to 'fileid5\\0'")
    print("  2. Calls DOS INT 21h, AH=3Dh (Open File, Read Only)")
    print("  3. If CF=0 (Found): Sets [0579h] = 1 (5-disk 5.25\" distribution)")
    print("  4. If CF=1 (Fail) : Overwrites '5' with '3' ('fileid3\\0') at CS:[34E5h]")
    print("  5. Calls DOS INT 21h, AH=3Dh again")
    print("  6. If CF=0 (Found): Sets [0579h] = 2 (3-disk 3.5\" distribution)")
    print("  7. Closes file handle via INT 21h, AH=3Eh")
    print("  8. If disk missing during stage swap, halts with 'INVALID DISK CHANGE'")
    return True

def main():
    target_file = sys.argv[1] if len(sys.argv) > 1 else os.path.join(ASSETS_DIR, "FILEID3")
    inspect_fileid(target_file)
    
    sierra_exe = os.path.join(ASSETS_DIR, "SIERRA.EXE")
    if os.path.exists(sierra_exe):
        inspect_sierra_exe_disk_check(sierra_exe)

if __name__ == "__main__":
    main()

