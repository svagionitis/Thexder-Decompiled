# Firehawk: Thexder II File Formats & Asset Architecture

## 1. Overview

The `assets/firehawk/` directory contains the complete original DOS release of **Firehawk: Thexder II** (September 1990, Sierra On-Line / Game Arts). This document details the binary structures, archive formats, stage files, and driver architectures discovered through reverse-engineering.

---

## 2. Inventory of Game Files

| Filename | Size (bytes) | Type | Purpose |
| :--- | :--- | :--- | :--- |
| `GAME.EXE` | 37,378 | 16-bit DOS MZ Executable | Core game engine, physics, state machine, weapons, AI, and stage renderer |
| `SIERRA.EXE` | 14,759 | 16-bit DOS MZ Executable | Loader, hardware initialization, configuration reader, and title sequencer |
| `DEMO.EXE` | 15,898 | 16-bit DOS MZ Executable | Self-running demo engine and attract mode |
| `INSTALL.EXE`| 16,959 | 16-bit DOS MZ Executable | DOS hardware setup utility (generates `RESOURCE.CFG`) |
| `RESOURCE.CFG`| 62 | Plain Text / ASCII Config | Driver selections: Video, Audio, Input drivers |
| `RES1.IX` | 828 | Binary Index Table | Index table for `RES1.SAR` archive |
| `RES1.SAR` | 49,800 | Binary Archive | Sierra / Game Arts Archive Resource volume 1 |
| `RES2.IX` | 2,142 | Binary Index Table | Index table for `RES2.SAR` archive |
| `RES2.SAR` | 114,574 | Binary Archive | Sierra / Game Arts Archive Resource volume 2 |
| `RES3.IX` | 2,052 | Binary Index Table | Index table for `RES3.SAR` archive |
| `RES3.SAR` | 100,668 | Binary Archive | Sierra / Game Arts Archive Resource volume 3 |
| `SS000` - `SS120` | ~10K - 43K ea. | Binary Stage Files | Stage map geometry, tile layouts, and enemy spawn tables for stages 0-12 |
| `EFC1` - `EFC4` | 1.9K - 28K ea. | Binary Sound Effects | Sound effect banks: FM synth (`EFC1`), Tandy (`EFC2`), 11kHz PCM (`EFC3`/`EFC4`) |
| `EN23.PK3` - `EN26.PK3`| 244B - 6.5KB ea. | 2-bit RLE Graphic Packs | Ending cutscene visual assets: Earth horizon, Moon/descent, "THE END" banner |
| `*.DRV` | ~800B - 9K ea. | Relocatable Driver Binaries | Video (`MCGA320`, `EGA640`), Audio (`ADL`, `SNDBLAST`, `MT32`), Keyboard, Joystick |
| `FILEID3` | 4 | Plain Text Volume Marker | Floppy Disk #3 volume identifier for multi-disk verification in `SIERRA.EXE` |
| `GRPH` | 1,184 | Planar EGA Bitmap | Cockpit HUD gauges, radar bezel, and status bar graphics ($32 \times 74$ px) |
| `SAVEGM.DAT` | 315 | Binary Save State | Player savegame file storing stage, score, energy, weapons, and flags |

---

## 3. Sierra Archive Resource (.SAR & .IX) Format

Firehawk uses a paired index/archive system for fast asset lookup:
- **Index File (`.IX`):** Contains fixed-length directory records mapping 8-character resource tags to offsets in the `.SAR` volume.
- **Archive File (`.SAR`):** Contains concatenated resource records prefixed with a signature header.

### 3.1 Index Record Layout (`RES*.IX`)
Each entry in the `.IX` file is exactly 18 bytes:
```text
Offset  Type      Field Name     Description
+0x00   char[8]   tag            Resource identifier (e.g., "KA00    ", "AD01    ", "CG01    ")
+0x08   uint16_t  flags          Resource flags / type (e.g., 0x7000)
+0x0A   uint16_t  subtype        Resource subtype / loader target (e.g., 0x0300, 0x0100, 0x1080)
+0x0C   uint16_t  data_size      Data payload length in bytes (little-endian)
+0x0E   uint32_t  sar_offset     Byte offset of data payload in the companion .SAR file (little-endian)
```

