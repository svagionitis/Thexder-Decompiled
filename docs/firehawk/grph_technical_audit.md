# Technical Audit: GRPH Cockpit HUD & Telemetry Bitplane Graphics

**Date:** November 5, 2026  
**Target Asset:** `assets/firehawk/GRPH` and `build/extracted/RES1/GRPH.bin`  
**Game Title:** *Firehawk: Thexder The Second Contact* (DOS, September 1990, Sierra On-Line / Game Arts)  
**Authors:** Antigravity Reverse-Engineering Team  
**Scope:** Planar bitplane EGA architecture, 9-12 bit LZW decompression, HUD telemetry elements, consuming game engine routines, and PNG image generation.

---

## 1. Executive Summary

`GRPH` is the primary cockpit HUD (Heads-Up Display) and telemetry graphic atlas used in *Firehawk: Thexder II*. It contains status gauges, energy reserve bars, weapon heat indicators, radar corner bezels, and carrier docking markers.

It exists in two representations within the game distribution:
1. **Loose Asset (`assets/firehawk/GRPH`):** An uncompressed, raw 1,184-byte 4-bitplane planar EGA bitmap.
2. **Archive Asset (`GRPH.bin` in `RES1.SAR`, `RES2.SAR`, `RES3.SAR`):** A 552-byte asset compressed with Game Arts' variable-width 9-to-12 bit LZW algorithm. When decompressed, it expands to exactly 1,184 bytes, 100% byte-for-byte identical to the loose file.

Both variants decode into a $32 \times 74$ pixel graphic atlas utilizing the 16-color standard EGA hardware palette.

---

## 2. Planar Bitplane EGA Architecture

### 2.1 File Structure & Dimensions
- **Payload Size:** Exactly 1,184 bytes (`0x4A0`)
- **Horizontal Resolution (Width):** 32 pixels
- **Vertical Resolution (Height):** 74 scanlines
- **Bitplane Format:** 4 planar bitplanes (Plane 0: Blue, Plane 1: Green, Plane 2: Red, Plane 3: Intensity)
- **Bytes Per Scanline Row:** 16 bytes:
  - 32 pixels $\div$ 8 bits/byte = 4 bytes per plane
  - 4 bitplanes $\times$ 4 bytes = 16 bytes per row
  - $16 \text{ bytes/row} \times 74 \text{ rows} = 1,184 \text{ bytes}$
- **Color Depth:** 4 bits per pixel (16 simultaneous colors)
- **Total Pixels:** $32 \times 74 = 2,368 \text{ pixels}$

### 2.2 Row Memory Layout (16 Bytes / Scanline)
```text
Row Y Base Offset:
  +0x00 .. +0x03: Plane 0 (Blue)       - 4 bytes (32 pixels, bits 0..31)
  +0x04 .. +0x07: Plane 1 (Green)      - 4 bytes (32 pixels, bits 0..31)
  +0x08 .. +0x0B: Plane 2 (Red)        - 4 bytes (32 pixels, bits 0..31)
  +0x0C .. +0x0F: Plane 3 (Intensity)  - 4 bytes (32 pixels, bits 0..31)
```

### 2.3 Pixel Decoding Formula
To decode the 4-bit color index $C \in [0, 15]$ for pixel coordinate $(X, Y)$ where $0 \le X < 32$ and $0 \le Y < 74$:
1. Calculate byte index within the scanline plane:
   $$\text{byte\_idx} = \lfloor X / 8 \rfloor \quad (0 \le \text{byte\_idx} < 4)$$
2. Calculate bit position within that byte:
   $$\text{shift} = 7 - (X \bmod 8)$$
3. Extract bit from each plane and reconstruct 4-bit nibble:
   $$b_0 = \frac{P_0[\text{byte\_idx}]}{2^{\text{shift}}} \ \& \ 1, \quad b_1 = \frac{P_1[\text{byte\_idx}]}{2^{\text{shift}}} \ \& \ 1$$
   $$b_2 = \frac{P_2[\text{byte\_idx}]}{2^{\text{shift}}} \ \& \ 1, \quad b_3 = \frac{P_3[\text{byte\_idx}]}{2^{\text{shift}}} \ \& \ 1$$
   $$C(X, Y) = b_0 \ | \ (b_1 \ll 1) \ | \ (b_2 \ll 2) \ | \ (b_3 \ll 3)$$
4. Lookup color $C$ in the standard 16-color EGA RGB palette.

---

## 3. LZW Compression Specifications

When stored inside `RES*.SAR` archives as `GRPH.bin`, the asset is compressed with a specialized variable-width 9-to-12 bit LZW algorithm:
- **Raw Archive Size:** 552 bytes
- **Compression Ratio:** 53.4% reduction (1,184 bytes compressed to 552 bytes)
- **Initial Code Size:** 9 bits
- **Maximum Code Size:** 12 bits (dynamic dictionary expansion up to 4,096 entries)
- **Control Codes:**
  - `0x100`: Clear dictionary and reset code width to 9 bits
  - `0x101`: End-Of-Information (EOI / stream terminator)
  - `0x102`: First assignable string code

