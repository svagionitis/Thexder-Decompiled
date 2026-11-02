/// @file sar_main.c
/// @brief CLI front-end for Sierra Archive Resource (.SAR) extraction.

#include "sar_extractor.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc < 2) {
        printf("Usage: sar_extractor <path_to_ix_file_or_dir> [output_directory]\n");
        printf("Example: sar_extractor assets/firehawk/RES1.IX build/extracted/res1\n");
        printf("         sar_extractor assets/firehawk build/extracted\n");
        return 1;
    }

    const char* target_path = argv[1];
    const char* out_dir = (argc >= 3) ? argv[2] : "build/extracted_assets";

    // Check if target is a single IX file
    if (strstr(target_path, ".IX") != NULL || strstr(target_path, ".ix") != NULL) {
        char sar_path[512] = { 0 };
        strncpy(sar_path, target_path, sizeof(sar_path) - 1);
        char* ext = strrchr(sar_path, '.');
        if (ext) {
            strcpy(ext, ".SAR");
        }

        sar_archive_t archive = { 0 };
        if (!sar_load(target_path, sar_path, &archive)) {
            return 1;
        }

        printf("Loaded %s: %zu entries, %zu bytes total.\n", target_path, archive.entry_count, archive.sar_size);
        bool ok = sar_extract_all(&archive, out_dir);
        sar_free(&archive);

        if (ok) {
            printf("Successfully extracted all entries to: %s\n", out_dir);
            return 0;
        }
        return 1;
    }

    // Process standard volumes: RES1, RES2, RES3
    const char* volumes[] = { "RES1", "RES2", "RES3" };
    int success_count = 0;

    for (size_t v = 0; v < 3; ++v) {
        char ix_file[512] = { 0 };
        char sar_file[512] = { 0 };
        char vol_out[512] = { 0 };

        snprintf(ix_file, sizeof(ix_file), "%s/%s.IX", target_path, volumes[v]);
        snprintf(sar_file, sizeof(sar_file), "%s/%s.SAR", target_path, volumes[v]);
        snprintf(vol_out, sizeof(vol_out), "%s/%s", out_dir, volumes[v]);

        sar_archive_t archive = { 0 };
        if (sar_load(ix_file, sar_file, &archive)) {
            printf("Volume %s: %zu entries, %zu bytes.\n", volumes[v], archive.entry_count, archive.sar_size);
            if (sar_extract_all(&archive, vol_out)) {
                printf("  Extracted to: %s\n", vol_out);
                success_count++;
            }
            sar_free(&archive);
        }
    }

    return (success_count > 0) ? 0 : 1;
}
