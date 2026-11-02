/// @file test_sar_extractor.c
/// @brief Automated verification test for Sierra Archive Resource (.SAR) loading and extraction.

#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "sar_extractor.h"

int main(void)
{
    printf("=== Test: Sierra Archive Resource (SAR) Loading & Parsing ===\n");

    const char* ix_path = "assets/firehawk/RES1.IX";
    const char* sar_path = "assets/firehawk/RES1.SAR";

    sar_archive_t archive = { 0 };
    bool loaded = sar_load(ix_path, sar_path, &archive);
    if (!loaded) {
        fprintf(stderr, "[FAIL] Failed to load RES1.IX / RES1.SAR\n");
        return 1;
    }

    printf("[PASS] sar_load succeeded.\n");
    printf("       Entries: %zu, SAR Size: %zu bytes\n", archive.entry_count, archive.sar_size);

    // Verify entry count: RES1.IX is 828 bytes / 18 = 46 entries
    if (archive.entry_count != 46) {
        fprintf(stderr, "[FAIL] Expected exactly 46 entries in RES1.IX, got %zu\n", archive.entry_count);
        sar_free(&archive);
        return 1;
    }
    if (archive.sar_size != 49800) {
        fprintf(stderr, "[FAIL] Expected RES1.SAR size 49800 bytes, got %zu\n", archive.sar_size);
        sar_free(&archive);
        return 1;
    }

    // Test entry 0: KA00
    const sar_entry_t* ka00 = sar_find_entry(&archive, "KA00");
    if (!ka00 || ka00->data_size != 501 || ka00->sar_offset != 13) {
        fprintf(stderr, "[FAIL] Entry KA00 validation failed\n");
        sar_free(&archive);
        return 1;
    }
    printf("[PASS] Entry KA00 validated: offset=%u, size=%u\n", ka00->sar_offset, ka00->data_size);

    // Test entry 1: AD01
    const sar_entry_t* ad01 = sar_find_entry(&archive, "AD01");
    if (!ad01 || ad01->data_size != 166 || ad01->sar_offset != 527) {
        fprintf(stderr, "[FAIL] Entry AD01 validation failed\n");
        sar_free(&archive);
        return 1;
    }
    printf("[PASS] Entry AD01 validated: offset=%u, size=%u\n", ad01->sar_offset, ad01->data_size);

    // Test extraction
    const char* test_out = "build/test_extracted";
    bool extracted = sar_extract_all(&archive, test_out);
    if (!extracted) {
        fprintf(stderr, "[FAIL] sar_extract_all failed\n");
        sar_free(&archive);
        return 1;
    }
    printf("[PASS] sar_extract_all successfully extracted entries to %s\n", test_out);

    // Check extracted file on disk
    FILE* fp = fopen("build/test_extracted/KA00.bin", "rb");
    if (!fp) {
        fprintf(stderr, "[FAIL] Extracted KA00.bin does not exist\n");
        sar_free(&archive);
        return 1;
    }
    fseek(fp, 0, SEEK_END);
    long sz = ftell(fp);
    fclose(fp);
    if (sz != 501) {
        fprintf(stderr, "[FAIL] Extracted KA00.bin size mismatch: expected 501, got %ld\n", sz);
        sar_free(&archive);
        return 1;
    }
    printf("[PASS] Verified extracted file KA00.bin: %ld bytes\n", sz);

    sar_free(&archive);
    if (archive.entries != NULL || archive.sar_data != NULL) {
        fprintf(stderr, "[FAIL] sar_free failed to clear pointers\n");
        return 1;
    }
    printf("[PASS] sar_free cleanly released all memory.\n");

    printf("\n>>> ALL SAR EXTRACTOR TESTS PASSED <<<\n");
    return 0;
}
