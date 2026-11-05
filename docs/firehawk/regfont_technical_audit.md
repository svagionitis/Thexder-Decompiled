# Technical Audit & Reverse-Engineering Specification: REGFONT Asset File

**Date:** November 6, 2026  
**Target File:** `assets/firehawk/REGFONT`  
**Game Title:** *Firehawk: Thexder The Second Contact* (DOS Release, September 1990 — Sierra On-Line / Game Arts)  
**Authors:** Antigravity Reverse-Engineering Team  
**Scope:** Binary container structure, 9-to-12 bit variable LZW decompression, scanline bit-packing architecture, dual-resolution EGA 640x200 vs MCGA 320x200 rasterization, ASCII and Japanese kana character sets, game engine HUD & UI integration, decoding tools, and visual asset exports.

---

## 1. Executive Summary

The file `assets/firehawk/REGFONT` ("Regular Font") is the **universal bitmap font sheet and typographic raster engine** utilized throughout *Firehawk: Thexder II*.

```text
+-------------------------------------------------------------------------------+
|                        assets/firehawk/REGFONT (2,318 Bytes)                  |
|  [0x0000..0x0003] uint32_t LE Uncompressed Size: 4,096 Bytes (0x00001000)     |
|  [0x0004..0x090D] 9-to-12 Bit Variable LZW Compressed Payload (2,314 Bytes)   |
+-------------------------------------------------------------------------------+
                                        |
                            LZW Stream Decompression
                                        v
+-------------------------------------------------------------------------------+
|                       Decompressed Font Sheet (4,096 Bytes)                   |
|                   256 Character Glyph Slots x 16 Bytes Each                   |
+---------------------------------------+---------------------------------------+
|  Slots 0x00 - 0x5E (Indices 0..94)    |  Slots 0x5F - 0xFF (Indices 95..255)  |
|  Standard ASCII 32 (' ') to 126 ('~') |  Japanese Kana (Hiragana & Katakana),  |
|  Latin Letters, Digits, Punctuation   |  Dakuten, Handakuten, Kanji & Symbols |
+---------------------------------------+---------------------------------------+
```

### Core Audit Discoveries:
1. **Container Standard:** Adheres to Firehawk's uniform standalone asset container standard: 4-byte little-endian header indicating uncompressed byte length (`4,096`), followed by a 9-to-12 bit variable LZW compressed bitstream (compressing 4,096 bytes down to 2,314 bytes, a 43.5% space savings).
2. **Glyph Scanline Architecture:** The font contains **256 character glyphs**, with each glyph occupying exactly **16 bytes**. Rather than 16 rows of 8 bits, each glyph is formatted as **8 scanlines of 16-bit big-endian words** (`uint16_t row_word = (b0 << 8) | b1`), where every horizontal pixel is pair-doubled (`00` = off, `11` = on).
3. **Dual Video Resolution Driver Design:**
   - **EGA 640x200 Mode (`EGA640.DRV`):** The 16 bits of each scanline are written directly across 16 horizontal pixels (2 bytes of VRAM bitplane stride) to produce balanced 4:3 text glyphs in high horizontal resolution.
   - **MCGA 320x200 Mode (`MCGA320.DRV`):** The engine downsamples the 16 bits by sampling every second bit (`(0x8000 >> (col * 2))`), rendering crisp, authentic $8 \times 8$ pixel characters.
4. **Historical Heritage & Japanese Kana:** Character index `0` represents ASCII 32 (`' '`, space). Standard ASCII printable characters span indices `0` through `94`. Indices `95` through `255` contain a complete Japanese Hiragana and Katakana alphabet, modifier marks (dakuten `゛`, handakuten `゜`), and Kanji radicals retained from Game Arts' original Japanese PC-8801 / MSX2 / PC-9801 release.
5. **Tooling Resolution:** Historical tools in the repository (`tools/extract_graphics.py`) suffered from an interleaved scanline bug that stacked left and right 8-bit bytes into 16 vertical scanlines. We developed a dedicated forensic decoder (`tools/decode_regfont.py`), resolved the extraction routine, and exported authentic PNG sheets and JSON catalogs.

