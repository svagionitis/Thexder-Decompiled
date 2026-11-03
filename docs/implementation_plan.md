# Firehawk (Thexder II) Decompilation Implementation Plan

## 1. Executive Summary

This document specifies the complete, actionable implementation plan to reverse-engineer and decompile **Firehawk: Thexder II** (DOS release in `assets/firehawk/`) using **Ghidra**, translating original 16-bit x86 Real Mode assembly into clean, portable ISO C99/C11 files (`.c` and `.h`).

The target outcome is a fully playable native game built with **CMake** that runs on modern operating systems (Windows, Linux, macOS) through an SDL-based platform abstraction layer, accompanied by comprehensive reverse-engineering documentation.

---

## 2. Implementation Roadmap

```
+-------------------------------------------------------------------------------+
|                       FIREHAWK DECOMPILATION ROADMAP                          |
|                                                                               |
|   [Phase 1: Tooling & Asset Unpacking]                                        |
|      • Ghidra project setup (x86:LE:16:Real Mode)                             |
|      • Build tools/sar_extractor to extract RES*.SAR / RES*.IX archives       |
|      • Scaffold CMake project structure                                       |
|         │                                                                     |
|         ▼                                                                     |
|   [Phase 2: Binary Disassembly & Memory Mapping]                              |
|      • Identify GAME.EXE & SIERRA.EXE entry points, CRT init, and main loop   |
|      • Map DGROUP data segments, player structs, and entity tables            |
|      • Reverse-engineer *.DRV driver dispatch interfaces                      |
|         │                                                                     |
|         ▼                                                                     |
|   [Phase 3: Platform Abstraction Layer (HAL)]                                 |
|      • SDL2/3 Video Scaler (MCGA 320x200 / EGA 640x200 -> Modern 4:3 Window)  |
|      • OPL2 (AdLib/SB) FM synth & MT-32 MIDI audio backend                    |
|      • Input translation: Scancodes to Keyboard / Gamepad                     |
|      • Virtual DOS 60Hz frame timer & asset filesystem shim                   |
|         │                                                                     |
|         ▼                                                                     |
|   [Phase 4: Core Subsystem Decompilation into C (.c / .h)]                    |
|      • 4.1: Game loop & state machine (Title -> Practice -> Mission)          |
|      • 4.2: Resource manager & stage loader (SS000 - SS120)                   |
|      • 4.3: TileMap, scrolling & swept AABB collision                         |
|      • 4.4: Player transformation (Robot <-> Jet), kinematics, crouch         |
|      • 4.5: Weapon system (Homing laser auto-targeting, missiles, shields)    |
|      • 4.6: Entity pool & enemy AI dispatch                                   |
|      • 4.7: Sprite renderer & blitter                                         |
|      • 4.8: Audio sequencer & music event triggers                            |
|      • 4.9: HUD & SaveGame (SAVEGM.DAT)                                       |
|         │                                                                     |
|         ▼                                                                     |
|   [Phase 5: Playable Integration & Verification]                              |
|      • Headless simulation tests (collision, weapons, saves)                  |
|      • Cross-verification with DOSBox frame captures & memory dumps           |
|      • Full playable campaign run (Stages 0 to 12)                            |
|         │                                                                     |
|         ▼                                                                     |
|   [Phase 6: Quality Gate & Documentation]                                     |
|      • Clang-format, IWYU, zero-warning compiler build                        |
|      • Complete Ghidra memory map and address index documentation             |
+-------------------------------------------------------------------------------+
```

```mermaid
flowchart TD
    P1["Phase 1: Tooling & SAR Unpacker<br/>(tools/sar_extractor, Ghidra Setup)"]
    P2["Phase 2: Ghidra Disassembly & Mapping<br/>(GAME.EXE entry, DGROUP, DRV tables)"]
    P3["Phase 3: Platform Adapter (HAL)<br/>(SDL Video Scaler, OPL2 Synth, 60Hz Timer)"]
    P4["Phase 4: Core Subsystem Decompilation<br/>(Main loop, Player, Weapons, AI, Levels in C)"]
    P5["Phase 5: Playable Integration & Tests<br/>(Headless CTest, DOSBox Parity)"]
    P6["Phase 6: Quality Gate & Full Campaign<br/>(Zero warnings, Clang-format, Stages 0-12)"]

    P1 --> P2
    P2 --> P3
    P3 --> P4
    P4 --> P5
    P5 --> P6
```

