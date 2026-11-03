/// @file frame_diff.c
/// @brief Framebuffer differential pixel analyzer for DOSBox cross-verification (M5.3).

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FRAME_WIDTH 320
#define FRAME_HEIGHT 200
#define FRAME_SIZE (FRAME_WIDTH * FRAME_HEIGHT)
#define HUD_START_Y 168

static void print_usage(const char* prog)
{
    printf("Usage: %s <frame_a.raw> <frame_b.raw> [options]\n", prog);
    printf("Options:\n");
    printf("  --ignore-hud       Ignore lines %d to %d (HUD status area)\n", HUD_START_Y, FRAME_HEIGHT - 1);
    printf("  --output-diff <f>  Output 320x200 diff map raw file (0=match, 0xFF=diff)\n");
    printf("  --tolerance <pct>  Maximum allowable mismatch percentage (default: 0.0)\n");
}

int main(int argc, char* argv[])
{
    if (argc < 3) {
        print_usage(argv[0]);
        return 1;
    }

    const char* file_a = argv[1];
    const char* file_b = argv[2];
    bool ignore_hud = false;
    const char* diff_out_file = NULL;
    double tolerance_pct = 0.0;

    for (int i = 3; i < argc; ++i) {
        if (strcmp(argv[i], "--ignore-hud") == 0) {
            ignore_hud = true;
        } else if (strcmp(argv[i], "--output-diff") == 0 && i + 1 < argc) {
            diff_out_file = argv[++i];
        } else if (strcmp(argv[i], "--tolerance") == 0 && i + 1 < argc) {
            tolerance_pct = atof(argv[++i]);
        }
    }

    FILE* fa = fopen(file_a, "rb");
    if (fa == NULL) {
        fprintf(stderr, "Error: Failed to open %s\n", file_a);
        return 1;
    }

    FILE* fb = fopen(file_b, "rb");
    if (fb == NULL) {
        fprintf(stderr, "Error: Failed to open %s\n", file_b);
        fclose(fa);
        return 1;
    }

    static uint8_t buf_a[FRAME_SIZE];
    static uint8_t buf_b[FRAME_SIZE];
    static uint8_t diff_map[FRAME_SIZE];

    size_t read_a = fread(buf_a, 1, FRAME_SIZE, fa);
    size_t read_b = fread(buf_b, 1, FRAME_SIZE, fb);
    fclose(fa);
    fclose(fb);

    if (read_a != FRAME_SIZE || read_b != FRAME_SIZE) {
        fprintf(stderr, "Error: Frame size mismatch (read %zu and %zu, expected %d)\n", read_a, read_b, FRAME_SIZE);
        return 1;
    }

    size_t total_tested = 0;
    size_t mismatches = 0;

    for (int y = 0; y < FRAME_HEIGHT; ++y) {
        if (ignore_hud && y >= HUD_START_Y) {
            continue;
        }

        for (int x = 0; x < FRAME_WIDTH; ++x) {
            size_t idx = (size_t)(y * FRAME_WIDTH + x);
            total_tested++;

            if (buf_a[idx] != buf_b[idx]) {
                mismatches++;
                diff_map[idx] = 0xFF;
            } else {
                diff_map[idx] = 0x00;
            }
        }
    }

    double mismatch_pct = (total_tested > 0) ? ((double)mismatches * 100.0 / (double)total_tested) : 0.0;
    double match_pct = 100.0 - mismatch_pct;

    printf("=== Framebuffer Differential Analysis ===\n");
    printf("  Reference:    %s\n", file_a);
    printf("  Candidate:    %s\n", file_b);
    printf("  Tested Area:  %zu pixels (%s)\n", total_tested, ignore_hud ? "Gameplay Area Only" : "Full 320x200");
    printf("  Matches:      %zu (%.2f%%)\n", total_tested - mismatches, match_pct);
    printf("  Mismatches:   %zu (%.2f%%)\n", mismatches, mismatch_pct);

    if (diff_out_file != NULL) {
        FILE* fd = fopen(diff_out_file, "wb");
        if (fd != NULL) {
            fwrite(diff_map, 1, FRAME_SIZE, fd);
            fclose(fd);
            printf("  Diff map saved to: %s\n", diff_out_file);
        }
    }

    if (mismatch_pct > tolerance_pct) {
        fprintf(stderr, "[FAIL] Mismatch percentage %.2f%% exceeds tolerance %.2f%%\n", mismatch_pct, tolerance_pct);
        return 1;
    }

    printf("[PASS] Framebuffer comparison passed within tolerance.\n");
    return 0;
}
