# Phase 1 Implementation Plan: Tooling, Asset Unpacking & Infrastructure

## 1. Overview

Phase 1 establishes the complete reverse-engineering and build infrastructure for **Firehawk: Thexder II**:
1. Toolchain automation integrating **Ghidra**, **Cutter/Rizin**, and **DOSBox** without hardcoding machine-specific absolute paths into repository code.
2. An offline C asset extractor (`tools/sar_extractor.c`) to unpack Sierra Archive Resource files (`RES*.SAR` / `RES*.IX`).
3. Top-level modular **CMake** build system targeting C99/C11 for core decompiled logic and C++17 for platform harnesses with strict compiler warnings.
4. Automated headless regression tests (`tests/`) verifying asset decompression and extraction.

---

## 2. Phase 1 Architecture & Workflow

```
+-------------------------------------------------------------------------------+
|                       PHASE 1 INFRASTRUCTURE WORKFLOW                         |
|                                                                               |
|   1. Toolchain Configuration & Automation                                     |
|      • scripts/env_setup.ps1 / scripts/env_setup.sh                           |
|      • scripts/ghidra_import.ps1 (Headless Ghidra import: x86:LE:16:Real Mode)|
|      • scripts/dosbox_launch.ps1 (DOSBox reference runner with auto-mount)    |
|         │                                                                     |
|         ▼                                                                     |
|   2. CMake Build System Scaffolding                                           |
|      • CMakeLists.txt (C99/C11 + C++17, /W4, -Wall -Wextra -pedantic -Werror) |
|      • cmake/CompilerFlags.cmake (Hardening, warnings, sanitizers)            |
|      • Targets: sar_extractor, test_sar, format, check-format, verify-iwyu    |
|         │                                                                     |
|         ▼                                                                     |
|   3. Asset Extractor Tool (tools/sar_extractor.c)                             |
|      • Parse RES1.IX, RES2.IX, RES3.IX (16-byte index directory entries)      |
|      • Validate RES*.SAR $$$$$ signature and extract all resources to disk    |
|      • Endian-safe deserialization, 0 memory leaks, standard <stdint.h>       |
|         │                                                                     |
|         ▼                                                                     |
|   4. Automated Headless Verification (tests/test_sar_extractor.c)             |
|      • CTest target: verify extracted resource counts, checksums, and tags    |
+-------------------------------------------------------------------------------+
```

```mermaid
flowchart TD
    subgraph Toolchain["1. Toolchain Environment"]
        ENV["scripts/env_setup.ps1<br/>(GHIDRA_HOME, CUTTER_HOME, DOSBOX_HOME)"]
        GH["scripts/ghidra_import.ps1<br/>(analyzeHeadless.bat)"]
        DB["scripts/dosbox_launch.ps1<br/>(DOSBox Reference Exec)"]
        ENV --> GH & DB
    end

    subgraph BuildSystem["2. CMake Scaffolding"]
        CM["CMakeLists.txt<br/>(C99/C11 & C++17)"]
        CF["cmake/CompilerFlags.cmake<br/>(-Wall -Wextra -pedantic /W4)"]
        CM --> CF
    end

    subgraph AssetExtraction["3. Asset Unpacker (tools/sar_extractor)"]
        IX["assets/firehawk/RES*.IX<br/>(Directory Index)"]
        SAR["assets/firehawk/RES*.SAR<br/>($$$$$ Resource Archive)"]
        TOOL["tools/sar_extractor.c<br/>(Endian-safe C tool)"]
        OUT["build/extracted_assets/<br/>(Unpacked sprites, sounds, fonts)"]
        IX & SAR --> TOOL --> OUT
    end

    subgraph Verification["4. Headless CTest Gate"]
        TEST["tests/test_sar_extractor.c"]
        PASS["CTest 100% Pass<br/>(Tag verification, size check)"]
        OUT --> TEST --> PASS
    end

    Toolchain --> BuildSystem
    BuildSystem --> AssetExtraction
    AssetExtraction --> Verification
```

---

## 3. Work Breakdown Structure (WBS)

### Work Package 1.1: Toolchain Environment & Automation Scripts
- **Objective:** Enable automated headless Ghidra imports, fast disassembly inspections with Cutter/Rizin, and reproducible DOSBox runs without committing hardcoded host paths.
- **Deliverables:**
  1. `scripts/env_setup.ps1` / `scripts/env_setup.sh`:
     - Detects or accepts environment variables: `GHIDRA_HOME`, `CUTTER_HOME`, `DOSBOX_HOME`.
     - Falls back to user-configured default paths on local workstation.
  2. `scripts/ghidra_import.ps1`:
     - Invokes Ghidra's `support/analyzeHeadless.bat` to create/update `build/ghidra/firehawk`.
     - Imports `assets/firehawk/GAME.EXE` and `assets/firehawk/SIERRA.EXE`.
     - Sets language identifier to `x86:LE:16:Real Mode`.
     - Performs initial auto-analysis and exports disassembly / symbol summary.
  3. `scripts/dosbox_launch.ps1` & `tools/dosbox_firehawk.conf`:
     - Configures DOSBox with cycles, machine type (`svga_s3` / `ega`), and audio (`sb16` / `adlib`).
     - Auto-mounts `assets/firehawk` as drive `C:` and executes `GAME.EXE`.

