#!/usr/bin/env python3
"""
tools/extract_driver_tables.py
Parses all Firehawk 16-bit relocatable driver binaries (*.DRV), extracting the
Sierra standard driver signature, driver type, description, and dispatch jump tables.
"""

import os
import glob
import json
import struct

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")
OUT_DIR = os.path.join(REPO_ROOT, "reference", "extracted_data", "drivers")

os.makedirs(OUT_DIR, exist_ok=True)

DRIVER_TYPES = {
    0x00: "Video Display Driver",
    0x01: "Sound / Music Synthesizer Driver",
    0x04: "Keyboard Input Driver",
    0x06: "Joystick / Gamepad Driver",
}

VIDEO_DISPATCH_NAMES = [
    "init_video",
    "terminate_video",
    "set_palette",
    "draw_sprite",
    "draw_masked_sprite",
    "fill_rect",
    "copy_rect",
    "scroll_screen",
    "vsync_wait",
    "flip_page",
    "set_clip_rect",
    "clear_screen"
]

AUDIO_DISPATCH_NAMES = [
    "init_audio",
    "terminate_audio",
    "play_music",
    "stop_music",
    "pause_music",
    "resume_music",
    "play_sfx",
    "stop_sfx",
    "set_volume",
    "update_sequencer"
]

def parse_driver(path):
    fn = os.path.basename(path)
    with open(path, "rb") as f:
        data = f.read()

    if len(data) < 32:
        return None

    # Check for Sierra driver signature at offset +4: 0x87654321
    magic = struct.unpack("<I", data[4:8])[0]
    is_sierra_drv = (magic == 0x87654321)

    type_byte = data[8]
    type_name = DRIVER_TYPES.get(type_byte, f"Unknown Driver (0x{type_byte:02X})")

    name_len = data[9]
    name = data[10 : 10 + name_len].decode("ascii", errors="replace")

    desc_offset = 10 + name_len
    desc_len = data[desc_offset] if desc_offset < len(data) else 0
    desc = data[desc_offset + 1 : desc_offset + 1 + desc_len].decode("ascii", errors="replace")

    # Dispatch table offsets start after description
    dispatch_start = desc_offset + 1 + desc_len
    dispatch_offsets = []
    
    # Read up to 16 dispatch word offsets
    for i in range(16):
        pos = dispatch_start + (i * 2)
        if pos + 2 <= len(data):
            off = struct.unpack("<H", data[pos : pos + 2])[0]
            if off < len(data) and off > 0:
                name_hint = "unknown"
                if type_byte == 0x00 and i < len(VIDEO_DISPATCH_NAMES):
                    name_hint = VIDEO_DISPATCH_NAMES[i]
                elif type_byte == 0x01 and i < len(AUDIO_DISPATCH_NAMES):
                    name_hint = AUDIO_DISPATCH_NAMES[i]
                
                dispatch_offsets.append({
                    "slot": i,
                    "target_offset": f"0x{off:04X}",
                    "function_hint": name_hint
                })
            else:
                break

    return {
        "file": fn,
        "size_bytes": len(data),
        "sierra_magic": f"0x{magic:08X}" if is_sierra_drv else "none",
        "driver_type_id": type_byte,
        "driver_type": type_name,
        "driver_short_name": name,
        "driver_description": desc,
        "dispatch_entry_count": len(dispatch_offsets),
        "dispatch_table": dispatch_offsets
    }

def main():
    driver_files = sorted(glob.glob(os.path.join(ASSETS_DIR, "*.DRV")))
    catalog = []

    for df in driver_files:
        info = parse_driver(df)
        if info:
            catalog.append(info)

    # Save JSON
    with open(os.path.join(OUT_DIR, "driver_dispatch_catalog.json"), "w", encoding="utf-8") as f:
        json.dump(catalog, f, indent=2)

    # Save Markdown
    with open(os.path.join(OUT_DIR, "drivers_summary.md"), "w", encoding="utf-8") as f:
        f.write("# Firehawk Device Driver Dispatch Catalog\n\n")
        f.write("Extracted from all relocatable driver binaries (`*.DRV`) in `assets/firehawk/`.\n\n")
        f.write("| Driver File | Type | Short Name | Description | Size | Dispatch Slots |\n")
        f.write("| :--- | :--- | :--- | :--- | :--- | :--- |\n")
        for d in catalog:
            f.write(f"| `{d['file']}` | {d['driver_type']} | `{d['driver_short_name']}` | {d['driver_description']} | {d['size_bytes']} B | {d['dispatch_entry_count']} |\n")

        f.write("\n## Detailed Driver Dispatch Tables\n\n")
        for d in catalog:
            f.write(f"### `{d['file']}` ({d['driver_short_name']} - {d['driver_description']})\n\n")
            f.write("| Slot | Target Offset | Function Interface Hint |\n")
            f.write("| :--- | :--- | :--- |\n")
            for entry in d["dispatch_table"]:
                f.write(f"| {entry['slot']} | `{entry['target_offset']}` | `{entry['function_hint']}` |\n")
            f.write("\n")

    print(f"Parsed {len(catalog)} driver binaries into {OUT_DIR}")

if __name__ == "__main__":
    main()