### 3.2 Archive Record Layout (`RES*.SAR`)
Each resource record in the `.SAR` volume is prefixed with a 13-byte header immediately preceding `sar_offset`:
```text
Offset             Type      Field Name     Description
sar_offset - 13    char[5]   magic          "$$$$$" (0x24 0x24 0x24 0x24 0x24)
sar_offset - 8     uint8_t[3]flags          Record header metadata
sar_offset - 5     char[5]   tag_name       Null-terminated resource tag (e.g. "KA00\0")
sar_offset + 0     uint8_t[] data           Resource payload (data_size bytes)
```

---

## 4. Stage Files (`SS000` to `SS120`)

Stage files contain the level layout and entity descriptors:
- **`SS000`:** Introductory / practice area.
- **`SS010`, `SS011`:** Stage 1 parts 1 & 2.
- **`SS020`, `SS021`:** Stage 2 parts 1 & 2.
- ...
- **`SS120`:** Stage 12 (Final boss encounter).

Each stage file contains:
1. **Stage Header:** Map width, height, background tile bank index, music track ID.
2. **Tile Grid Data:** Array of tile IDs defining solid rock, breakable barriers, doors, energy recharge pads, and hazards.
3. **Enemy Spawner Table:** Initial coordinates, spawn triggers, enemy class IDs, movement paths, and item drop parameters.

---

## 5. Driver Interface Architecture (`*.DRV`)

Drivers in Firehawk are 16-bit relocatable binary drivers dynamically loaded by `SIERRA.EXE` and `GAME.EXE`:
- **Video Drivers (`EGA640.DRV`, `MCGA320.DRV`):**
  - Exports a standard dispatch table at offset `0x0000` or `0x0004`:
    - `init_video()`: Set hardware mode (EGA 640x200 or MCGA 320x200).
    - `set_palette(palette_ptr)`: Load 16 or 256 color palette.
    - `draw_sprite(x, y, sprite_ptr)`: Blit masked sprite to video memory.
    - `flip_page()`: Double buffer swap or vertical retrace sync.
- **Audio Drivers (`ADL.DRV`, `SNDBLAST.DRV`, `MT32.DRV`):**
  - `init_audio()`: Configure OPL2 FM chips or send MT-32 SysEx init messages.
  - `play_sound(sound_id)`: Trigger SFX.
  - `play_music(track_id)`: Start background music sequencer.
  - `stop_audio()`: Silence all channels.

In our decompilation, rather than executing raw 16-bit driver binaries, we map these driver interfaces directly to modern native implementations in `src/platform/`!

---

## 6. Sound Effect Banks (`EFC1` to `EFC4`)

Contrary to early assumptions that `EFC` files stored visual animation sprites, reverse engineering of `GAME.EXE`, `INSTALL.EXE`, and the audio drivers reveals that `EFC` stands for **Effects (Sound Effects)**. They provide the complete library of in-game sound effects across all supported audio hardware profiles.

### 6.1 Container Structure
All four `EFC` files share the standard standalone Firehawk compressed asset format:
1. **Header (4 bytes):** Little-endian 32-bit unsigned integer representing the uncompressed (decompressed) payload byte length.
2. **Payload (Offset 4+):** Variable-width 9-to-12 bit LZW-compressed stream starting with clear code `0x100`.

### 6.2 Decompressed Master Index Table
Immediately upon decompression, the payload starts with an 18-byte index table defining 9 sound effect sections:
```text
Offset    Type        Field Name       Description
+0x00     uint16_t    sec_offsets[9]   Monotonically increasing relative offsets to Sections 0..8
```
The byte length of Section `i` is `sec_offsets[i+1] - sec_offsets[i]` (with `sec_offsets[9]` equal to the total decompressed length).

