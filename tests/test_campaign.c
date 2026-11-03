/// @file test_campaign.c
/// @brief Automated campaign playability and progression verification across all stages (M5.4).

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "actor/player.h"
#include "game_loop.h"
#include "system/hal_vfs.h"
#include "types.h"

#define TEST_ASSERT(cond)                                                                                              \
    do {                                                                                                               \
        if (!(cond)) {                                                                                                 \
            fprintf(stderr, "[FAIL] Assertion failed: %s (%s:%d)\n", #cond, __FILE__, __LINE__);                       \
            exit(1);                                                                                                   \
        }                                                                                                              \
    } while (0)

typedef struct stage_desc {
    uint8_t stage_num;
    uint8_t sub_stage;
    const char* name;
} stage_desc_t;

static const stage_desc_t ALL_STAGES[] = {
    { 0, 0, "SS000 - Practice Area" },
    { 1, 0, "SS010 - Surface Base (Part 1)" },
    { 1, 1, "SS011 - Surface Base (Part 2)" },
    { 2, 0, "SS020 - Subterranean Caverns (Part 1)" },
    { 2, 1, "SS021 - Subterranean Caverns (Part 2)" },
    { 3, 0, "SS030 - Submerged Reservoir (Part 1)" },
    { 3, 1, "SS031 - Submerged Reservoir (Part 2)" },
    { 4, 0, "SS040 - Magma Chamber (Part 1)" },
    { 4, 1, "SS041 - Magma Chamber (Part 2)" },
    { 5, 0, "SS050 - Bio-Mechanical Hive (Part 1)" },
    { 5, 1, "SS051 - Bio-Mechanical Hive (Part 2)" },
    { 6, 0, "SS060 - Automated Refinery (Part 1)" },
    { 6, 1, "SS061 - Automated Refinery (Part 2)" },
    { 7, 0, "SS070 - Crystal Chasm (Part 1)" },
    { 7, 1, "SS071 - Crystal Chasm (Part 2)" },
    { 8, 0, "SS080 - Sky Fortress (Part 1)" },
    { 8, 1, "SS081 - Sky Fortress (Part 2)" },
    { 9, 0, "SS090 - Defense Perimeter (Part 1)" },
    { 9, 1, "SS091 - Defense Perimeter (Part 2)" },
    { 9, 2, "SS092 - Defense Perimeter (Part 3)" },
    { 12, 0, "SS120 - Final Central CPU Core" },
};

int main(void)
{
    printf("=== Test: Firehawk Full Campaign Progression & Playability (M5.4) ===\n");

    hal_vfs_set_asset_root("assets/firehawk");

    const size_t STAGE_COUNT = sizeof(ALL_STAGES) / sizeof(ALL_STAGES[0]);
    static game_context_t ctx;

    for (size_t i = 0; i < STAGE_COUNT; ++i) {
        const stage_desc_t* desc = &ALL_STAGES[i];
        printf("  Testing Stage [%2zu/%2zu] %s...\n", i + 1, STAGE_COUNT, desc->name);

        bool loaded = game_loop_init_stage(&ctx, desc->stage_num, desc->sub_stage);
        TEST_ASSERT(loaded);

        // Verify map dimensions
        TEST_ASSERT(ctx.tilemap.width > 0);
        TEST_ASSERT(ctx.tilemap.height > 0);

        // Verify player initialized
        TEST_ASSERT(ctx.player.energy > 0);
        TEST_ASSERT(ctx.state == STATE_STAGE_PLAY);

        // Run 60 simulation frames (1 second of real-time 60Hz tick)
        for (int frame = 0; frame < 60; ++frame) {
            uint16_t input = (frame < 30) ? INPUT_RIGHT : (INPUT_RIGHT | INPUT_JUMP);
            game_loop_tick(&ctx, input, NULL);

            // Assert camera stays within valid stage boundary
            int32_t cam_x = ctx.tilemap.camera_pos.x;
            int32_t cam_y = ctx.tilemap.camera_pos.y;
            TEST_ASSERT(cam_x >= 0);
            TEST_ASSERT(cam_y >= 0);
        }

        // Verify player is alive and stable after 60 ticks
        TEST_ASSERT(ctx.player.energy > 0);
        TEST_ASSERT(ctx.state == STATE_STAGE_PLAY);
        printf("    --> Passed (Width: %u tiles, Height: %u tiles, Spawners: %zu)\n", ctx.tilemap.width,
            ctx.tilemap.height, ctx.spawner_count);
    }

    printf("=== All M5.4 Full Campaign Progression Tests PASSED (21/21 Stages Verified) ===\n");
    return 0;
}