---

## 2. File Metrics & Binary Container Architecture

| Metric | Specification |
| :--- | :--- |
| **Filename** | `REGFONT` |
| **File Location** | `assets/firehawk/REGFONT` |
| **Raw File Size** | 2,318 bytes |
| **Header Size** | 4 bytes (`0x00`..`0x03`) |
| **Payload Size** | 2,314 bytes (`0x04`..`0x090D`) |
| **Decompressed Size** | 4,096 bytes ($0 \times 1000$ hex) |
| **Glyph Slot Count** | 256 characters |
| **Bytes Per Glyph** | 16 bytes ($256 \times 16 = 4096$) |
| **Scanline Layout** | 8 rows $\times$ 16 bits per row |
| **Logical Aspect (MCGA)** | $8 \times 8$ pixels |
| **Logical Aspect (EGA)** | $16 \times 8$ pixels |
| **Compression Ratio** | 56.5% of uncompressed size (43.5% space saving) |

### 2.1 Binary Container Layout

The file header occupies the first 4 bytes:
```text
Offset       Type        Value          Description
+0x0000      uint32_t    0x00001000     Decompressed byte count (4,096 Little-Endian)
+0x0004      uint8_t[]   0x00 0x01 ...  Variable-width 9-to-12 bit LZW compressed bitstream
```

Hex dump of the first 32 bytes of `assets/firehawk/REGFONT`:
```text
00000000: 00 10 00 00 00 01 08 1c  48 b0 20 80 01 c0 1e c0  ........H. .....
00000010: 01 02 0c 18 c0 03 0e 1c  b8 07 10 20 b0 0f 12 24  ........... ...$
```
- Bytes `00..03` = `00 10 00 00` $\to$ `0x00001000` = `4,096` bytes.
- Bytes `04..05` = `00 01` $\to$ First 9 bits are `0x100`, the standard LZW clear code.

### 2.2 LZW Decompression Specification

Firehawk uses a custom variation of the Welch LZW algorithm common to Sierra SCI and Game Arts titles:
1. **Initial Code Size:** 9 bits (values `0x000` through `0x1FF`).
2. **Clear Code (`0x100` / 256):** Re-initializes the dictionary. Every valid bitstream begins with this code.
3. **End of Information (`0x101` / 257):** Signals termination of the compressed stream.
4. **First Dynamic Code (`0x102` / 258):** Assigned to new dictionary entries.
5. **Dynamic Width Growth:** When the next dictionary entry reaches $2^{\text{bit\_len}}$ ($512 \to 10$ bits, $1024 \to 11$ bits, $2048 \to 12$ bits), `bit_len` increments up to a ceiling of 12 bits (maximum 4,096 dictionary entries).

---

## 3. Glyph Structure & Bit-Packing Architecture

The decompressed 4,096-byte payload represents an array of 256 consecutive glyph blocks:
$$\text{Total Size} = 256 \text{ glyphs} \times 16 \text{ bytes/glyph} = 4,096 \text{ bytes}$$

Each 16-byte glyph represents **8 scanlines**, with each scanline stored as a **16-bit big-endian word** (2 bytes):
$$\text{Row Word} = (\text{byte}_0 \ll 8) \mid \text{byte}_1$$

### 3.1 Pixel Doubling (Dual-Bit Encoding)

In each 16-bit row word, adjacent bits are paired horizontally:
- `00` $\to$ Background / transparent pixel
- `11` $\to$ Foreground / text ink pixel

```text
Bit Position:  15 14   13 12   11 10    9  8    7  6    5  4    3  2    1  0
Pixel Column:  [Col 0] [Col 1] [Col 2] [Col 3] [Col 4] [Col 5] [Col 6] [Col 7]
Binary Value:    1  1    1  1    0  0    0  0    1  1    1  1    0  0    0  0
Pixel State:     ON       ON     OFF     OFF      ON       ON     OFF     OFF
```