### 6.3 Hardware Target Profiles
| File | Raw Size | Decompressed Size | Target Sound Hardware | Format Type |
| :--- | :--- | :--- | :--- | :--- |
| `EFC1` | 1,979 B | 2,945 B | AdLib / Sound Blaster FM (`ADL.DRV`), Roland MT-32 (`MT32.DRV`) | Compiled MIDI / FM Synthesizer Bytecode |
| `EFC2` | 1,995 B | 2,808 B | Tandy 1000 3-Voice (`TANDY.DRV`), PC Speaker (`STD.DRV`) | Tandy 3-Voice / Square Wave Bytecode |
| `EFC3` | 22,976 B | 38,168 B | Sound Blaster DSP DAC (`SNDBLAST.DRV`) (Low/Compact Memory) | 11,000 Hz, 8-bit Unsigned Mono PCM Audio |
| `EFC4` | 28,090 B | 51,792 B | Sound Blaster DSP DAC (`SNDBLAST.DRV`) (Standard/Full Memory) | 11,000 Hz, 8-bit Unsigned Mono PCM Audio (Extended Tails) |

### 6.4 Sound Effect Mapping (Sections 0 to 8)
1. **Section 0 (`SFX_0`):** Primary Laser Fire
2. **Section 1 (`SFX_1`):** Secondary Laser Fire / Alternate Beam
3. **Section 2 (`SFX_2`):** Large Explosion / Boss Destruction (EFC4 includes a long 1.64s reverb tail)
4. **Section 3 (`SFX_3`):** Missile Launch / Rocket Thrust
5. **Section 4 (`SFX_4`):** Force Field / Shield Activation
6. **Section 5 (`SFX_5`):** Standard Enemy Explosion / Impact Damage
7. **Section 6 (`SFX_6`):** Energy Recharge / Power-up Acquired
8. **Section 7 (`SFX_7`):** Robot-to-Jet / Jet-to-Robot Transformation
9. **Section 8 (`SFX_8`):** Barrier Warning / Hit Clang

### 6.5 Extraction Tool
The repository includes a dedicated decoding utility:
```bash
python tools/efc_extractor.py
```
This utility decompresses `EFC1-EFC4`, exports all PCM audio into playable standard `.wav` files at 11,000 Hz, generates waveform diagrams (`.png`), and disassembles the synthesizer sequencer tracks into structured JSON.

---

## 7. Ending Cinematic Graphic Packs (`EN2*.PK3`)

The files `EN23.PK3`, `EN24.PK3`, and `EN26.PK3` in `assets/firehawk/` are standalone compressed graphic archives containing visual artwork for the **Ending Cinematic Cutscene (Scene 2: Atmospheric Re-entry)** and final **"THE END"** credit sequence.

### 7.1 Compression Algorithm: 2-Bit Opcode Run-Length Encoding (RLE)

Unlike the SAR archives (which use 9-to-12 bit variable-width LZW compression), the `PK3` format utilizes a specialized byte-stream Run-Length Encoding (RLE) optimized for EGA bitplane graphics with large contiguous runs of transparent pixels (`0x00`) and opaque solid planes (`0xFF`).

Reverse-engineered directly from `DEMO.EXE` (routine `FUN_1000_088b`):

Each command begins with an 8-bit opcode byte `B`:
- **Bits [5:0] (Run Length):** `count = (B & 0x3F) + 1` (integer run count from 1 to 64 bytes).
- **Bits [7:6] (Mode Select):** `mode = (B >> 6) & 3`

| Mode (`B >> 6`) | Opcode Range | Semantics | Payload Bytes Followed | Output Decompression Action |
| :--- | :--- | :--- | :--- | :--- |
| `00b` | `0x00` - `0x3F` | Zero Fill | None | Append `count` bytes of `0x00` to output buffer |
| `01b` | `0x40` - `0x7F` | Solid Fill | None | Append `count` bytes of `0xFF` to output buffer |
| `10b` | `0x80` - `0xBF` | Byte Repeat / EOS | 1 byte `V` (if `count > 1`) | If `B == 0x80` (`count == 1`): **End-of-Stream (EOS)** terminator.<br/>Else: Read byte `V`, append `count` copies of `V` |
| `11b` | `0xC0` - `0xFF` | Literal Run | `count` bytes | Copy next `count` raw bytes directly from stream |

Every valid `.PK3` stream terminates with opcode `0x80`.

### 7.2 File Inventory & Visual Geometry

