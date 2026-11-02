---
name: ghidra-decomp
description: >-
  Use this skill to guide reverse-engineering and decompiling 16-bit DOS x86 executables (MZ/COM) using Ghidra into clean, portable C (.c/.h) files.
---

# Ghidra 16-bit DOS Decompilation Workflow

This skill outlines the standard methodology for reverse-engineering 16-bit Real Mode x86 DOS binaries (`GAME.EXE`, `SIERRA.EXE`, `THEXDER.COM`, `MAIN`, `*.DRV`) with Ghidra and converting them into clean, portable C (`.h` / `.c`) code.

---

## 1. Ghidra Project Configuration for DOS Binaries

### A. Executable Types:
- **DOS MZ Executables (`GAME.EXE`, `SIERRA.EXE`, `MAIN`):**
  - Architecture: `x86:LE:16:Real Mode`
  - Compiler: `default` or `Borland C++ / Microsoft C`
  - Loader: Ghidra automatically parses the MZ header, initial CS:IP, SS:SP, and relocation table.
  - Typical Base Segment: `0x1000` (or `0x0000`).
- **COM Binaries (`THEXDER.COM`, `EXISTS.COM`, `GODIR.COM`):**
  - Architecture: `x86:LE:16:Real Mode`
  - Base Address: `0x1000:0x0100` (loaded at offset 0x100 in PSP).

---

## 2. Reverse-Engineering Pipeline

```
+-------------------------------------------------------------------------------+
|                      GHIDRA DECOMPILATION PIPELINE                            |
|                                                                               |
|   1. Import & Memory Map Setup                                                |
|      • Define Segments: CODE, DATA, DGROUP, CONST, BSS                        |
|      • Set DS / ES assumptions on functions                                   |
|         │                                                                     |
|         ▼                                                                     |
|   2. Identify Entry Point & Interrupts                                        |
|      • Trace start -> C runtime init (CRT) -> main()                          |
|      • Hook INT 21h (DOS file/memory), INT 10h (Video), INT 33h (Mouse)       |
|         │                                                                     |
|         ▼                                                                     |
|   3. Data Structure & Global Variable Recovery                                |
|      • Define structs in Ghidra Data Type Manager matching memory layouts     |
|      • Label entity arrays, stage buffers, sound cues, state flags            |
|         │                                                                     |
|         ▼                                                                     |
|   4. Function Decompilation to Clean C (.h / .c)                              |
|      • Clean up calling conventions (__cdecl / __pascal / register fastcall)  |
|      • Replace segment:offset far pointer arithmetic with linear C pointers   |
|      • Author .c / .h with full Doxygen and Ghidra address traceability       |
+-------------------------------------------------------------------------------+
```

---

## 3. Translation Patterns: 16-bit x86 to Modern C

1. **Register Calling Conventions:**
   - In 16-bit DOS C/ASM, functions often receive parameters in `AX`, `DX`, `BX` or stack.
   - Decompile into explicit C function signatures with named arguments:
     ```c
     // ASM: MOV AX, [x]; MOV DX, [y]; CALL draw_sprite
     void draw_sprite(int16_t x, int16_t y, uint8_t sprite_id);
     ```
2. **Segment:Offset Pointer Translation:**
   - In real-mode, far pointer `SEG:OFF` addresses linear memory `(SEG << 4) + OFF`.
   - In modern flat memory, represent resources using direct C pointers (`uint8_t*`) or array indexing.
3. **Integer Overflow & Truncation:**
   - Where 16-bit register arithmetic relied on 16-bit wraparound (e.g. `ADD AX, BX`), explicitly mask or use `uint16_t` in C:
     ```c
     uint16_t sum = (uint16_t)(a + b);
     ```
4. **DOS Interrupt Shims:**
   - Map DOS interrupts (`INT 21h AH=3Dh` open file) to modern filesystem abstraction reading from `assets/`.
   - Map Video interrupts (`INT 10h AH=00h` set video mode) to the Platform Adapter video scaler.