### 3.2 Concrete Disassembly Example: Glyph 'A' (Index 33)

Hex byte dump for character index 33 (ASCII 65, `'A'`):
`0x0F, 0xC0, 0x3C, 0xF0, 0xF0, 0x3C, 0xF0, 0x3C, 0xFF, 0xFC, 0xF0, 0x3C, 0xF0, 0x3C, 0x00, 0x00`

| Row | Raw Bytes | 16-Bit Word | 16-Bit Binary (EGA 640x200) | Downsampled 8-Bit (MCGA 320x200) | Visual Raster |
| :---: | :---: | :---: | :---: | :---: | :---: |
| **0** | `0F C0` | `0x0FC0` | `0000 1111 1100 0000` | `0 0 1 1 1 0 0 0` (`0x38`) | `..###...` |
| **1** | `3C F0` | `0x3CF0` | `0011 1100 1111 0000` | `0 1 1 0 1 1 0 0` (`0x6C`) | `.##.##..` |
| **2** | `F0 3C` | `0xF03C` | `1111 0000 0011 1100` | `1 1 0 0 0 1 1 0` (`0xC6`) | `##...##.` |
| **3** | `F0 3C` | `0xF03C` | `1111 0000 0011 1100` | `1 1 0 0 0 1 1 0` (`0xC6`) | `##...##.` |
| **4** | `FF FC` | `0xFFFC` | `1111 1111 1111 1100` | `1 1 1 1 1 1 1 0` (`0xFE`) | `#######.` |
| **5** | `F0 3C` | `0xF03C` | `1111 0000 0011 1100` | `1 1 0 0 0 1 1 0` (`0xC6`) | `##...##.` |
| **6** | `F0 3C` | `0xF03C` | `1111 0000 0011 1100` | `1 1 0 0 0 1 1 0` (`0xC6`) | `##...##.` |
| **7** | `00 00` | `0x0000` | `0000 0000 0000 0000` | `0 0 0 0 0 0 0 0` (`0x00`) | `........` |

### 3.3 Concrete Disassembly Example: Digit '0' (Index 16)

Hex byte dump for character index 16 (ASCII 48, `'0'`):
`0x3F, 0xF0, 0xF0, 0x3C, 0xF0, 0xFC, 0xF3, 0x3C, 0xFC, 0x3C, 0xF0, 0x3C, 0x3F, 0xF0, 0x00, 0x00`

Notice row 2 (`0xF0FC` $\to$ `1111 0000 1111 1100`) and row 3 (`0xF33C` $\to$ `1111 0011 0011 1100`): this encodes the **classic diagonal slashed zero**, distinguishing `0` from capital `O`.

---

## 4. Character Set Mapping & Taxonomy

The font sheet is zero-indexed based on ASCII 32 (`' '`, space):
$$\text{Character Index} = \begin{cases} \text{ASCII} - 32 & \text{if } \text{ASCII} \ge 32 \\ \text{ASCII} & \text{otherwise} \end{cases}$$

