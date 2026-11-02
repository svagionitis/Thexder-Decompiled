---
name: git-commit
description: >-
  Use this skill when composing, reviewing, or generating Git commit messages conforming to Conventional Commits and repository conventions.
---

# Git Commit Composition & Review

This skill governs the composition and review of Git commit messages to ensure repository history remains consistent, concise, and informative.

---

## 1. Commit Structure

```text
<Scope>: <verb in imperative> <summary>

<Summary paragraph explaining the context, problem, and rationale>

- src/firehawk/player.c:
  - Decompile motion update routine matching GAME.EXE @ 1000:03A0.
  - Preserve 16-bit integer wrapping on jump velocities.
```

---

## 2. Subject Line Scopes

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

---

## 3. Formatting Rules

1. **Imperative Verb:** `fix`, `add`, `implement`, `decompile`, `refactor`, `document`, `align`.
2. **Character Limits:** Target <= 50 chars for subject (hard max 72). Hard-wrap body at 72 chars.
3. **No Trailing Period:** Never end the subject line with a period.
4. **Relative Paths Only:** Never include absolute filesystem paths.
