#!/usr/bin/env python3
"""
verify_iwyu_cstdint.py - Automated verification for fixed-width integer inclusion and IWYU compliance.

Performs static analysis on C/C++ header (.h, .hpp) and source (.c, .cpp) files to verify:
1. Inclusion of <stdint.h> (for C) or <cstdint> (for C++) whenever fixed-width types are used.
2. Inclusion of <stdbool.h> (for C) when bool/true/false are used.
3. Inclusion of <stddef.h> (for C) or <cstddef> (for C++) when size_t/ptrdiff_t are used.
4. Header guards start with #pragma once.
"""

import argparse
import os
import re
import sys
from typing import List, Tuple

FIXED_WIDTH_TYPES = [
    "int8_t", "uint8_t",
    "int16_t", "uint16_t",
    "int32_t", "uint32_t",
    "int64_t", "uint64_t",
    "intptr_t", "uintptr_t",
    "intmax_t", "uintmax_t",
]

IGNORE_DIRS = {".git", ".cache", "build", "assets", "CMakeFiles"}


def is_c_file(path: str) -> bool:
    return path.endswith(".c") or path.endswith(".h")


def check_file(file_path: str, fix: bool = False) -> Tuple[bool, List[str]]:
    with open(file_path, "r", encoding="utf-8", errors="replace") as f:
        content = f.read()

    issues = []
    has_fixed_width = any(re.search(rf"\b{t}\b", content) for t in FIXED_WIDTH_TYPES)
    has_size_t = bool(re.search(r"\b(size_t|std::size_t)\b", content))
    has_bool = bool(re.search(r"\b(bool|true|false)\b", content))

    is_c = is_c_file(file_path)

    # Check for fixed-width header
    if has_fixed_width:
        if is_c:
            if "<stdint.h>" not in content and "<cstdint>" not in content:
                issues.append("Missing #include <stdint.h> for fixed-width integers")
        else:
            if "<cstdint>" not in content:
                issues.append("Missing #include <cstdint> for fixed-width integers")

    # Check for bool header in C
    if has_bool and is_c:
        if "<stdbool.h>" not in content:
            issues.append("Missing #include <stdbool.h> for bool")

    # Check for size_t header
    if has_size_t:
        if is_c:
            if "<stddef.h>" not in content and "<stdint.h>" not in content:
                issues.append("Missing #include <stddef.h> for size_t")
        else:
            if "<cstddef>" not in content and "<cstdint>" not in content:
                issues.append("Missing #include <cstddef> for std::size_t")

    # Check #pragma once in headers
    if file_path.endswith(".h") or file_path.endswith(".hpp"):
        lines = [line.strip() for line in content.splitlines() if line.strip() and not line.strip().startswith("//")]
        if not any("#pragma once" in line for line in lines[:5]):
            issues.append("Header missing #pragma once at top")

    if fix and issues:
        # Simple auto-fix insertion for headers
        new_includes = []
        if has_fixed_width and is_c and "<stdint.h>" not in content:
            new_includes.append("#include <stdint.h>\n")
        if has_bool and is_c and "<stdbool.h>" not in content:
            new_includes.append("#include <stdbool.h>\n")

        if new_includes:
            content = "".join(new_includes) + content
            with open(file_path, "w", encoding="utf-8") as f:
                f.write(content)
            issues = [i for i in issues if "stdint" not in i and "stdbool" not in i]

    return len(issues) == 0, issues


def main():
    parser = argparse.ArgumentParser(description="Verify IWYU and fixed-width headers.")
    parser.add_argument("--files", nargs="+", help="Specific files to check.")
    parser.add_argument("--fix-cstdint", action="store_true", help="Attempt to auto-insert missing headers.")
    parser.add_argument("paths", nargs="*", default=["src", "tools", "tests", "apps"], help="Directories to scan.")

    args = parser.parse_args()

    files_to_check = []
    targets = args.files if args.files else args.paths

    for target in targets:
        if os.path.isfile(target):
            files_to_check.append(target)
        elif os.path.isdir(target):
            for root, dirs, files in os.walk(target):
                dirs[:] = [d for d in dirs if d not in IGNORE_DIRS]
                for file in files:
                    if file.endswith((".c", ".h", ".cpp", ".hpp")):
                        files_to_check.append(os.path.join(root, file))

    if not files_to_check:
        print("verify_iwyu_cstdint: No files found to check.")
        return 0

    all_passed = True
    for file_path in files_to_check:
        passed, issues = check_file(file_path, fix=args.fix_cstdint)
        if not passed:
            all_passed = False
            print(f"FAILED: {file_path}")
            for issue in issues:
                print(f"  - {issue}")

    if not all_passed:
        print("\nverify_iwyu_cstdint FAILED.")
        sys.exit(1)

    print(f"verify_iwyu_cstdint: {len(files_to_check)} file(s) verified cleanly.")
    sys.exit(0)


if __name__ == "__main__":
    main()

