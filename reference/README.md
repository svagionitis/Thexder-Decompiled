# Firehawk Reverse-Engineering Reference & Decompiled Assets

This directory contains the complete raw decompilation, disassembly, memory maps, extracted graphics, fonts, stage geometry, and driver specifications extracted from the original DOS release of **Firehawk: Thexder II**.

---

## Directory Organization

```
reference/
├── raw_decompiled/                        # Complete 16-bit decompiled pseudo-C and ASM
│   ├── GAME.EXE_decompiled.c             # 231 decompiled functions from main game engine
│   ├── GAME.EXE_disassembly.asm          # Linear disassembly (9,743 instructions)
│   ├── GAME.EXE_memory_map.md            # Ghidra memory segments (CODE, DGROUP, BSS)
│   ├── GAME.EXE_symbols.txt              # Defined labels, strings, and cross-references
│   ├── SIERRA.EXE_decompiled.c           # Loader entry point and unpacker loop
│   ├── SIERRA.EXE_full_disassembly.asm   # Complete 16-bit linear ASM
│   ├── DEMO.EXE_decompiled.c             # Attract mode demo engine (288 KB)
│   ├── DEMO.EXE_disassembly.asm          # Attract mode disassembly (161 KB)
│   ├── INSTALL.EXE_decompiled.c          # Hardware setup & config generator (131 KB)
│   ├── INSTALL.EXE_disassembly.asm       # Hardware setup disassembly (249 KB)
│   └── *.DRV_disassembly.asm             # Complete 16-bit Real Mode driver disassemblies
│
└── extracted_data/                        # Extracted game data in modern human-readable formats
    ├── images/                           # Rendered sprite atlases, font sheets, palettes
    │   ├── regfont_sheet.png             # 8x8 font glyph atlas (256 ASCII characters)
    │   ├── ship_atlas.png                # Player robot and jet transformation animation frames
    │   ├── item_atlas.png                # Collectible powerup items & crystal icons
    │   ├── grph_atlas.png                # HUD borders, score panel, gauge frames
    │   ├── grp2_atlas.png                # Dialog frames & status indicators
    │   ├── grp3_atlas.png                # Tactical radar & energy shields
    │   ├── tak0_atlas.png                # Carrier ship takeoff animation sequence
    │   ├── zan2_atlas.png                # Stage obstacle sprites
    │   └── ega_palette_preview.png       # Standard 16-color EGA palette swatches
    │
    ├── stages/                           # Level geometry, map parameters, and spawners
    │   ├── all_stages_catalog.json       # Machine-readable parameters for stages 0 to 12
    │   ├── stages_summary.md             # Summary table of stage sizes, tile banks, spawners
    │   └── SS*.json                      # Detailed spawner records and offsets per stage
    │
    ├── strings/                          # Extracted text, dialogues, and system messages
    │   ├── all_strings_catalog.json      # Structured string database across all 21 binaries
    │   └── strings_summary.md            # Mission dialogues, communications, error messages
    │
    └── drivers/                          # Driver architectures & dispatch tables
        ├── driver_dispatch_catalog.json  # Exported dispatch slots and addresses
        └── drivers_summary.md            # Standard Sierra driver specification (0x87654321)
```

---

## How to Use as Reference

1. **Reimplementing Gameplay & Physics (Phase 4):**
   - Check `reference/raw_decompiled/GAME.EXE_decompiled.c` for function signatures, mathematical formulas, and state logic.
   - Cross-reference with `reference/raw_decompiled/GAME.EXE_disassembly.asm` when register allocation or bit manipulation requires verification.
2. **Platform Abstraction Layer (Phase 3):**
   - Use `reference/extracted_data/drivers/drivers_summary.md` and `reference/raw_decompiled/MCGA320.DRV_disassembly.asm` to understand the exact video blitter and palette interface expected by the game.
   - Use `reference/raw_decompiled/SNDBLAST.DRV_disassembly.asm` and `ADL.DRV_disassembly.asm` for OPL2 register programming.
3. **Stage Loading & Rendering (Phase 4):**
   - Refer to `reference/extracted_data/stages/stages_summary.md` and `reference/extracted_data/stages/all_stages_catalog.json` for stage header structures and enemy spawner table layouts.

