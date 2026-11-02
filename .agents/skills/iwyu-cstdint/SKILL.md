---
name: iwyu-cstdint
description: >-
  Use this skill to audit, verify, and enforce Include-What-You-Use (IWYU) principles, explicit <stdint.h> / <cstdint> inclusion, and standard type usage across C and C++ files.
---

# Include-What-You-Use & Fixed-Width Types Verification

This skill guides the auditing, verification, and automated enforcement of Include-What-You-Use (IWYU) principles and fixed-width integer header inclusion across the repository.

---

## 1. Rules Summary

- **In C files (`.c`, `.h`):**
  - Explicitly `#include <stdint.h>` whenever using `uint8_t`, `int16_t`, `uint32_t`, etc.
  - Explicitly `#include <stdbool.h>` when using `bool`, `true`, `false`.
  - Explicitly `#include <stddef.h>` when using `size_t` or `ptrdiff_t`.
- **In C++ files (`.cpp`, `.hpp`):**
  - Explicitly `#include <cstdint>` and qualify types with `std::` (e.g. `std::uint8_t`).
  - Explicitly `#include <cstddef>` for `std::size_t`.
- **Header Guards:**
  - Headers must start with `#pragma once`.
- **No Transitive Reliances:**
  - Every file must directly include headers for all types, macros, and functions it calls.

---

## 2. Command Reference

### Verify Specific Files:
```bash
python scripts/verify_iwyu_cstdint.py --files src/firehawk/game.h src/firehawk/game.c
```

### Automatically Insert Missing `<stdint.h>` / `<cstdint>`:
```bash
python scripts/verify_iwyu_cstdint.py --fix-cstdint --files src/firehawk/game.h src/firehawk/game.c
```
