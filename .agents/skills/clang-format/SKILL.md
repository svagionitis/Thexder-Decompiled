---
name: clang-format
description: >-
  Use this skill to format C and C++ code in-place and verify code style compliance against .clang-format across all codebase libraries.
---

# Code Formatting & `clang-format` Verification

This skill guides the formatting and style verification of C and C++ source (`.c`, `.cpp`) and header (`.h`, `.hpp`) files, ensuring strict compliance with [`.clang-format`](../../../.clang-format).

---

## 1. Core Principles

1. **Mandatory Post-Implementation Formatting:**
   Every time an implementation, bug fix, or decompiled module is completed, modified files must be formatted using `clang-format -i` before presenting code or creating a commit.
2. **Zero Formatting Violations:**
   The verification check `clang-format --dry-run --Werror` or `python scripts/verify_clang_format.py` must return exit code 0.
3. **Deterministic Style:**
   Code style is anchored to WebKit with project customizations: 4-space indentation, 120 column limit, left pointer alignment, WebKit braces, and strict prevention of single-line control statements.

---

## 2. Command Reference

### Format Specific Files In-Place:
```bash
clang-format -i src/firehawk/game.h src/firehawk/game.c
```
Or with helper script:
```bash
python scripts/verify_clang_format.py --fix --files src/firehawk/game.h src/firehawk/game.c
```

### Dry-Run Verification:
```bash
clang-format --dry-run --Werror src/firehawk/game.h src/firehawk/game.c
```
Or with helper script:
```bash
python scripts/verify_clang_format.py --files src/firehawk/game.h src/firehawk/game.c
```

### Full Repository Format via CMake:
```bash
# In-place format
cmake --build build --target format

# Check only
cmake --build build --target check-format
```
