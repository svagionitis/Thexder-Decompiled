# Git Commit Instructions

When writing a commit message, follow these strict repository rules:

## 1. Subject Line Format
- **Format:** `<Scope>: <verb in imperative> <summary>`
  - Scope is PascalCase identifying the affected component:
    - `Firehawk`: `src/firehawk` decompiled Firehawk engine
    - `Thexder`: `src/thexder` decompiled Thexder engine
    - `Platform`: `src/platform` SDL2/3 hardware adapter
    - `Video`: EGA/MCGA video rendering, palette, and scaling
    - `Audio`: OPL2 (AdLib/SB), MT-32 MIDI, and sound driver shims
    - `Input`: Scancode translation and gamepad integration
    - `Assets`: Level formats, SAR archive handling, save state
    - `Tools`: Asset extractors, format checkers, and Ghidra scripts
    - `Tests`: Headless simulation and unit tests
    - `Docs`: Decompilation notes, file formats, and architecture
    - `CMake`: Build scripts and compiler configuration
  - Use `/` for multi-component changes (e.g., `Firehawk/Audio:`, `Platform/Video:`).
  - Use brace expansion for sibling units (e.g., `Firehawk/{player,weapon}:`).
- **Verb:** Use lowercase imperative mood immediately after the colon (`fix`, `add`, `implement`, `decompile`, `refactor`, `document`, `align`).
- **Punctuation:** Do not end the subject line with a period.
- **Length:** Target <= 50 characters when possible; 72 characters is the absolute hard limit.

## 2. Body Structure
- **Blank Line:** Separate subject and body with exactly one blank line.
- **Wrapping:** Manually hard-wrap all body lines at 72 characters.
- **Summary Paragraph:** Start with a brief overview explaining the context, problem, and rationale (*what* and *why*, not raw code diffs).
- **Component Breakdown:** Group technical details by component bullet points:
  ```text
  - src/firehawk/player.c:
    - Decompile motion update routine matching GAME.EXE @ 1000:03A0.
    - Preserve 16-bit integer wrapping on jump velocities.
  ```
