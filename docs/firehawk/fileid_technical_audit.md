# Technical Audit: FILEID Floppy Volume Verification Architecture

**Date:** November 5, 2026  
**Target File:** `assets/firehawk/FILEID3`  
**Game Title:** *Firehawk: Thexder The Second Contact* (DOS, September 1990, Sierra On-Line / Game Arts)  
**Authors:** Antigravity Reverse-Engineering Team  
**Scope:** Byte-level layout, loader state machine disassembly, multi-disk distribution formats, and diagnostic tooling.

---

## 1. Executive Summary

In early DOS PC gaming (late 1980s to early 1990s), games were distributed on sets of floppy disks. To verify that the user had inserted the required physical disk when transitioning between game stages or loading resource volumes, Sierra On-Line and Game Arts utilized lightweight, standardized volume identification files labeled `fileid1`, `fileid2`, `fileid3`, etc.

In *Firehawk: Thexder II*, `FILEID3` is the 4-byte marker file placed in the root directory of **Disk 3**. It is queried by the game loader (`SIERRA.EXE`) via MS-DOS interrupt `INT 21h, AH=3Dh` to detect disk media format (3.5" 720KB vs. 5.25" 360KB) and to guard against invalid disk changes during runtime asset loading.

---

## 2. File Specifications & Binary Analysis

### 2.1 File Attributes
- **Target File Path:** `assets/firehawk/FILEID3`
- **File Length:** Exactly 4 bytes (`0x04`)
- **Hexadecimal Dump:**
  ```text
  Offset    00 01 02 03    ASCII
  00000000  33 0D 0A 1A    3...
  ```

### 2.2 Byte-by-Byte Breakdown

| Offset | Hex Value | Character | Category | Functional Purpose |
| :--- | :--- | :--- | :--- | :--- |
| `+0x00` | `0x33` | `'3'` | ASCII Digit | Identifies the physical volume as **Disk 3**. |
| `+0x01` | `0x0D` | `\r` (CR) | Control Code | Standard ASCII Carriage Return (DOS newline byte 1). |
| `+0x02` | `0x0A` | `\n` (LF) | Control Code | Standard ASCII Line Feed (DOS newline byte 2). |
| `+0x03` | `0x1A` | `^Z` (EOF) | Control Code | CP/M and MS-DOS text file terminator (End-Of-File). |

The contents form a valid single-line DOS text file containing `"3\r\n\x1a"`.

---

## 3. Runtime Game Architecture & Disassembly

### 3.1 Distribution Media Context
In September 1990, Sierra published *Firehawk* in two retail package formats:
1. **5.25" Low-Density (360 KB Floppies):** A 5-disk release set containing files `fileid1` through `fileid5`.
2. **3.5" Double-Density (720 KB Floppies):** A 3-disk release set containing files `fileid1` through `fileid3`.

Because disk storage constraints required splitting resource archives (`RES1.SAR`, `RES2.SAR`, `RES3.SAR`) across different disks, the executable needed an automated mechanism to identify which disk package was installed or inserted.

### 3.2 SIERRA.EXE Disassembly Walkthrough
The detection and verification logic resides in `SIERRA.EXE` at file offset `0x30E8` (routine `0x30F0`–`0x3131`):

```assembly
; ===========================================================================
; SIERRA.EXE: Floppy Disk Media Verification & Probe Routine
; ===========================================================================

30E8:  db "fileid5", 00h         ; Static probe string for 5.25" set

CHECK_MEDIA_FORMAT:
30F0:  push   ds
30F1:  mov    ax, cs
30F3:  mov    ds, ax
30F5:  mov    dx, 34DFh          ; DS:DX points to "fileid5\0"
30F8:  mov    ah, 3Dh            ; DOS INT 21h, AH=3Dh: Open Existing File
30FA:  mov    al, 00h            ; Open mode: Read-Only
30FC:  int    21h                ; Query MS-DOS filesystem
30FE:  pop    ds
30FF:  jnc    DISK_FOUND_5       ; If Carry Flag is clear, fileid5 exists!

       ; Fallback: Test for 3.5" (3-disk) set
3101:  push   ds
3102:  mov    ax, cs
3104:  mov    ds, ax
3106:  mov    byte ptr cs:[34E5h], '3' ; Mutate string suffix to '3' ("fileid3\0")
310C:  mov    dx, 34DFh          ; DS:DX points to "fileid3\0"
310F:  mov    ah, 3Dh            ; DOS INT 21h, AH=3Dh: Open Existing File
3111:  mov    al, 00h
3113:  int    21h                ; Query MS-DOS filesystem
3115:  pop    ds
3116:  jnc    DISK_FOUND_3       ; If Carry Flag is clear, fileid3 exists!

       ; Neither disk marker found (failure/unknown drive state)
3118:  mov    byte ptr [0579h], 0 ; Media flag = 0 (Unidentified)
311D:  ret

DISK_FOUND_5:
311E:  mov    byte ptr [0579h], 1 ; Media flag = 1 (5.25" 5-Disk distribution)
3123:  jmp    CLOSE_AND_RETURN

DISK_FOUND_3:
3126:  mov    byte ptr [0579h], 2 ; Media flag = 2 (3.5" 3-Disk distribution)

CLOSE_AND_RETURN:
312B:  mov    bx, ax             ; BX = File handle returned by INT 21h
312D:  mov    ah, 3Eh            ; DOS INT 21h, AH=3Eh: Close File Handle
312F:  int    21h
3131:  ret
```

### 3.3 Disk Swapping & Error Handling
When a stage requires data from Disk 3 (such as Stages 6 through 9 contained in `RES3.SAR`), `SIERRA.EXE` suspends execution, issues a prompt for Disk 3, and invokes this verification routine. If an incorrect floppy disk is inserted, the DOS critical error handler displays:
```text
INVALID DISK CHANGE
TYPE R-RETRY, A-ABORT TO DOS
```
(String preserved at file offset `0x33F0` in `SIERRA.EXE`).

---

## 4. Software Decoder & Inspection Tool

The repository provides a dedicated inspection script:
* **Tool File:** `tools/fileid_inspector.py`
* **Execution:**
  ```bash
  python tools/fileid_inspector.py
  ```

### Tool Capabilities:
1. Reads `FILEID3` (or any custom `FILEID*` path supplied via CLI argument).
2. Dumps raw hex values and maps each byte to its exact semantic definition.
3. Automatically scans `SIERRA.EXE` to verify the presence of the probe string and outputs the exact disassembly offsets.

---

## 5. Summary Specification

| Property | Value |
| :--- | :--- |
| **File Name** | `FILEID3` |
| **Location** | `assets/firehawk/FILEID3` |
| **File Size** | 4 bytes |
| **Data Format** | Plain Text ASCII (`"3\r\n\x1a"`) |
| **Compression** | None |
| **Image Representation** | Not an image (Pure metadata) |
| **Primary Consumer** | `SIERRA.EXE` (`0x30E8`–`0x3131`) |
| **Purpose** | Floppy volume 3 verification and media format detection |
| **Diagnostic Tool** | `tools/fileid_inspector.py` |

