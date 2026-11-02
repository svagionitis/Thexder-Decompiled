#!/usr/bin/env python3
"""
verify_clang_format.py - Automated verification and formatting for C and C++ source files.

Verifies that all modified or scanned .c, .h, .cpp, and .hpp files adhere to .clang-format.
"""

import argparse
import os
import subprocess
import sys
from typing import List

VALID_EXTENSIONS = {".c", ".h", ".cpp", ".hpp", ".cc", ".cxx"}
IGNORE_DIRS = {".git", ".cache", "build", "assets", "CMakeFiles"}


def collect_files(paths: List[str]) -> List[str]:
    files = []
    for path in paths:
        if os.path.isfile(path):
            ext = os.path.splitext(path)[1].lower()
            if ext in VALID_EXTENSIONS:
                files.append(os.path.normpath(path))
        elif os.path.isdir(path):
            for root, dirs, filenames in os.walk(path):
                dirs[:] = [d for d in dirs if d not in IGNORE_DIRS]
                for filename in filenames:
                    ext = os.path.splitext(filename)[1].lower()
                    if ext in VALID_EXTENSIONS:
                        files.append(os.path.normpath(os.path.join(root, filename)))
    return files


def run_clang_format(files: List[str], fix: bool = False) -> int:
    if not files:
        print("verify_clang_format: No matching source files to check.")
        return 0

    clang_format_bin = "clang-format"
    errors = 0

    for file_path in files:
        if fix:
            cmd = [clang_format_bin, "-i", file_path]
            res = subprocess.run(cmd, capture_output=True, text=True)
            if res.returncode != 0:
                print(f"Error formatting {file_path}: {res.stderr}")
                errors += 1
            else:
                print(f"Formatted: {file_path}")
        else:
            cmd = [clang_format_bin, "--dry-run", "--Werror", file_path]
            res = subprocess.run(cmd, capture_output=True, text=True)
            if res.returncode != 0:
                print(f"Style violation in {file_path}:\n{res.stderr}")
                errors += 1

    if errors > 0:
        if not fix:
            print(f"\nverify_clang_format FAILED: {errors} file(s) have formatting violations.")
            print("Run with --fix to apply formatting automatically.")
        return 1

    print(f"verify_clang_format: {len(files)} file(s) verified cleanly.")
    return 0


def main():
    parser = argparse.ArgumentParser(description="Verify or fix clang-format compliance.")
    parser.add_argument("--files", nargs="+", help="Specific files to check or format.")
    parser.add_argument("--fix", action="store_true", help="Format files in-place.")
    parser.add_argument("paths", nargs="*", default=["src", "tools", "tests"], help="Directories to scan.")

    args = parser.parse_args()

    targets = args.files if args.files else args.paths
    files = collect_files(targets)
    sys.exit(run_clang_format(files, fix=args.fix))


if __name__ == "__main__":
    main()

