#!/usr/bin/env python3
"""
tools/export_driver_disasm.py
Uses rizin in 16-bit x86 Real Mode (-a x86 -b 16) to generate full linear
disassembly for all *.DRV files and SIERRA.EXE into reference/raw_decompiled/
"""

import os
import glob
import subprocess

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
OUT_DIR = os.path.join(REPO_ROOT, "reference", "raw_decompiled")
RIZIN_EXE = r"C:\Users\Stavros\MyPrograms\Cutter-v2.5.0-Windows-x86_64\Cutter-v2.5.0-Windows-x86_64\rizin.exe"

os.makedirs(OUT_DIR, exist_ok=True)

def disassemble_16bit(bin_path, out_asm_path):
    fn = os.path.basename(bin_path)
    file_size = os.path.getsize(bin_path)
    num_instructions = max(50, file_size // 2)

    cmd = [
        RIZIN_EXE,
        "-q",
        "-a", "x86",
        "-b", "16",
        "-c", f"e asm.bytes = 1; e asm.comments = 1; pd {num_instructions} @ 0",
        bin_path
    ]

    try:
        res = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, check=True)
        disasm_text = res.stdout

        with open(out_asm_path, "w", encoding="utf-8") as f:
            f.write(f"; ============================================================================\n")
            f.write(f"; Complete 16-bit Real Mode Disassembly for: {fn}\n")
            f.write(f"; File Size: {file_size} bytes\n")
            f.write(f"; Architecture: x86 16-bit Real Mode\n")
            f.write(f"; ============================================================================\n\n")
            f.write(disasm_text)

        print(f"[OK] Generated disassembly for {fn} ({len(disasm_text.splitlines())} lines)")
    except Exception as e:
        print(f"[ERROR] Disassembly failed for {fn}: {e}")

def main():
    driver_files = sorted(glob.glob(os.path.join(ASSETS_DIR, "*.DRV")))
    for df in driver_files:
        fn = os.path.basename(df)
        out_file = os.path.join(OUT_DIR, f"{fn}_disassembly.asm")
        disassemble_16bit(df, out_file)

    sierra_exe = os.path.join(ASSETS_DIR, "SIERRA.EXE")
    if os.path.exists(sierra_exe):
        disassemble_16bit(sierra_exe, os.path.join(OUT_DIR, "SIERRA.EXE_full_disassembly.asm"))

if __name__ == "__main__":
    main()