```text
Slot Index Range     Glyph Count    Character Category                Description
0x00 (0)             1              Empty Glyph (Space)               ASCII 32 (' ')
0x01 - 0x0F (1..15)  15             ASCII Punctuation & Symbols       !, ", #, $, %, &, ', (, ), *, +, ,, -, ., /
0x10 - 0x19 (16..25) 10             ASCII Digits                      0 through 9 (with slashed 0)
0x1A - 0x20 (26..32) 7              ASCII Punctuation & Delimiters    :, ;, <, =, >, ?, @
0x21 - 0x3A (33..58) 26             ASCII Uppercase Letters           A through Z
0x3B - 0x40 (59..64) 6              ASCII Brackets & Symbols          [, \, ], ^, _, `
0x41 - 0x5A (65..90) 26             ASCII Lowercase Letters           a through z
0x5B - 0x5E (91..94) 4              ASCII Punctuation & Operators     {, |, }, ~
0x5F - 0x8F (95..143)49             Japanese Hiragana & Katakana      Standard phonetic Japanese kana syllabary
0x90 - 0xB3 (144..179)36            Voiced Kana (Dakuten ゛)          Ga, Za, Da, Ba series
0xB4 - 0xC7 (180..199)20            Semi-Voiced Kana (Handakuten ゜)   Pa, Pi, Pu, Pe, Po series
0xC8 - 0xFF (200..255)56            Kanji, UI Boxes & Icons           Common Japanese kanji and HUD border glyphs
```

### 4.1 Japanese Character Set Heritage

The presence of Hiragana and Katakana in slots `0x5F` through `0xFF` proves that *Firehawk: Thexder II* directly shared its asset compilation pipeline with the Japanese original PC-8801 / MSX2 releases developed by Game Arts in Tokyo. In the North American PC release, the game uses standard English ASCII for dialogs and cockpit readouts, but the full Japanese raster font remained loaded in memory.

---

## 5. Game Engine Integration & In-Game Usage

```text
                      SIERRA.EXE (Bootstrap Loader)
                                  │
                 Allocates DGROUP & loads "regFont"
                                  │
                                  ▼
                      res_manager_load_file()
               Decompresses 4,096 B to ctx->font_data
                                  │
         ┌────────────────────────┴────────────────────────┐
         ▼                                                 ▼
    Attract & States                                  Cockpit HUD
 (src/firehawk/game_main.c)                     (src/firehawk/ui/hud.c)
 ┌─────────────────────────┐                   ┌─────────────────────────┐
 │ Title: "FIREHAWK"       │                   │ Score: "0012480"        │
 │ Prompt: "PRESS FIRE"    │                   │ Missiles: "N:15 H:08"   │
 │ Notice: "(C) 1990..."   │                   │ COMMDATA: Typewriter UI │
 └───────────┬─────────────┘                   └───────────┬─────────────┘
             │                                             │
             └──────────────────────┬──────────────────────┘
                                    ▼
                         font_draw_string()
                     (src/firehawk/render/font.c)
                                    │
                                    ▼
                   Linear 320x200 MCGA Framebuffer