---

## 3. Detailed Phase Breakdown

### Phase 1: Tooling, Asset Unpacking & Infrastructure
> See detailed specification in [`phase1_tooling_and_infrastructure.md`](phase1_tooling_and_infrastructure.md).

- **Objective:** Establish the development environment, unpack game assets for inspection, and configure the CMake build system.
- **Tasks:**
  1. **Ghidra Project:**
     - Initialize a Ghidra project for `assets/firehawk/GAME.EXE` and `SIERRA.EXE`.
     - Set target architecture: `x86:LE:16:Real Mode`.
  2. **Asset Extraction Tool (`tools/sar_extractor.c`):**
     - Develop an offline CLI tool to parse `RES1.IX`, `RES2.IX`, `RES3.IX` and extract individual resource chunks from `RES*.SAR`.
     - Output unpacked graphics, palettes, and sound banks for verification.
  3. **Build System (`CMakeLists.txt`):**
     - Configure top-level CMake project targeting C99/C11 for core engines and C++17 for platform harness.
     - Add strict warning flags (`-Wall -Wextra -pedantic`, `/W4`).

### Phase 2: Binary Disassembly & Reverse-Engineering in Ghidra
> See detailed specification in [`phase2_binary_disassembly_and_re.md`](phase2_binary_disassembly_and_re.md) and reference artifacts in [`reference/`](../reference/).

- **Objective:** Map out the executable structure, entry points, interrupt vectors, and data segments.
- **Reference Corpus (`reference/`):**
  - Raw Ghidra/Rizin decompilations and 16-bit disassemblies in `reference/raw_decompiled/`.
  - Extracted multimedia assets, font sheets, and sprite atlases in `reference/extracted_data/images/`.
  - Level layouts, tile parameters, and enemy spawner records in `reference/extracted_data/stages/`.
  - In-game dialogues, mission communications, and error texts in `reference/extracted_data/strings/`.
  - Device driver dispatch tables and hardware hooks in `reference/extracted_data/drivers/`.
- **Tasks:**
  1. **Entry Point & CRT:**
     - Disassemble `GAME.EXE` start routine. Locate segment register setups (`DS = DGROUP`, `SS:SP`).
     - Trace startup sequence into `game_main()`.
  2. **Memory Map Construction:**
     - Define memory blocks:
       - `CODE` (Game logic, rendering, math)
       - `DATA` / `DGROUP` (Global variables, state flags, look-up tables)
       - `BSS` (Uninitialized entity pools, tile buffers, screen scratchpads)
  3. **DOS Intercepts & Driver Interfaces:**
     - Locate `INT 21h` calls (file open `AH=3Dh`, file read `AH=3Fh`, memory allocation `AH=48h`).
     - Analyze driver dispatch tables (`MCGA320.DRV`, `EGA640.DRV`, `SNDBLAST.DRV`, `MT32.DRV`).
  4. **Data Structure Extraction:**
     - Identify `player_state_t` layout in DGROUP.
     - Identify `entity_t` active table (enemies, projectiles, particles).
     - Identify `stage_header_t` and tile grid arrays.

