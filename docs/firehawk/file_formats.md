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
| `EFC1` - `EFC4` | 1.9K - 28K ea. | Binary Effects | Explosion effects, weapon sprites, HUD elements, animation frames |
| `*.DRV` | ~800B - 9K ea. | Relocatable Driver Binaries | Video (`MCGA320`, `EGA640`), Audio (`ADL`, `SNDBLAST`, `MT32`), Keyboard, Joystick |
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

