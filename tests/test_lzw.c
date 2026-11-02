/// @file test_lzw.c
/// @brief Automated verification test for Firehawk LZW decompression and resource loading.

#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "resource/lzw.h"
#include "resource/res_manager.h"
#include "system/hal_vfs.h"

int main(void)
{
    printf("=== Test: Firehawk LZW Decompression & Resource Management (M4.1) ===\n");

    hal_vfs_set_asset_root("assets/firehawk");

    // 1. Basic format detection check
    uint8_t uncompressed_data[] = { 0x54, 0x45, 0x53, 0x54 };
    if (lzw_is_compressed(uncompressed_data, sizeof(uncompressed_data))) {
        fprintf(stderr, "[FAIL] False positive on uncompressed data\n");
        return 1;
    }
    printf("[PASS] lzw_is_compressed correctly rejected uncompressed dummy stream\n");

    // 2. Test REGFONT loading and decompression
    // REGFONT is an 8x16 font sheet that decompresses to exactly 4096 bytes (256 chars * 16 rows)
    uint8_t font_buf[8192];
    size_t font_size = 0;
    bool font_loaded = res_manager_load_file("REGFONT", font_buf, sizeof(font_buf), &font_size, true);
    if (!font_loaded) {
        fprintf(stderr, "[FAIL] Failed to load and decompress REGFONT via res_manager_load_file\n");
        return 1;
    }
    if (font_size != 4096) {
        fprintf(stderr, "[FAIL] REGFONT decompressed size mismatch: expected 4096, got %zu\n", font_size);
        return 1;
    }
    printf("[PASS] REGFONT successfully decompressed to exactly 4096 bytes\n");

    // 3. Test resource manager archive initialization
    bool init_ok = res_manager_init();
    if (!init_ok) {
        fprintf(stderr, "[FAIL] res_manager_init failed to load archives\n");
        return 1;
    }
    printf("[PASS] res_manager_init loaded RES1, RES2, RES3 catalogs\n");

    // 4. Test SHIP chunk (Player robot and jet sprites)
    // Decompresses to 10,528 bytes (16 frames of 32x41 across 4 EGA bitplanes: 656 bytes/frame)
    const res_entry_t* ship_entry = res_manager_find("SHIP");
    if (ship_entry == NULL) {
        fprintf(stderr, "[FAIL] Could not find 'SHIP' resource entry in loaded catalogs\n");
        res_manager_shutdown();
        return 1;
    }
    printf("[PASS] Found 'SHIP' entry: offset=%u, compressed_size=%u in archive index %u\n", ship_entry->sar_offset,
        ship_entry->data_size, ship_entry->archive_idx);

    uint8_t ship_buf[16384];
    size_t ship_size = 0;
    bool ship_decomp = res_manager_load_chunk("SHIP", ship_buf, sizeof(ship_buf), &ship_size, true);
    if (!ship_decomp) {
        fprintf(stderr, "[FAIL] Failed to decompress SHIP chunk\n");
        res_manager_shutdown();
        return 1;
    }
    if (ship_size != 10528) {
        fprintf(stderr, "[FAIL] SHIP decompressed size mismatch: expected 10528, got %zu\n", ship_size);
        res_manager_shutdown();
        return 1;
    }
    printf("[PASS] 'SHIP' chunk successfully decompressed to exactly 10,528 bytes\n");

    // 5. Test ITEM chunk (Collectibles, powerup crystals, ammo)
    // Decompresses to 2,592 bytes (24 frames of 16x18 across 3 bitplanes)
    uint8_t item_buf[8192];
    size_t item_size = 0;
    bool item_decomp = res_manager_load_chunk("ITEM", item_buf, sizeof(item_buf), &item_size, true);
    if (!item_decomp) {
        fprintf(stderr, "[FAIL] Failed to decompress ITEM chunk\n");
        res_manager_shutdown();
        return 1;
    }
    if (item_size != 2592) {
        fprintf(stderr, "[FAIL] ITEM decompressed size mismatch: expected 2592, got %zu\n", item_size);
        res_manager_shutdown();
        return 1;
    }
    printf("[PASS] 'ITEM' chunk successfully decompressed to exactly 2,592 bytes\n");

    // 6. Test KA00 raw uncompressed chunk
    uint8_t ka00_buf[1024];
    size_t ka00_size = 0;
    bool ka00_loaded = res_manager_load_chunk("KA00", ka00_buf, sizeof(ka00_buf), &ka00_size, false);
    if (!ka00_loaded || ka00_size != 501) {
        fprintf(stderr, "[FAIL] KA00 raw load failed: expected 501 bytes, got %zu\n", ka00_size);
        res_manager_shutdown();
        return 1;
    }
    printf("[PASS] 'KA00' raw chunk loaded (501 bytes)\n");

    // 7. Cleanup
    res_manager_shutdown();
    printf("[PASS] res_manager_shutdown executed cleanly\n");
    printf("=== All Milestone M4.1 Foundation & Resource Tests Passed! ===\n");
    return 0;
}
