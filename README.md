# Thexder & Firehawk (Thexder II) Decompilation

Reverse-engineering, decompilation, and modern native porting of Game Arts' classic sci-fi mecha shooters:
- **Thexder** (DOS 1987)
- **Firehawk: Thexder II** (DOS 1990)

The goal is to decompile the original 16-bit x86 DOS binaries into clean, portable ISO C99/C11 source code (`.c` and `.h`) and build a modern, cross-platform executable using **CMake** and a decoupled **SDL-based platform layer** for video, audio, and input.

---

## 1. Documentation Index

Detailed documentation is maintained in the [`docs/`](docs/) directory:

- [System Architecture](docs/architecture.md): Multi-tier architecture, Core/Platform separation, directory layout.
- [Master Decompilation Guide](docs/decompilation_guide.md): Reverse-engineering methodology with Ghidra, 16-bit to C translation patterns.
- [Firehawk Implementation Plan](docs/implementation_plan.md): Step-by-step phased roadmap for decompiling and porting Firehawk.
- [Phase 1 Implementation Plan](docs/phase1_tooling_and_infrastructure.md): Tooling automation (Ghidra, Cutter, DOSBox), asset extractor tool, and CMake setup.
- [Firehawk File Formats](docs/firehawk/file_formats.md): Structural breakdown of `GAME.EXE`, `RES*.SAR`, `RES*.IX`, `SS*` stage files, and drivers.
- [Firehawk Decompiled Functions & Drivers Audit](docs/firehawk/decompiled_functions_audit.md): Function-by-function comparison of original DOS binaries/drivers vs modern C99/C++17 implementations.
- [1:1 Decompiled Functions Plan](docs/firehawk/exact_decompiled_functions_plan.md): Specification for the standalone 1:1 decompiled C module (SDL only).

---

## 2. Repository Layout

```text
Thexder-Decompiled/
├── .agents/                 # Customized AI agent rules and skills
├── assets/                  # Original DOS game files
│   ├── firehawk/            # Firehawk (GAME.EXE, RES*.SAR, SS*, *.DRV)
│   └── thexder/             # Thexder (MAIN, THEXDER.COM, MAP*.BIN)
├── docs/                    # Architecture, decompilation guides, format specs
├── scripts/                 # Style, formatting, and IWYU verification scripts
├── src/                     # Decompiled C code and platform harness (to be populated)
├── tools/                   # Offline asset extraction and inspection utilities
└── tests/                   # Headless simulation and regression tests
```

---

## 3. Building (Windows & Linux)

Convenient cross-platform build scripts are provided at the root and in [`scripts/`](scripts/):

### Windows (PowerShell / Command Prompt)
```powershell
# Standard Release build:
.\build.bat
# or in PowerShell:
.\scripts\build.ps1

# Build and run automated tests:
.\scripts\build.ps1 -Test

# Clean rebuild, run tests, and extract all Firehawk assets:
.\scripts\build.ps1 -Clean -Test -ExtractAssets
```

### Linux / macOS (Bash)
```bash
# Standard Release build:
./build.sh
# or:
./scripts/build.sh

# Build and run automated tests:
./scripts/build.sh --test

# Clean rebuild, run tests, and extract all Firehawk assets:
./scripts/build.sh --clean --test --extract-assets
```

---

## 4. Tooling & Verification

The repository enforces strict code quality, formatting, and header hygiene:

```bash
# In-place code formatting:
python scripts/verify_clang_format.py --fix

# Check formatting (CI mode):
python scripts/verify_clang_format.py

# Verify IWYU and fixed-width integer types:
python scripts/verify_iwyu_cstdint.py
```