### Phase 3: Platform Abstraction Layer (HAL) Development
> See detailed specification in [`phase3_platform_abstraction_layer.md`](phase3_platform_abstraction_layer.md).
- **Objective:** Build the modern host runtime in `src/platform/` to host the decompiled C engine.
- **Tasks:**
  1. **Virtual Framebuffer & Video Scaler:**
     - Allocate a linear 320x200 8-bit index buffer (or 640x200 EGA bitplane buffer).
     - Implement modern aspect-ratio preserving integer scaler using SDL2 or SDL3 texture streaming.
     - Implement palette conversion (16-color EGA / 256-color MCGA to 32-bit RGBA).
  2. **Audio Synthesis Backend:**
     - Implement OPL2 FM synthesis emulation for AdLib / Sound Blaster music and sound effects.
     - Implement MIDI message queue for Roland MT-32 output.
  3. **Input Translation:**
     - Map DOS keyboard scancodes (`IBMKBD.DRV`) to modern SDL key codes and gamepad buttons.
  4. **Virtual DOS Timer & Filesystem:**
     - Create a fixed 60 Hz frame simulation tick with delta accumulator.
     - Provide a case-insensitive file reader mapping DOS file requests to `assets/firehawk/`.

### Phase 4: Core Subsystem Decompilation into C (`.c` & `.h`)
> See detailed specification in [`phase4_core_subsystems_decompilation.md`](phase4_core_subsystems_decompilation.md).
- **Objective:** Decompile all game routines from Ghidra into clean, portable C code in `src/firehawk/`.
- **Subsystems to decompile:**
  1. **Main Loop & Game States (`game_main.c`, `game_loop.c`):**
     - Decompile state transitions: Title screen $\rightarrow$ Demo $\rightarrow$ Introduction $\rightarrow$ Stage Play $\rightarrow$ Stage Complete $\rightarrow$ Game Over.
  2. **Resource Manager (`res_manager.c`):**
     - C implementation of index searching (`RES*.IX`) and volume reading (`RES*.SAR`).
  3. **TileMap & Stage Loader (`stage_loader.c`, `tilemap.c`):**
     - Parse `SS000` through `SS120`. Load tile properties (solid, breakable, energy recharge, hazard).
     - Implement horizontal and vertical screen scrolling logic.
  4. **Player Kinematics & Transformation (`player.c`):**
     - Robot mode: Walking, jumping, gravity, crouching (to navigate 1-tile gaps).
     - Jet mode: Free flight kinematics, afterburner acceleration, momentum damping.
     - Transformation state machine: Transitions, bounding box morphing, animation timer.
  5. **Weapons & Defenses (`weapons.c`):**
     - Homing laser: Line-of-sight targeting raycasts, angle tracking, beam drawing, energy consumption.
     - Missile systems: Normal and homing missiles.
     - Energy shield: Damage absorption, barrier animation, timer countdown.
  6. **Entity Pool & Enemy AI (`entities.c`, `enemy_ai.c`):**
     - Manage fixed-size active entity pool.
     - Implement enemy behavior routines, projectile firing, and collision responses.
  7. **Collision Detection (`collision.c`):**
     - Swept AABB checks against tile grid and entity-to-entity hitboxes.
  8. **HUD & Save State (`hud.c`, `savegame.c`):**
     - Render score, energy gauge, shield gauge, and mission communication text (`COMMDATA`).
     - Parse and write `SAVEGM.DAT` with checksum validation.

### Phase 5: Verification, Playability & Quality Assurance
> See detailed specification in [`phase5_verification_playability_qa.md`](phase5_verification_playability_qa.md).

- **Objective:** Verify 100% functional, kinematic, and visual equivalence with the original DOS game.
- **Tasks:**
  1. **Headless Subsystem Unit & Regression Suite (`tests/`):**
     - Verify SAR unpacking and LZW decompression integrity on all production archives (`RES*.SAR`).
     - Test stage loading and tile attribute mapping across all stages (`SS000` through `SS120`).
     - Test robot and jet kinematics, jump arcs, gravity, and crouch navigation through 1-tile gaps.
     - Test homing laser raycasting, missile guidance, barrier shield defense, and collision sweeps.
     - Test dynamic entity pool lifecycle (64 slots) and enemy AI state machines.
     - Test `SAVEGM.DAT` binary serialization, checksum verification, and tamper detection.
  2. **Deterministic Replay & Golden Vector Harness:**
     - Implement headless input recording and replay runner (`.rec` format).
     - Verify frame-by-frame simulation state hashes (coordinates, energy, entities, score).
  3. **DOSBox Differential Behavioral Cross-Check:**
     - Extract DGROUP real-mode memory states and compare against modern engine state snapshots.
     - Diff 320x200 MCGA raw framebuffer indices against DOSBox-X video captures.
     - Validate OPL2 FM synthesis register writes against AdLib/SB I/O port logs.
  4. **Full Campaign Playability (Stages 0 to 12):**
     - Play through all 13 stages to verify boss encounters, triggers, and stage progression.
     - Verify COMMDATA typewriter mission text synchronization and audio cues.
     - Validate victory cinematic, game over transitions, and high-score table persistence.
  5. **Sanitizers & Zero-Allocation Assertion:**
     - Verify zero heap allocations (`malloc`/`free`) inside the 60 Hz simulation loop.
     - Execute under AddressSanitizer (ASan) and UndefinedBehaviorSanitizer (UBSan).