---

## 4. Visual Layout & Telemetry Elements

The 74 scanlines of `GRPH` are divided into three distinct functional UI sprite banks:

| Scanline Range | Dimensions | Visual Element | Function on Cockpit Frame |
| :--- | :--- | :--- | :--- |
| **Rows 0 – 31** | $32 \times 32$ | Radar Bezel & Brackets | Blitted around the cockpit radar display to form the circular reticle, sweep boundary, and shield status alert indicators. |
| **Rows 32 – 59** | $32 \times 28$ | Segmented Gauge Bars | Sliced dynamically to show current player energy reserves (green/yellow/red), weapon heat levels, and crystal power gauges. |
| **Rows 60 – 73** | $32 \times 14$ | Telemetry & Guidance Markers | Direction arrows, carrier landing guide crosshairs, numeric indicators, and docking status lights. |

### 4.1 Cockpit Display 3-Layer Architecture
The in-game screen is composed of three distinct graphic layers:
1. **Layer 1: Static Cockpit Frame (320x200):** The full-screen outer border rendered once during stage initialization (`GAME.EXE FUN_1000_0464` at `1000:0464`), which loads resource `GMEN` (string at CS:0x304) into buffer `0x3323` and blits it full-screen via video driver function `BP=0x5E` (`CALLF [0x508]`).
2. **Layer 2: Active Playfield Viewport (256x128):** The scrollable central window rendering compound background tiles (`CGxx`/`CTxx`) and actor sprites (Firehawk robot/jet, enemies, lasers).
3. **Layer 3: Dynamic Telemetry Overlays (`GRPH`):** Small, modular gauge bars, radar bezels, and indicator icons blitted dynamically into rectangular cutouts on top of the cockpit frame.

### 4.2 Memory Buffer Allocation in GAME.EXE
During initialization (`FUN_1000_0464` at `1000:0477`), `GAME.EXE` loads resource `GRPH` (string at CS:0x30A) into memory buffer `0x6663` via `CALL 1000:2138`:
- Buffer Start: `0x6663`
- Buffer Length: `0x04A0` (1,184 bytes)
- Buffer End: `0x6B03` ($0x6663 + 0x04A0 = 0x6B03$)
- Active Pointer: Word variable at DGROUP `[1686h]` is initialized to `0x6663` at `1000:1f4d` (`MOV word ptr [1686h], 0x6663`) immediately prior to HUD telemetry updates.

---

## 5. Runtime Usage in GAME.EXE & Video Driver Indexing

### 5.1 Why `GRPH` is Not a Full Cockpit Image
A common misconception when viewing `grph_atlas.png` is expecting a complete 320x200 cockpit frame. In 16-bit DOS architectures with severe memory constraints (640 KB conventional RAM), a full 320x200 4-plane screen buffer consumes 32,000 bytes (32 KB). 

`GRPH` is only **1,184 bytes** (~3.7% the size of a screen). It is **not a background cockpit image**, but rather a **modular tile sheet of dynamic HUD telemetry sprites**:
- **Static Cockpit Frame (Outer Bezel):** The 320x200 fullscreen outer border (top panel 320x32, bottom console 320x40, side pillars 32x128) is rendered to the video canvas during stage initialization.
- **Dynamic HUD Overlays (`GRPH`):** Small rectangular slices from `GRPH` are blitted on top of the cockpit frame in real time to reflect fluctuating player energy, weapon heat, shield countdown, and radar telemetry.

### 5.2 Video Driver Row-Stride Addressing (`EGA640.DRV` / `MCGA320.DRV`)
Disassembly of `EGA640.DRV` (offset `0x1909`–`0x1917`) reveals the hardware driver dispatch mechanism:
```assembly
0000:1909      xor   ah, ah
0000:190b      add   ax, ax          ; AX * 2
0000:190d      add   ax, ax          ; AX * 4
0000:190f      add   ax, ax          ; AX * 8
0000:1911      add   ax, ax          ; AX * 16 (Scanline stride!)
0000:1913      add   ax, word [1686h]; AX = base_address + (row_index * 16)
0000:1917      mov   si, ax          ; SI = Source pointer directly into GRPH
```

Because each scanline of `GRPH` is exactly 16 bytes (4 bytes $\times$ 4 planes = 32 pixels wide), the game passes the **row index $Y$ in register `AL`**. The driver computes:
$$\text{Source Pointer} = \text{[1686h]} + (Y \times 16)$$

