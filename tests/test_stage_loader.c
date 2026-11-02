/// @file test_stage_loader.c
/// @brief Automated verification test for Firehawk stage loading and tilemap geometry (M4.2).

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "system/hal_vfs.h"
#include "types.h"
#include "world/stage_loader.h"
#include "world/tilemap.h"

#define TEST_ASSERT(cond)                                                                                              \
    do {                                                                                                               \
        if (!(cond)) {                                                                                                 \
            fprintf(stderr, "[FAIL] Assertion failed: %s (%s:%d)\n", #cond, __FILE__, __LINE__);                       \
            exit(1);                                                                                                   \
        }                                                                                                              \
    } while (0)

static const char* const STAGE_NAMES[]
    = { "SS000", "SS010", "SS011", "SS020", "SS021", "SS030", "SS031", "SS040", "SS041", "SS050", "SS051", "SS060",
          "SS061", "SS070", "SS071", "SS080", "SS081", "SS090", "SS091", "SS092", "SS120" };

int main(void)
{
    printf("=== Test: Firehawk Stage Loader & Tilemap Geometry (M4.2) ===\n");

    hal_vfs_set_asset_root("assets/firehawk");

    // 1. Verify loading all 21 stage files
    const size_t STAGE_COUNT = sizeof(STAGE_NAMES) / sizeof(STAGE_NAMES[0]);
    static uint8_t tile_buffer[65536];
    static stage_spawner_t spawners[128];

    for (size_t i = 0; i < STAGE_COUNT; ++i) {
        stage_header_t header = { 0 };
        size_t tile_len = 0;
        size_t spawner_count = 0;

        bool ok = stage_loader_load_file(
            STAGE_NAMES[i], &header, tile_buffer, sizeof(tile_buffer), &tile_len, spawners, 128, &spawner_count);
        TEST_ASSERT(ok);

        if (header.map_param_x != 2304 || header.map_param_y != 6145) {
            fprintf(stderr, "[FAIL] %s: Unexpected map parameters (x=%u, y=%u)\n", STAGE_NAMES[i], header.map_param_x,
                header.map_param_y);
            return 1;
        }

        printf("[PASS] %s loaded: checksum=0x%04X, tile_len=%zu bytes, spawners=%zu\n", STAGE_NAMES[i],
            header.checksum_or_id, tile_len, spawner_count);
    }

    // 2. Deep verification on SS000 (Practice stage)
    stage_header_t ss000_hdr = { 0 };
    size_t ss000_tile_len = 0;
    size_t ss000_spawner_cnt = 0;
    bool ok_ss000 = stage_loader_load_file(
        "SS000", &ss000_hdr, tile_buffer, sizeof(tile_buffer), &ss000_tile_len, spawners, 128, &ss000_spawner_cnt);
    TEST_ASSERT(ok_ss000);
    TEST_ASSERT(ss000_hdr.checksum_or_id == 0x82A5);
    TEST_ASSERT(ss000_hdr.spawner_offset == 5320);
    TEST_ASSERT(ss000_spawner_cnt >= 64);
    TEST_ASSERT(spawners[0].x == 359);
    TEST_ASSERT(spawners[0].y == 34669);
    TEST_ASSERT(spawners[0].enemy_type == 1);
    TEST_ASSERT(spawners[0].flags == 205);
    printf("[PASS] SS000 header & spawner values match reference catalog exactly\n");

    // 3. Tilemap query & camera tracking verification
    stage_tilemap_t tilemap = { 0 };
    bool ok_stage = stage_loader_load_stage(0, 0, &tilemap, NULL, NULL, 0, NULL, tile_buffer, sizeof(tile_buffer));
    TEST_ASSERT(ok_stage);
    TEST_ASSERT(tilemap.width == 144);
    TEST_ASSERT(tilemap.pixel_width == 2304);

    // Test camera tracking with deadzone
    vector2d_t player_pos = { INT_TO_FP12_4(100), INT_TO_FP12_4(50) };
    tilemap_update_cam(&tilemap, player_pos, 320, 168);
    TEST_ASSERT(FP12_4_TO_INT(tilemap.camera_pos.x) == 0);
    TEST_ASSERT(FP12_4_TO_INT(tilemap.camera_pos.y) == 0);

    // Move player past deadzone (e.g. x=250 > 200, cam_x should become 250-200 = 50)
    player_pos.x = INT_TO_FP12_4(250);
    tilemap_update_cam(&tilemap, player_pos, 320, 168);
    TEST_ASSERT(FP12_4_TO_INT(tilemap.camera_pos.x) == 50);

    // Test clamping at stage edge
    player_pos.x = INT_TO_FP12_4(3000);
    tilemap_update_cam(&tilemap, player_pos, 320, 168);
    int16_t expected_max_cam_x = (int16_t)(tilemap.pixel_width - 320);
    TEST_ASSERT(FP12_4_TO_INT(tilemap.camera_pos.x) == expected_max_cam_x);
    printf("[PASS] Camera tracking deadzone and boundary clamping verified\n");

    printf("=== All M4.2 Stage Loader & Tilemap Tests PASSED ===\n");
    return 0;
}