| File | Compressed Size | Decompressed Size | Pixel Dimensions | Bitplanes | Screen Position `(X, Y)` | Description |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| `EN23.PK3` | 6,591 B | 17,160 B | 528 x 65 | 4 planar (EGA) | `(80, 80)` | Earth curvature / planet horizon during atmospheric re-entry |
| `EN24.PK3` | 1,764 B | 7,506 B | 216 x 84 | 4 planar + 2 planar | `(184, 25)` | Celestial sphere (Moon) and Firehawk jet re-entry burn tail |
| `EN26.PK3` | 244 B | 370 B | 296 x 10 | 1-bit monochrome | `(168, 157)` | "THE END" typography banner centered on screen |

#### `EN24.PK3` Structure Details
`EN24.PK3` contains two vertically adjacent segments blitted consecutively:
1. **Part 1 (Moon & Upper Jet):** `27 bytes * 55 lines * 4 planes = 5,940 bytes` (occupies `Y = 25 .. 79`, `X = 184 .. 399`).
2. **Part 2 (Atmospheric Flame Tail):** `27 bytes * 29 lines * 2 planes = 1,566 bytes` (occupies `Y = 80 .. 108`, `X = 184 .. 399`).
`5,940 + 1,566 = 7,506 bytes`.

### 7.3 Usage in the Game Architecture

In `DEMO.EXE` (routines `1000:0e26`..`1000:10c4`), these files are dynamically loaded and rendered during the final attract sequence and ending credits:
1. **Palette and Display Setup:** `DEMO.EXE` queries video mode variable `[0x558]`. If EGA/VGA planar mode is active, the driver blits planes directly to `0xA000:DI`; if MCGA packed mode is active, `FUN_1000_1c44` converts the bitplane data into 4-bit packed nibbles via a lookup table at `CS:0x1c24`.
2. **Layering Sequence:**
   - Background sky/space canvas cleared.
   - `EN24.PK3` (Moon and Firehawk descent) blitted at `(X=184, Y=25)`.
   - `EN23.PK3` (Earth horizon) layered on top at `(X=80, Y=80)`.
   - Story narration rolls across screen ("CAUGHT IN THE EARTH'S GRAVITY, THE FIREHAWK RE-ENTERED THE ATMOSPHERE...").
   - `EN26.PK3` ("THE END") blitted at `(X=168, Y=157)`.
   - Staff credits roll (`KEN WILLIAMS`, `MITSUHIRO MAZDA`, `OSAMU HARADA`, etc.).

### 7.4 Extraction Tool

The repository provides an automated extraction tool:
```bash
python tools/pk3_extractor.py
```
This utility:
- Decompresses `EN23.PK3`, `EN24.PK3`, and `EN26.PK3` into decompressed binaries.
- Exports all sprites and components into authentic EGA 16-color PNGs.
- Renders the full 640x200 composite ending cutscene screen (`ending_scene2_full_composite_640x200.png`).
- Generates a machine-readable JSON manifest at `reference/extracted_data/images/pk3_decoded/pk3_manifest.json`.

---

## 8. Floppy Disk Media Marker (`FILEID3`)

`FILEID3` is a 4-byte plain-text volume identifier placed in the root of Floppy Disk 3 to verify media during disk swapping and stage loading in `SIERRA.EXE`:
- **Dedicated Audit Document:** [`docs/firehawk/fileid_technical_audit.md`](fileid_technical_audit.md)
- **Inspection Tool:** `tools/fileid_inspector.py`

---

## 9. Cockpit HUD & Telemetry Bitplanes (`GRPH`)

`GRPH` is a 1,184-byte planar 4-bitplane EGA graphic atlas ($32 \times 74$ pixels, 16 colors) containing cockpit energy gauges, radar frames, and status indicators:
- **Dedicated Audit Document:** [`docs/firehawk/grph_technical_audit.md`](grph_technical_audit.md)
- **Decoder Tool:** `tools/grph_decoder.py`
- **Rendered Visual Asset:** `reference/extracted_data/images/grph_atlas.png` ($32 \times 74$ px native, $64 \times 148$ px 2x)





