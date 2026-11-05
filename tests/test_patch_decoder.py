#!/usr/bin/env python3
"""
tests/test_patch_decoder.py
Unit tests for PATCH.* files decoding, integrity, and asset generation.
"""

import os
import sys
import json
import unittest

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
if REPO_ROOT not in sys.path:
    sys.path.insert(0, REPO_ROOT)

from tools.patch_decoder import (
    decompress_patch_file,
    parse_patch_001,
    parse_patch_003,
    parse_patch_101,
)

ASSETS_DIR = os.path.join(REPO_ROOT, "assets", "firehawk")


class TestPatchDecoder(unittest.TestCase):
    def test_patch_001_decompression_and_structure(self):
        p1_path = os.path.join(ASSETS_DIR, "PATCH.001")
        size, decomp = decompress_patch_file(p1_path)
        self.assertEqual(size, 16637)
        self.assertEqual(len(decomp), 16637)

        parsed = parse_patch_001(decomp)
        self.assertEqual(parsed["resource_type"], 0x89)
        self.assertEqual(parsed["title"], "MT32 - THEX2")
        self.assertEqual(len(parsed["lcd_messages"]), 3)
        self.assertEqual(parsed["lcd_messages"][0], "MUSIC BY ROB ATESALP")
        self.assertEqual(parsed["lcd_messages"][1], "WELCOME TO THEXDER 2")
        self.assertEqual(parsed["lcd_messages"][2], "<THANKS FOR PLAYING>")
        self.assertEqual(parsed["timbre_count"], 64)
        self.assertEqual(parsed["timbres"][0]["name"], "Funk Bass")
        self.assertEqual(parsed["timbres"][63]["name"], "LCannon MS")

    def test_patch_003_decompression_and_structure(self):
        p3_path = os.path.join(ASSETS_DIR, "PATCH.003")
        size, decomp = decompress_patch_file(p3_path)
        self.assertEqual(size, 2706)
        self.assertEqual(len(decomp), 2706)

        parsed = parse_patch_003(decomp)
        self.assertEqual(parsed["resource_type"], 0x89)
        self.assertEqual(parsed["title"], "AdLib - THEX2")
        self.assertEqual(parsed["instrument_count"], 192)
        # Check melodic vs rhythm
        self.assertEqual(parsed["instruments"][0]["type"], "melodic")
        self.assertEqual(parsed["instruments"][127]["type"], "melodic")
        self.assertEqual(parsed["instruments"][128]["type"], "rhythm")
        self.assertEqual(parsed["instruments"][191]["type"], "rhythm")

    def test_patch_101_decompression_and_structure(self):
        p101_path = os.path.join(ASSETS_DIR, "PATCH.101")
        size, decomp = decompress_patch_file(p101_path)
        self.assertEqual(size, 314)
        self.assertEqual(len(decomp), 314)

        parsed = parse_patch_101(decomp)
        self.assertEqual(parsed["resource_type"], 0x89)
        self.assertEqual(parsed["program_map_entries"], 128)
        self.assertEqual(len(parsed["noise_generator_parameters"]), 16)


if __name__ == "__main__":
    unittest.main()

