# Implementation Plan: 1:1 Decompiled C Functions Module (SDL Only)

## 1. Overview & Architecture

This document defines the implementation specification for an authentic, 1:1 C module executing original 16-bit x86 Real Mode decompiled routines from `GAME.EXE` (`reference/raw_decompiled/GAME.EXE_decompiled.c`).

### Core Design Requirement: Zero Internal Coupling
The decompiled module is strictly isolated and **must not depend on any other engine header or module** in `src/firehawk/` (`game_loop.h`, `types.h`, `player.h`, etc.). It depends exclusively on:
1. Standard C library headers (`<stdint.h>`, `<stdbool.h>`, `<stddef.h>`, `<stdio.h>`, `<stdlib.h>`, `<string.h>`).
2. Modern host platform multimedia library: **SDL2** (`<SDL.h>`).

```
+-------------------------------------------------------------------------------+
|                 STANDALONE 1:1 DECOMPILED C MODULE ARCHITECTURE               |
|                                                                               |
|   Standard C Library (<stdint.h>, <stdio.h>, ...) & SDL2 (<SDL.h>)            |
|         │                                                                     |
|         ▼                                                                     |
|   src/firehawk/decomp/game_decomp.h                                           |
|      • Self-contained types: decomp_vector2d_t, decomp_player_t, etc.          |
|      • Emulated 64 KB DGROUP segment buffer & DGROUP_U8/U16/U32 macros         |
|      • Ghidra types: undefined1, undefined2, undefined4, code, SUB21          |
|      • Function prototypes: entry, FUN_1000_0016, FUN_1000_0188, ...          |
|         │                                                                     |
|         ▼                                                                     |
|   src/firehawk/decomp/game_decomp.c (Self-Contained Implementation)           |
|      • In-place 9-to-12 bit variable LZW stream decompressor (FUN_1000_252b)   |
|      • In-place binary stage SS* parser & spawner deserializer (FUN_1000_05ae) |
|      • In-place 12.4 fixed-point kinematics & crouch clearance (FUN_1000_0a12) |
|      • In-place homing laser raycast targeting & energy drain (FUN_1000_1042)  |
|      • In-place 64-slot entity pool allocator & AI update (FUN_1000_14c0/1688) |
|      • In-place swept AABB collision detection against tiles (FUN_1000_1890)   |
|      • In-place direct SDL video texture blitter & present (FUN_1000_1cb0)    |
|      • In-place savegame serialization & 16-bit additive CRC (FUN_1000_27e0)   |
+-------------------------------------------------------------------------------+
```

---

## 2. Scope of Self-Contained Functions

| Category | Ghidra Symbol | Address | Function Description |
| :--- | :--- | :--- | :--- |
| **Lifecycle** | `entry` | `1000:0000` | Program entry point & DGROUP base setup |
| **Lifecycle** | `FUN_1000_0016` | `1000:0016` | CRT initialization, BSS zeroing, SDL setup |
| **Lifecycle** | `FUN_1000_0188` | `1000:0188` | Master 60Hz frame simulation update step |
| **Lifecycle** | `FUN_1000_0256` | `1000:0256` | Game state transition & screen clear dispatch |
| **Resources** | `FUN_1000_24a0` | `1000:24a0` | Direct search of `RES*.IX` index table for chunk tag |
| **Resources** | `FUN_1000_252b` | `1000:252b` | 9-to-12 bit variable-width LZW decompressor |
| **Resources** | `FUN_1000_2608` | `1000:2608` | Bitstream reader extracting little-endian bits |
| **Stage Loader** | `FUN_1000_05ae` | `1000:05ae` | Load `SS*` binary stage format & spawners from disk |
| **Tilemap** | `FUN_1000_0621` | `1000:0621` | Viewport camera tracking & boundary clamping |
| **Kinematics** | `FUN_1000_0a12` | `1000:0a12` | 12.4 fixed-point kinematics, walk, jump, crouch |
| **Transformation** | `FUN_1000_0b84` | `1000:0b84` | Dual-mode Robot $\leftrightarrow$ Jet morph with clearance check |
| **Weapons** | `FUN_1000_1042` | `1000:1042` | Homing laser line-of-sight raycast & lock-on |
| **Weapons** | `FUN_1000_1218` | `1000:1218` | Spawn missile entity and set trajectory |
| **Weapons** | `FUN_1000_1350` | `1000:1350` | Barrier shield activation & 50-energy deduction |
| **Entities** | `FUN_1000_14c0` | `1000:14c0` | Iterate active 64-slot pool & dispatch enemy AI |
| **Entities** | `FUN_1000_1688` | `1000:1688` | Constant-time slot allocator & entity recycling |
| **Collision** | `FUN_1000_1890` | `1000:1890` | Swept AABB collision check against solid tiles |
| **Collision** | `FUN_1000_1a04` | `1000:1a04` | Inter-entity bounding box intersection test |
| **Renderer** | `FUN_1000_1cb0` | `1000:1cb0` | Blit 16x16 stage tiles to internal framebuffer |
| **Renderer** | `FUN_1000_1e20` | `1000:1e20` | Blit masked player/entity sprites with transparency |
| **Renderer** | `FUN_1000_2014` | `1000:2014` | Rasterize vector homing laser beam segments |
| **Audio** | `FUN_1000_2180` | `1000:2180` | Sound effect trigger & music event routing |
| **HUD** | `FUN_1000_22c8` | `1000:22c8` | Cockpit HUD gauges, energy bar, and score rendering |
| **SaveGame** | `FUN_1000_27ab` | `1000:27ab` | Save state coordination & DGROUP variable sync |
| **SaveGame** | `FUN_1000_27e0` | `1000:27e0` | Serialize save state & calculate 16-bit additive checksum |
| **SaveGame** | `FUN_1000_28a4` | `1000:28a4` | Deserialize save state & validate 16-bit checksum |

---

## 3. Work Breakdown & Implementation Steps

1. **Step 1: Rewrite `src/firehawk/decomp/game_decomp.h`:**
   - Eliminate all references to other `src/firehawk/` headers.
   - Define all self-contained types and prototypes.
2. **Step 2: Rewrite `src/firehawk/decomp/game_decomp.c`:**
   - Implement all decompiled routines in-place.
   - Interface directly with SDL (`<SDL.h>`).
3. **Step 3: Update `src/firehawk/CMakeLists.txt`:**
   - Link `SDL2::SDL2` directly to `firehawk_core`.
4. **Step 4: Update `tests/test_game_decomp.c`:**
   - Include only `decomp/game_decomp.h` and standard headers.
5. **Step 5: Verification:**
   - Build cleanly with zero compiler warnings.
   - Run full CTest suite, `verify_clang_format.py`, and `verify_iwyu_cstdint.py`.
