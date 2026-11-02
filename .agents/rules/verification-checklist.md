# Verification Checklist (Run Before Outputting Code)

Before presenting any C/C++ code snippet or committing changes, internally verify against this checklist:
1. Did I ensure memory safety? (For C: explicit paired init/cleanup and zero memory leaks. For C++: RAII and zero raw `new`/`delete`).
2. Are headers using `#pragma once`? (Never use `#ifndef / #define` include guards).
3. Are header (`.h`) and implementation (`.c` / `.cpp`) files co-located in the same directory?
4. Do Core decompiled engines (`src/firehawk`, `src/thexder`) maintain **zero external dependencies**? (`#include <SDL...>`, `#include <GL...>`, `<windows.h>`, `<unistd.h>` are strictly banned in core engines).
5. Are all function names concise (strictly less than 30 characters)?
6. Does code compile and run cleanly on both **Linux** (GCC/Clang) and **Windows** (MSVC/Clang-CL)?
7. Are all variables explicitly initialized (`{0}` or `0` in C, `{}` in C++)?
8. Did I apply `[[nodiscard]]` (or `NODISCARD` macro in C) to functions returning status or safety-critical data?
9. Are all public APIs documented with full Doxygen templates (`/// @brief`, `@details`, `@param`, `@return`), including Ghidra address traceability (`@details Ghidra: binary @ seg:off`)?
10. Does this code comply with MISRA C:2012 / C++:2023 and SEI CERT (explicit casts, safe 16-bit to 32-bit promotions)?
11. Did I write a failing test first if fixing a bug (TDD)?
12. Does code compile with zero warnings under `-Wall -Wextra -pedantic` (`-Werror`) and `/W4` on MSVC?
13. Are all file paths mentioned in documentation and comments relative?
14. If there are diagrams involved, are both ASCII and Mermaid diagrams included?
15. Did I explicitly `#include <stdint.h>` in C files and `<cstdint>` (with `std::` prefix) in C++ files? Did I include `<stddef.h>` / `<cstddef>` for `size_t`?
16. Does the code adhere to **IWYU (Include-What-You-Use)**: directly including every header for symbols used, never relying on transitive/indirect includes?
17. Does binary file loading (`.SAR`, `.IX`, `SS*`, `SAVEGM.DAT`) use explicit little-endian helpers (`read_uint16_le`, `read_uint32_le`) instead of casting raw byte buffers directly to struct pointers?
18. Are fast-path functions (game loop, collision queries, homing laser raycasts) completely free of dynamic heap allocations?
19. Has all modified code been formatted with clang-format (`python scripts/verify_clang_format.py --files <modified_files>`)?
