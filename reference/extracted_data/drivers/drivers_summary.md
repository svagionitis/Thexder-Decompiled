# Firehawk Device Driver Dispatch Catalog

Extracted from all relocatable driver binaries (`*.DRV`) in `assets/firehawk/`.

| Driver File | Type | Short Name | Description | Size | Dispatch Slots |
| :--- | :--- | :--- | :--- | :--- | :--- |
| `ADL.DRV` | Sound / Music Synthesizer Driver | `adldrv` | AdLib Music Synthesizer Card | 7692 B | 0 |
| `CMS.DRV` | Sound / Music Synthesizer Driver | `cms` | Creative Music System/Game Blaster | 3486 B | 1 |
| `EGA640.DRV` | Video Display Driver | `EGA640` | EGA/VGA 640x200 16 color | 9196 B | 16 |
| `IBMKBD.DRV` | Keyboard Input Driver | `IBMKBD` | Standard PC Keyboard | 808 B | 4 |
| `JOYSTICK.DRV` | Joystick / Gamepad Driver | `JOYSTICK` | Standard PC Joystick | 367 B | 0 |
| `MCGA320.DRV` | Video Display Driver | `MCGA` | MCGA 320x200 256 color | 9153 B | 16 |
| `MT32.DRV` | Sound / Music Synthesizer Driver | `mtdrv` | Roland MT-32, MT-100, LAPC-I, CM-32L, or CM-64 | 1857 B | 0 |
| `SNDBLAST.DRV` | Sound / Music Synthesizer Driver | `blastdrv` | Sound Blaster Card | 9028 B | 2 |
| `STD.DRV` | Sound / Music Synthesizer Driver | `stddrv` | IBM PC or Compatible Internal Speaker | 1295 B | 16 |
| `TANDY.DRV` | Sound / Music Synthesizer Driver | `tnddrv` | Tandy 1000 TL series | 3905 B | 16 |
| `TANDY320.DRV` | Video Display Driver | `TANDY` | TANDY 320x200 16 color | 9765 B | 16 |
| `TANDY3V.DRV` | Sound / Music Synthesizer Driver | `jrdrv` | Tandy 1000 series | 3671 B | 16 |
| `TANDYKBD.DRV` | Keyboard Input Driver | `TANDYKBD` | Tandy1000 Keyboard | 798 B | 4 |

## Detailed Driver Dispatch Tables

### `ADL.DRV` (adldrv - AdLib Music Synthesizer Card)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |

### `CMS.DRV` (cms - Creative Music System/Game Blaster)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |
| 0 | `0x0A03` | `init_audio` |

### `EGA640.DRV` (EGA640 - EGA/VGA 640x200 16 color)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |
| 0 | `0x024D` | `init_video` |
| 1 | `0x0285` | `terminate_video` |
| 2 | `0x02FC` | `set_palette` |
| 3 | `0x0315` | `draw_sprite` |
| 4 | `0x0352` | `draw_masked_sprite` |
| 5 | `0x03AA` | `fill_rect` |
| 6 | `0x03B9` | `copy_rect` |
| 7 | `0x03C6` | `scroll_screen` |
| 8 | `0x040B` | `vsync_wait` |
| 9 | `0x0460` | `flip_page` |
| 10 | `0x04D8` | `set_clip_rect` |
| 11 | `0x054A` | `clear_screen` |
| 12 | `0x0575` | `unknown` |
| 13 | `0x0597` | `unknown` |
| 14 | `0x05E3` | `unknown` |
| 15 | `0x068D` | `unknown` |

### `IBMKBD.DRV` (IBMKBD - Standard PC Keyboard)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |
| 0 | `0x00F2` | `unknown` |
| 1 | `0x011B` | `unknown` |
| 2 | `0x0129` | `unknown` |
| 3 | `0x031B` | `unknown` |

### `JOYSTICK.DRV` (JOYSTICK - Standard PC Joystick)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |

### `MCGA320.DRV` (MCGA - MCGA 320x200 256 color)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |
| 0 | `0x0252` | `init_video` |
| 1 | `0x0253` | `terminate_video` |
| 2 | `0x02A4` | `set_palette` |
| 3 | `0x02AD` | `draw_sprite` |
| 4 | `0x02DD` | `draw_masked_sprite` |
| 5 | `0x0316` | `fill_rect` |
| 6 | `0x031C` | `copy_rect` |
| 7 | `0x031D` | `scroll_screen` |
| 8 | `0x0333` | `vsync_wait` |
| 9 | `0x0360` | `flip_page` |
| 10 | `0x03EF` | `set_clip_rect` |
| 11 | `0x0436` | `clear_screen` |
| 12 | `0x048B` | `unknown` |
| 13 | `0x049D` | `unknown` |
| 14 | `0x04DC` | `unknown` |
| 15 | `0x0514` | `unknown` |