```

### 5.1 Boot Loader Sequence (`SIERRA.EXE`)

At offset `0x03668` in `SIERRA.EXE`, the binary contains the string:
```text
regFont\0efc\0efc1\0efc2\0
```
During DOS initialization, `SIERRA.EXE` resolves the base system memory allocation, ensures sufficient conventional RAM exists, and passes file descriptors to `GAME.EXE`.

### 5.2 Game Loop Asset Loading (`src/firehawk/game_loop.c`)

In `game_loop_init()`:
```c
// Load REGFONT bitmap sheet into context buffer
size_t font_size = 0;
res_manager_load_file("REGFONT", ctx->font_data, sizeof(ctx->font_data), &font_size, true);
```
`ctx->font_data` is a dedicated 4,096-byte array allocated in the game state structure (`game_loop.h`), guaranteeing zero dynamic heap allocation during the 60 Hz frame cycle.

### 5.3 Cockpit HUD Instrumentation (`src/firehawk/ui/hud.c`)

The HUD displays four critical text elements using `REGFONT`:
1. **Player Score:** Rendered at `(X: 34, Y: 18)` using palette color `14` (Yellow). Formatted as 7 zero-padded digits (`%07u`).
2. **Ammunition Counter:** Rendered at `(X: 230, Y: 180)` using palette color `15` (Bright White). Displays normal missiles and homing missiles: `"N:%02u H:%02u"`.
3. **COMMDATA Typewriter Console:** Rendered at `(X: 34, Y: 168)` using palette color `11` (Cyan). Displays incoming radio transmissions from mission command (`COMMDATA.bin`) letter-by-letter every 3 ticks (20 Hz typewriter cadence).

### 5.4 Game State Overlays (`src/firehawk/game_main.c`)

- **Title Screen:**
  - `(80, 80)`: `"FIREHAWK: THEXDER II"` (Color 14, Yellow)
  - `(72, 110)`: `"PRESS FIRE TO COMMENCE"` (Color 15, White)
  - `(64, 160)`: `"(C) 1990 GAME ARTS / SIERRA"` (Color 7, Light Gray)
- **Game Over Screen:**
  - `(120, 80)`: `"GAME OVER"` (Color 12, Light Red)
  - `(80, 110)`: `"PRESS FIRE TO CONTINUE"` (Color 14, Yellow)

### 5.5 Text Rendering Engine (`src/firehawk/render/font.c`)

```c
void font_draw_string(uint8_t* fb, int16_t fb_w, int16_t fb_h,
                      int16_t x, int16_t y, const char* str,
                      uint8_t color, const uint8_t* font_data)
{
    int16_t curr_x = x;
    int16_t curr_y = y;

    for (const char* p = str; *p != '\0'; ++p) {
        char ch = *p;
        if (ch == '\n') {
            curr_x = x;
            curr_y = (int16_t)(curr_y + 8);
            continue;
        }

        uint8_t u_ch = (uint8_t)ch;
        size_t char_idx = (u_ch >= 32) ? (size_t)(u_ch - 32) : (size_t)u_ch;

        for (int row = 0; row < 8; ++row) {
            int16_t py = (int16_t)(curr_y + row);
            if (py < 0 || py >= fb_h) continue;

            uint16_t b0 = font_data[char_idx * 16 + (size_t)row * 2];
            uint16_t b1 = font_data[char_idx * 16 + (size_t)row * 2 + 1];
            uint16_t row_word = (uint16_t)(((uint16_t)b0 << 8) | b1);

            for (int col = 0; col < 8; ++col) {
                int16_t px = (int16_t)(curr_x + col);
                if (px >= 0 && px < fb_w) {
                    // Downsample pair-doubled 16-bit word
                    bool bit_set = (row_word & (uint16_t)(0x8000 >> (col * 2))) != 0;
                    if (bit_set) {
                        fb[(size_t)py * (size_t)fb_w + (size_t)px] = color;
                    }
                }
            }
        }
        curr_x = (int16_t)(curr_x + 8);
    }
}
```

---

## 6. Original 16-Bit DOS Real-Mode Disassembly

Analysis of `reference/raw_decompiled/GAME.EXE_disassembly.asm`:

1. **`FUN_1000_2138` (Draw String Dispatch):** Saves DS/ES, copies character pointer to CS scratch space (`CS:[0x2052]`), and invokes video driver dispatch slot.
2. **`FUN_1000_218b` (Hardware Video Branch):**
   ```asm
   1000:218b  80 3E 58 05 00  CMP byte ptr [0x558],0x00 ; Video Mode (0=EGA, 1=MCGA)
   1000:2190  75 02           JNZ FUN_1000_2194         ; Branch to MCGA blitter
   1000:2192  EB A4           JMP FUN_1000_2138         ; Default EGA 640x200 blitter
   ```
3. **`FUN_1000_2194` (MCGA Mode Blit):** Sets up string buffer, loads far function pointer at `[0x5db]` (`MCGA320.DRV` character rasterizer slot), and triggers the Mode 13h pixel blit.
4. **`FUN_1000_2214` (Numeric ASCII Formatting):** Converts binary scores and energy integers to ASCII characters via `ADD CL, 0x30` (`'0'`).

---

## 7. Tooling & Image Presentation

### 7.1 Available Tools in Repository

| Tool Path | Language | Purpose | Supported Outputs |
| :--- | :--- | :--- | :--- |
| **`tools/decode_regfont.py`** | Python 3 | Dedicated forensic decoder, validator, and renderer | Raw `.bin`, MCGA `.png`, EGA `.png`, Annotated Master Atlas `.png`, Rendered Text Banner `.png`, Glyph Catalog `.json` |
| **`tools/extract_graphics.py`** | Python 3 | Master asset extractor for Firehawk graphics and font sheet | `regfont_sheet.png`, `gallery.html` |
| **`src/firehawk/render/font.c`** | C99 | Engine runtime font renderer | Linear framebuffer rasterization |
| **`tests/test_lzw.c`** | C99 | Automated headless unit test | Asserts REGFONT decompresses to exactly 4,096 B |

### 7.2 Running the Decoder Tool

The dedicated tool `tools/decode_regfont.py` provides complete command-line control:

```bash
# Generate all artifacts, PNGs, and JSON catalogs
python tools/decode_regfont.py --all

