#!/usr/bin/env python3
"""
frame_diff.py
Framebuffer differential pixel analyzer for DOSBox cross-verification.
"""

import sys
import argparse
from typing import Optional

FRAME_WIDTH = 320
FRAME_HEIGHT = 200
FRAME_SIZE = FRAME_WIDTH * FRAME_HEIGHT
HUD_START_Y = 168


def run_frame_diff(
    file_a: str,
    file_b: str,
    ignore_hud: bool = False,
    diff_out_file: Optional[str] = None,
    tolerance_pct: float = 0.0,
) -> int:
    try:
        with open(file_a, "rb") as fa:
            buf_a = fa.read()
    except OSError as err:
        sys.stderr.write(f"Error: Failed to open {file_a} ({err})\n")
        return 1

    try:
        with open(file_b, "rb") as fb:
            buf_b = fb.read()
    except OSError as err:
        sys.stderr.write(f"Error: Failed to open {file_b} ({err})\n")
        return 1

    if len(buf_a) != FRAME_SIZE or len(buf_b) != FRAME_SIZE:
        sys.stderr.write(
            f"Error: Frame size mismatch (read {len(buf_a)} and {len(buf_b)}, expected {FRAME_SIZE})\n"
        )
        return 1

    diff_map = bytearray(FRAME_SIZE)
    total_tested = 0
    mismatches = 0

    for y in range(FRAME_HEIGHT):
        if ignore_hud and y >= HUD_START_Y:
            continue

        row_offset = y * FRAME_WIDTH
        for x in range(FRAME_WIDTH):
            idx = row_offset + x
            total_tested += 1

            if buf_a[idx] != buf_b[idx]:
                mismatches += 1
                diff_map[idx] = 0xFF
            else:
                diff_map[idx] = 0x00

    mismatch_pct = (mismatches * 100.0 / total_tested) if total_tested > 0 else 0.0
    match_pct = 100.0 - mismatch_pct

    print("=== Framebuffer Differential Analysis ===")
    print(f"  Reference:    {file_a}")
    print(f"  Candidate:    {file_b}")
    tested_desc = "Gameplay Area Only" if ignore_hud else "Full 320x200"
    print(f"  Tested Area:  {total_tested} pixels ({tested_desc})")
    print(f"  Matches:      {total_tested - mismatches} ({match_pct:.2f}%)")
    print(f"  Mismatches:   {mismatches} ({mismatch_pct:.2f}%)")

    if diff_out_file is not None:
        try:
            with open(diff_out_file, "wb") as fd:
                fd.write(diff_map)
            print(f"  Diff map saved to: {diff_out_file}")
        except OSError as err:
            sys.stderr.write(f"Error: Failed to write diff map {diff_out_file} ({err})\n")
            return 1

    if mismatch_pct > tolerance_pct:
        sys.stderr.write(
            f"[FAIL] Mismatch percentage {mismatch_pct:.2f}% exceeds tolerance {tolerance_pct:.2f}%\n"
        )
        return 1

    print("[PASS] Framebuffer comparison passed within tolerance.")
    return 0


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Framebuffer differential pixel analyzer for DOSBox cross-verification."
    )
    parser.add_argument("frame_a", help="Reference raw framebuffer file (320x200)")
    parser.add_argument("frame_b", help="Candidate raw framebuffer file (320x200)")
    parser.add_argument(
        "--ignore-hud",
        action="store_true",
        help=f"Ignore lines {HUD_START_Y} to {FRAME_HEIGHT - 1} (HUD status area)",
    )
    parser.add_argument(
        "--output-diff",
        default=None,
        help="Output 320x200 diff map raw file (0=match, 0xFF=diff)",
    )
    parser.add_argument(
        "--tolerance",
        type=float,
        default=0.0,
        help="Maximum allowable mismatch percentage (default: 0.0)",
    )

    args = parser.parse_args()
    return run_frame_diff(
        args.frame_a,
        args.frame_b,
        ignore_hud=args.ignore_hud,
        diff_out_file=args.output_diff,
        tolerance_pct=args.tolerance,
    )


if __name__ == "__main__":
    sys.exit(main())

