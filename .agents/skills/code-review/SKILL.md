---
name: code-review
description: >-
  Use this skill to perform a dual-axis code review on diffs, evaluating safety standards compliance (MISRA/CERT/IWYU/clang-format) and functional specification integrity across all current and future codebase modules.
---

# Dual-Axis Code Review Workflow

This skill executes a systematic, dual-axis code review on any patch, commit range, pull request, or local working tree across all current and future modules in the repository.

---

## 1. Dual-Axis Review Model

```
+-------------------------------------------------------------------------------+
|                         DUAL-AXIS CODE REVIEW MODEL                           |
|                                                                               |
|   Diff / Working Tree (src/firehawk, src/thexder, src/platform, tools/*)      |
|         │                                                                     |
|         ├───► [Axis 1: Standards & Safety] ─────────────────────────┐         |
|         │       • MISRA C:2012 / C++:2023 & SEI CERT C/C++          │         |
|         │       • IWYU & <stdint.h> / <cstdint> compliance          │         |
|         │       • Code Formatting (clang-format -i / check-format)  │         |
|         │       • Core Isolation (Zero SDL/external deps in Core)   ▼         |
|         │       • Endian safety (explicit LE helpers, no bad casts) [Prioritized]
|         │                                                       [ Findings  ] |
|         └───► [Axis 2: Decompilation & Spec Integrity] ────────►[ Report    ] |
|                 • DOS 16-bit register/segment math equivalence      ▲         |
|                 • Transformation & kinematics stability (Swept AABB)│         |
|                 • Real-time & frame path safety (0-heap fast paths) │         |
|                 • Cross-platform portability (Linux & Win32)        ┘         |
+-------------------------------------------------------------------------------+
```

```mermaid
flowchart TD
    subgraph Input["Input Diff"]
        D["Git Commit / Branch / Working Tree Diff<br/>(src/firehawk, src/thexder, src/platform)"]
    end

    subgraph Axis1["Axis 1: Standards & Safety"]
        A1["MISRA C:2012 / C++:2023<br/>(No implicit signed/unsigned conversions)"]
        A2["SEI CERT Zero-Heap<br/>(No malloc/free on frame simulation ticks)"]
        A3["IWYU & &lt;stdint.h&gt; Policy<br/>(Direct includes, standard types)"]
        A4["Clang-Format Style Policy<br/>(WebKit, 4-space, 120 col limit)"]
        A5["Core Isolation Rule<br/>(Zero SDL / OS deps in decompiled core)"]
        A6["Endian & Alignment Safety<br/>(Explicit read_uint16_le, no struct casts)"]
    end

    subgraph Axis2["Axis 2: Decompilation & Mechanics"]
        B1["DOS Logic Equivalence<br/>(Traceable to Ghidra segment:offset)"]
        B2["Transformation State Machine<br/>(Robot vs Jet mode bounds & transitions)"]
        B3["Weapon & Laser Targeting<br/>(Homing beam tracing, energy drain)"]
        B4["TileMap & Level Geometry<br/>(Swept AABB vs tile grid, scrolling)"]
    end

    D --> Axis1
    D --> Axis2
    Axis1 --> Report["Prioritized Findings Report (P0 / P1 / P2)"]
    Axis2 --> Report
```

---

## 2. Review Protocol

When executing a code review:
1. **Analyze Diff Scope:** Review files by layer (Core C logic first, then Platform adapter, then CMake/tools).
2. **Axis 1 (Standards & Safety):** Verify `#include <stdint.h>`, `#pragma once`, zero heap in game ticks, endian safety, and formatting.
3. **Axis 2 (Decompilation & Logic):** Verify that decompiled C accurately reflects the original 16-bit assembly logic and game mechanics.
4. **Produce Report:** Group issues into:
   - **P0 (Blocker):** Memory corruption, aliasing violation, Core isolation violation, build failures.
   - **P1 (Important):** Missing IWYU headers, unhandled 16-bit integer wrap, missing Ghidra address comment.
   - **P2 (Polish):** Formatting discrepancy, comment readability, naming improvements.