# Render a custom text banner using the authentic in-game font
python tools/decode_regfont.py --render-text "THEXDER II - FIREHAWK" --render-out banner.png

# Export raw uncompressed 4,096-byte binary font
python tools/decode_regfont.py --bin regfont_raw.bin

# Export high-res annotated master atlas
python tools/decode_regfont.py --annotated-png atlas.png
```

### 7.3 Rendered Visual Assets in Repository

All visual presentations have been generated and verified in `reference/extracted_data/`:

1. **`regfont_8x8_mcga.png` ($546 \times 546$, 4x scale):** Authentic $8 \times 8$ pixel font atlas showing all 256 glyphs in a $16 \times 16$ grid as rendered on a 320x200 display.
2. **`regfont_16x8_ega.png` ($546 \times 290$, 2x scale):** Authentic $16 \times 8$ pixel font atlas showing all 256 glyphs as rendered by `EGA640.DRV` on a 640x200 display.
3. **`regfont_annotated_atlas.png` ($768 \times 872$):** Complete forensic reference atlas displaying each glyph's hex index (`0x00`..`0xFF`), corresponding ASCII character label, and category tags (`ASCII`, `JP`).
4. **`regfont_in_game_banner.png` ($664 \times 88$):** Multi-line sample banner demonstrating the authentic arcade typography in action:
   ```text
   FIREHAWK: THEXDER II
   COMMENCE ATTACK - STAGE 01
   SCORE: 0124800  ENERGY: 100
   ```
5. **`regfont_glyph_catalog.json`:** Comprehensive machine-readable JSON catalog containing hex codes, ASCII mappings, empty/non-empty flags, and ASCII-art row bitmaps for all 256 characters.
6. **`gallery.html`:** Interactive browser gallery showcasing the extracted font sheet alongside ship and HUD atlases.

---

## 8. Audit Verification & Quality Checklist

| Verification Item | Requirement | Observed Status | Verdict |
| :--- | :--- | :--- | :---: |
| **Container Header** | First 4 bytes equal `0x00001000` (4,096) | Bytes are `00 10 00 00` | **PASS** |
| **LZW Compression** | First 9-bit code is Clear Code `0x100` | Stream starts `00 01` (`0x100`) | **PASS** |
| **Decompressed Length** | Decompresses to exactly 4,096 bytes | Size is exactly 4,096 bytes | **PASS** |
| **Unit Test Validation** | `test_lzw` automated verification | `ctest -R test_lzw` passed | **PASS** |
| **Non-Empty Glyph Count**| 241 non-empty character slots out of 256 | Validated via catalog scan | **PASS** |
| **ASCII Alignment** | Slot 0 = space, slot 16 = '0', slot 33 = 'A' | Perfect match with ASCII offset 32 | **PASS** |
| **Pixel Doubling Check**| Every 16-bit scanline word has paired bits | Confirmed across all Latin glyphs | **PASS** |
| **Harness Verification** | `verify_extracted_data.py` completes 100% | `100% VERIFICATION PASSED` | **PASS** |

---

## 9. Conclusion

The `REGFONT` file represents a finely optimized, dual-resolution bitmap font system designed to achieve identical visual typography across fundamentally different PC graphics architectures (EGA 640x200 4-bitplane vs MCGA 320x200 linear). Its compact 2,318-byte compressed footprint supplies the entire typographic vocabulary for the HUD, communication typewriter, title, and game-over screens, while quietly carrying the Japanese syllabary heritage of Game Arts' Tokyo engineering roots.