### Work Package 1.2: CMake Build System Scaffolding
- **Objective:** Configure a production-grade, warning-free CMake build system.
- **Deliverables:**
  1. Root `CMakeLists.txt`:
     - Enforces C standard `C99` (or `C11`) for decompiled game code and tools.
     - Enforces C++ standard `C++17` for platform adapter.
     - Sets up subdirectories: `tools/`, `tests/`.
  2. `cmake/CompilerFlags.cmake`:
     - MSVC: `/W4`, `/WX` (warnings as errors), `/permissive-`, `/volatile:iso`.
     - GCC/Clang: `-Wall`, `-Wextra`, `-pedantic`, `-Werror`, `-fno-strict-aliasing`.
  3. Custom Targets:
     - `format`: Executes `python scripts/verify_clang_format.py --fix`.
     - `check-format`: Executes `python scripts/verify_clang_format.py`.
     - `verify-iwyu`: Executes `python scripts/verify_iwyu_cstdint.py`.

### Work Package 1.3: Asset Extractor Tool (`tools/sar_extractor.c`)
- **Objective:** Reverse-engineer and implement the Sierra Archive Resource unpacker in portable C.
- **Format Specification:**
  - **Index (`RES*.IX`):**
    - Exactly 18 bytes per entry:
      - Bytes `0x00 - 0x07`: Resource ASCII name (8 bytes, space-padded, e.g. `"KA00    "`).
      - Bytes `0x08 - 0x09`: Resource flags (16-bit uint16_t little-endian).
      - Bytes `0x0A - 0x0B`: Resource subtype (16-bit uint16_t little-endian).
      - Bytes `0x0C - 0x0D`: Data payload size in bytes (16-bit uint16_t little-endian).
      - Bytes `0x0E - 0x11`: Data payload offset in `.SAR` (32-bit uint32_t little-endian).
  - **Volume (`RES*.SAR`):**
    - Record header: 13 bytes immediately preceding payload offset:
      - Magic: `"$$$$$"` (`0x24 0x24 0x24 0x24 0x24`)
      - Metadata: 3 bytes
      - Tag name: 5 bytes (`KA00\0`)
    - Payload: `data_size` bytes at payload offset.
- **Deliverables:**
  - `tools/sar_extractor.c`:
    - Reads `.IX` and `.SAR` pairs.
    - Extracts all files into a specified directory (`build/extracted_assets/`).
    - Reports total extracted assets, tags, and sizes.
    - Zero dynamic memory leaks, strict `<stdint.h>` compliance.

### Work Package 1.4: Headless CTest Verification Suite
- **Objective:** Ensure automated regression testing for asset extraction.
- **Deliverables:**
  - `tests/test_sar_extractor.c`:
    - Invokes extraction on `assets/firehawk/RES1.IX` & `RES1.SAR`.
    - Asserts that known tags (`KA00`, `AD01`, `CG01`, `CT01`) are present and unpack cleanly.
    - Validates uncompressed byte counts and checksums.

---

## 4. Implementation Steps & Acceptance Gates

| Step | Action | Command / Output | Acceptance Gate |
| :--- | :--- | :--- | :--- |
| **1** | Write CMake build configuration | `cmake -B build` | Configures cleanly with no warnings |
| **2** | Write `scripts/env_setup.ps1` | `.\scripts\env_setup.ps1` | Validates Ghidra, Cutter, DOSBox paths |
| **3** | Implement `tools/sar_extractor.c` | `cmake --build build --target sar_extractor` | Builds with `/W4` or `-Werror` clean |
| **4** | Extract `assets/firehawk/RES*.SAR` | `build/tools/sar_extractor assets/firehawk build/assets` | All resource files extracted |
| **5** | Implement `tests/test_sar_extractor.c`| `ctest --test-dir build --output-on-failure` | 100% CTest assertions pass |
| **6** | Run Ghidra headless import | `.\scripts\ghidra_import.ps1` | `build/ghidra/firehawk.gpr` created |
| **7** | Quality Gate | `python scripts/verify_clang_format.py` & `verify_iwyu_cstdint.py` | Both return 0 errors |