### Phase 6: Repository Quality Gate & Documentation
> See detailed specification in [`phase6_repository_quality_gate_documentation.md`](phase6_repository_quality_gate_documentation.md).

- **Objective:** Enforce code standards, formatting, compiler hardening, automated Git pre-commit gates, and document all reverse-engineering findings with complete Ghidra address traceability.
- **Tasks:**
  1. **Automated Clang-Format Style Enforcement:**
     - Configure and format all codebase files using `python scripts/verify_clang_format.py --fix`.
     - Provide CMake targets `format` and `check-format` for automated style maintenance.
  2. **CMake Git Hook for Clang-Format:**
     - Implement CMake-driven automated Git pre-commit hook installation into `.git/hooks/pre-commit`.
     - Filter staged C/C++ files incrementally via `git diff --cached` to reject style-violating commits with actionable remediation.
     - Add explicit CMake target `install-git-hooks` supporting standalone repositories, worktrees, and submodules.
  3. **IWYU & Fixed-Width Integer Types:**
     - Audit and enforce Include-What-You-Use with mandatory `<stdint.h>`, `<stdbool.h>`, `<stddef.h>`, and `<cstdint>`.
     - Enforce `#pragma once` header guards and prohibit unstandardized raw primitive types across all binary data structures.
  4. **Strict Compiler Warning Hardening:**
     - Guarantee zero compiler warnings under `/W4 /WX /permissive- /utf-8` on MSVC and `-Wall -Wextra -pedantic -Werror -Wconversion -Wshadow` on GCC/Clang.
  5. **Doxygen Provenance Standards & Reverse-Engineering Traceability:**
     - Annotate all decompiled functions, structures, and global variables with standardized triple-slash (`///`) Doxygen blocks.
     - Maintain strict Ghidra provenance tagging (`@details Ghidra: GAME.EXE @ segment:offset (symbol)`).
  6. **Exhaustive Function-by-Function Ghidra Address Index:**
     - Maintain full inventory in `docs/phase6_repository_quality_gate_documentation.md` and `docs/firehawk/decompilation_plan.md` cross-referencing 47+ decompiled functions, 10 DGROUP tables, and 10 driver dispatch vectors to original 16-bit Real Mode addresses.

---

## 4. Key Subsystem Milestones & Deliverables

| Milestone | Target Deliverable | Verification Gate |
| :--- | :--- | :--- |
| **M1: Asset Tool** | `tools/sar_extractor` extracts all `.SAR` archives | All entries match `.IX` sizes |
| **M2: HAL Scaffold** | SDL window displays test MCGA 320x200 color bar | Window opens, scales 4:3, clean shutdown |
| **M3: Stage Renderer** | Stage 1 (`SS010`) background tiles rendered & scrolled | Matches DOS screenshot exactly |
| **M4: Player Mechanics** | Robot walks, jumps, crouches, and transforms to Jet | Controls responsive, no collision tunneling |
| **M5: Combat Loop** | Laser targets enemies, energy drains, shield activates | Homing beam locks onto nearest enemy |
| **M6: Full Playable** | Complete Stage 1 through 12 playable end-to-end | Victory screen reachable without crash |