### `MT32.DRV` (mtdrv - Roland MT-32, MT-100, LAPC-I, CM-32L, or CM-64)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |

### `SNDBLAST.DRV` (blastdrv - Sound Blaster Card)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |
| 0 | `0x2000` | `init_audio` |
| 1 | `0x0002` | `terminate_audio` |

### `STD.DRV` (stddrv - IBM PC or Compatible Internal Speaker)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |
| 0 | `0x0021` | `init_audio` |
| 1 | `0x0021` | `terminate_audio` |
| 2 | `0x0022` | `play_music` |
| 3 | `0x0022` | `stop_music` |
| 4 | `0x0023` | `pause_music` |
| 5 | `0x0023` | `resume_music` |
| 6 | `0x0024` | `play_sfx` |
| 7 | `0x0024` | `stop_sfx` |
| 8 | `0x0025` | `set_volume` |
| 9 | `0x0025` | `update_sequencer` |
| 10 | `0x0026` | `unknown` |
| 11 | `0x0026` | `unknown` |
| 12 | `0x0027` | `unknown` |
| 13 | `0x0027` | `unknown` |
| 14 | `0x0028` | `unknown` |
| 15 | `0x0029` | `unknown` |

### `TANDY.DRV` (tnddrv - Tandy 1000 TL series)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |
| 0 | `0x03F9` | `init_audio` |
| 1 | `0x03EA` | `terminate_audio` |
| 2 | `0x03DC` | `play_music` |
| 3 | `0x03CE` | `stop_music` |
| 4 | `0x03C0` | `pause_music` |
| 5 | `0x03B2` | `resume_music` |
| 6 | `0x03A4` | `play_sfx` |
| 7 | `0x0397` | `stop_sfx` |
| 8 | `0x038A` | `set_volume` |
| 9 | `0x037D` | `update_sequencer` |
| 10 | `0x0370` | `unknown` |
| 11 | `0x0363` | `unknown` |
| 12 | `0x0357` | `unknown` |
| 13 | `0x034B` | `unknown` |
| 14 | `0x033F` | `unknown` |
| 15 | `0x0333` | `unknown` |

### `TANDY320.DRV` (TANDY - TANDY 320x200 16 color)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |
| 0 | `0x0465` | `init_video` |
| 1 | `0x046A` | `terminate_video` |
| 2 | `0x04DF` | `set_palette` |
| 3 | `0x04E8` | `draw_sprite` |
| 4 | `0x0528` | `draw_masked_sprite` |
| 5 | `0x05B0` | `fill_rect` |
| 6 | `0x05C2` | `copy_rect` |
| 7 | `0x05C3` | `scroll_screen` |
| 8 | `0x05F4` | `vsync_wait` |
| 9 | `0x0624` | `flip_page` |
| 10 | `0x0694` | `set_clip_rect` |
| 11 | `0x06D8` | `clear_screen` |
| 12 | `0x071E` | `unknown` |
| 13 | `0x0730` | `unknown` |
| 14 | `0x076B` | `unknown` |
| 15 | `0x07A6` | `unknown` |

### `TANDY3V.DRV` (jrdrv - Tandy 1000 series)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |
| 0 | `0x03F9` | `init_audio` |
| 1 | `0x03EA` | `terminate_audio` |
| 2 | `0x03DC` | `play_music` |
| 3 | `0x03CE` | `stop_music` |
| 4 | `0x03C0` | `pause_music` |
| 5 | `0x03B2` | `resume_music` |
| 6 | `0x03A4` | `play_sfx` |
| 7 | `0x0397` | `stop_sfx` |
| 8 | `0x038A` | `set_volume` |
| 9 | `0x037D` | `update_sequencer` |
| 10 | `0x0370` | `unknown` |
| 11 | `0x0363` | `unknown` |
| 12 | `0x0357` | `unknown` |
| 13 | `0x034B` | `unknown` |
| 14 | `0x033F` | `unknown` |
| 15 | `0x0333` | `unknown` |

### `TANDYKBD.DRV` (TANDYKBD - Tandy1000 Keyboard)

| Slot | Target Offset | Function Interface Hint |
| :--- | :--- | :--- |
| 0 | `0x00F2` | `unknown` |
| 1 | `0x011B` | `unknown` |
| 2 | `0x0129` | `unknown` |
| 3 | `0x0311` | `unknown` |