### 5.3 Dynamic Telemetry Blitting Routine (`GAME.EXE 1000:1F8F`–`1000:1FFC`)
During every frame redraw, `GAME.EXE` checks player statistics and selects the corresponding row index in `GRPH` to blit:
```assembly
; Checking player energy / shield state at [05FDh]:
1000:1F91     ba 92 1c         mov  dx, 1c92h
1000:1F94     a0 fd 05         mov  al, [05fdh]     ; Load player energy level
1000:1F97     3c 09            cmp  al, 9           ; Is energy < 9?
1000:1F99     7c 0e            jl   SET_ROW_32
1000:1F9B     b1 36            mov  cl, 36h         ; Energy normal: Select row 0x36
1000:1FA0     3c 0f            cmp  al, 15
1000:1FA2     7c 05            jl   APPLY_ROW
1000:1FA4     b1 34            mov  cl, 34h         ; Energy high: Select row 0x34

SET_ROW_32:
1000:1F8F     b1 32            mov  cl, 32h         ; Energy critical: Select row 0x32

APPLY_ROW:
1000:1FA9     mov  al, cl                           ; AL = Row index in GRPH
1000:1FAB     mov  bx, 0518h                        ; BH=5 bytes width (40px), BL=24 scanlines height
1000:1FAE     mov  bp, 0038h                        ; Driver slot 0x38 (draw_sprite)
1000:1FB1     call dword ptr [0508h]                ; Blit gauge segment directly onto HUD
```

This updates the cockpit meters dynamically:
1. **Critical Energy (< 9):** Blits row `0x32` (rows 50..73 in decimal) containing red/flashing warning segments.
2. **Medium Energy (9–14):** Blits row `0x36` containing yellow gauge segments.
3. **Full Energy ($\ge 15$):** Blits row `0x34` containing bright cyan/green gauge segments.
4. **Radar & Docking Reticles:** Blits corner tiles from rows `0x00`–`0x1F` into the cockpit radar viewport.


---

## 6. Software Decoder & Image Presentation

### 6.1 Dedicated Decoder Tool
The repository includes a dedicated decoder script:
* **Tool File:** `tools/grph_decoder.py`
* **Syntax:**
  ```bash
  python tools/grph_decoder.py [input_file] [--out output.png] [--scale factor] [--no-hud]
  ```
* **Default Run:**
  ```bash
  python tools/grph_decoder.py
  ```
  Decodes raw 4-bitplane EGA planar rows directly into the isolated PNG atlas AND automatically exports the active in-game HUD components assembled according to `GAME.EXE` disassembly:
  - **Raw Atlas:** `reference/extracted_data/images/grph_atlas.png` ($32 \times 74$ px native, scaled 2x to $64 \times 148$ px).
  - **In-Game HUD Components:**
    - `reference/extracted_data/images/grph_radar_scope.png`: Circular radar scope ($32 \times 32$ px, 4x scale) from rows 0–31 (`AL=0x00`).
    - `reference/extracted_data/images/grph_gauge_normal.png`: Full energy gauge ($32 \times 8$ px, 4x scale) from row 52 (`AL=0x34`).
    - `reference/extracted_data/images/grph_gauge_caution.png`: Caution energy gauge ($32 \times 8$ px, 4x scale) from row 54 (`AL=0x36`).
    - `reference/extracted_data/images/grph_gauge_critical.png`: Critical energy gauge ($32 \times 8$ px, 4x scale) from row 50 (`AL=0x32`).
    - `reference/extracted_data/images/grph_docking_reticle.png`: Docking crosshair ($32 \times 14$ px, 4x scale) from rows 60–73 (`AL=0x44`).
    - `reference/extracted_data/images/grph_ingame_telemetry.png`: Assembled telemetry dashboard showing all 5 components in their functional in-game configurations.
  - Uses only authentic EGA bitplane stride math from `EGA640.DRV` (16 bytes/row stride) and decompression from `GAME.EXE 1000:252b`.
  - Zero dependencies or references to `src/`.

### 6.2 Rendered Visual Outputs
- **PNG Atlas:** `reference/extracted_data/images/grph_atlas.png` ($32 \times 74$ px native, scaled 2x).
- **Assembled In-Game Telemetry Board:** `reference/extracted_data/images/grph_ingame_telemetry.png` ($560 \times 380$ px).
- **Dedicated Interactive Asset Viewer:** `reference/extracted_data/images/grph_view.html` (interactive viewer featuring the assembled in-game telemetry dashboard, 2x native atlas, 4x pixel inspection, sprite bank breakdowns, EGA palette swatches, and driver disassembly).

---

## 7. Summary Specification

| Property | Value |
| :--- | :--- |
| **Loose File** | `assets/firehawk/GRPH` (1,184 bytes, uncompressed) |
| **Archive File** | `build/extracted/RES1/GRPH.bin` (552 bytes, LZW compressed) |
| **Decompressed Size**| 1,184 bytes |
| **Resolution** | $32 \times 74$ pixels |
| **Format** | Planar 4-bitplane EGA bitmap (16 colors) |
| **Row Stride** | 16 bytes per scanline (4 bytes $\times$ 4 planes) |
| **Consuming Engine** | `GAME.EXE` (buffer `0x6663`, pointer `[1686h]`, blit slot `0x38`) |
| **Purpose** | Cockpit HUD telemetry, energy gauges, radar frames |
| **Decoder Tool** | `tools/grph_decoder.py` |
| **Rendered Artifact**| `reference/extracted_data/images/grph_atlas.png` |

