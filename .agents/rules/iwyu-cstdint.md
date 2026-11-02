# Include-What-You-Use (IWYU) & Fixed-Width Integers Policy

## Overview
Every source file (`.c`, `.cpp`) and header file (`.h`, `.hpp`) must adhere to strict **Include-What-You-Use (IWYU)** principles and mandatory **`<stdint.h>` / `<cstdint>`** inclusion rules. Relying on transitive (indirect) includes is strictly forbidden because standard C and C++ library implementations across GCC, Clang, and MSVC differ significantly in their internal include graphs.

---

## 1. Fixed-Width Integer Types & Header Rules

1. **Mandatory Explicit Inclusion:**
   - **In C files (`.c`, `.h`):** Any file referencing `uint8_t`, `int8_t`, `uint16_t`, `int16_t`, `uint32_t`, `int32_t`, `uint64_t`, `int64_t`, `uintptr_t`, `intptr_t` must directly `#include <stdint.h>`.
   - **In C++ files (`.cpp`, `.hpp`):** Any file referencing fixed-width integers must explicitly `#include <cstdint>` and qualify types with `std::` (e.g. `std::uint8_t`, `std::int32_t`).
   - Never assume `<stdint.h>` or `<cstdint>` is provided transitively by system or third-party headers.

2. **Standard Boolean Inclusion (C files):**
   - In C files referencing `bool`, `true`, or `false`, explicitly `#include <stdbool.h>`.

3. **Size and Offset Types:**
   - In C: `#include <stddef.h>` for `size_t` and `ptrdiff_t`.
   - In C++: `#include <cstddef>` for `std::size_t` and `std::ptrdiff_t`.

4. **Prohibition of Non-Standard Types:**
   - Bare non-standard types (`BYTE`, `WORD`, `DWORD`, `u_int8_t`, `uint`) are strictly banned in new code. Use standard fixed-width types.

---

## 2. Include-What-You-Use (IWYU) Rules

1. **Direct Symbol Inclusion:**
   - If a translation unit or header references any symbol, type, struct, or macro from the standard library or another module, it must directly include the header defining that entity.
   - Example C mappings:
     - `memset`, `memcpy`, `memcmp`, `strlen` $\rightarrow$ `#include <string.h>`
     - `uint8_t`, `int16_t`, `uint32_t` $\rightarrow$ `#include <stdint.h>`
     - `bool`, `true`, `false` $\rightarrow$ `#include <stdbool.h>`
     - `size_t`, `NULL` $\rightarrow$ `#include <stddef.h>`
     - `printf`, `snprintf` $\rightarrow$ `#include <stdio.h>`
   - Example C++ mappings:
     - `std::unique_ptr`, `std::make_unique` $\rightarrow$ `#include <memory>`
     - `std::vector` $\rightarrow$ `#include <vector>`
     - `std::string_view` $\rightarrow$ `#include <string_view>`
     - `std::optional` $\rightarrow$ `#include <optional>`

2. **Transitive Inclusion Prohibition:**
   - An implementation file (`.c` or `.cpp`) must **not** assume its companion header (`.h`) supplies all required standard headers.

3. **Header Self-Containment:**
   - Every header file must compile cleanly on its own if included first in an empty translation unit.
   - Every header must use `#pragma once` as its first non-comment line.

4. **Forward Declarations:**
   - Prefer forward declarations of structs (`typedef struct player_state player_state_t;`) in headers when a type is only used as a pointer (`player_state_t*`).
   - The full definition header must be included in the implementation file.

---

## 3. Canonical Include Ordering

Headers must be organized into distinct, alphabetized groups separated by a single blank line:

1. **Associated Header:** Companion header (e.g. `#include "firehawk_player.h"`).
2. **Standard Library Headers:** (e.g. `#include <stdbool.h>`, `#include <stddef.h>`, `#include <stdint.h>`).
3. **Platform / Third-Party Headers:** (e.g. `#include <SDL3/SDL.h>`).
4. **Project Local Headers:** (e.g. `#include "firehawk_tilemap.h"`, `#include "firehawk_types.h"`).

```c
/// @file firehawk_player.c
#include "firehawk_player.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "firehawk_audio.h"
#include "firehawk_tilemap.h"
```

---

## 4. Verification

Run automated verification:
```bash
python scripts/verify_iwyu_cstdint.py --files <path/to/file.c> <path/to/file.h>
```
