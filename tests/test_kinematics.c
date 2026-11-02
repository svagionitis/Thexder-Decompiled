/// @file test_kinematics.c
/// @brief Automated verification test for Firehawk player kinematics and swept collision (M4.3).

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "actor/player.h"
#include "physics/collision.h"
#include "types.h"
#include "world/tilemap.h"

#define TEST_ASSERT(cond)                                                                                              \
    do {                                                                                                               \
        if (!(cond)) {                                                                                                 \
            fprintf(stderr, "[FAIL] Assertion failed: %s (%s:%d)\n", #cond, __FILE__, __LINE__);                       \
            exit(1);                                                                                                   \
        }                                                                                                              \
    } while (0)

int main(void)
{
    printf("=== Test: Firehawk Kinematics & Collision Simulation (M4.3) ===\n");

    // Construct a 20x20 test tilemap
    // Tile 0 = Empty, Tile 1 = Solid
    const uint16_t MAP_W = 20;
    const uint16_t MAP_H = 20;
    uint8_t tiles[400] = { 0 };
    uint16_t attr[256] = { 0 };
    attr[0] = TILE_FLAG_EMPTY;
    attr[1] = TILE_FLAG_SOLID;

    // Build solid floor at row 10 (y = 160)
    for (uint16_t x = 0; x < MAP_W; ++x) {
        tiles[10 * MAP_W + x] = 1;
    }

    // Build low ceiling at row 8 (y = 128) over x = 6..12
    // This creates a 1-tile high (16px) crawlspace between row 8 ceiling (y=144) and row 10 floor (y=160)
    for (uint16_t x = 6; x <= 12; ++x) {
        tiles[8 * MAP_W + x] = 1;
    }

    stage_tilemap_t tilemap = { 0 };
    tilemap_init(&tilemap, 1, MAP_W, MAP_H, tiles, attr);

    // -------------------------------------------------------------
    // Test 1: Fall under gravity and land flush on solid floor
    // -------------------------------------------------------------
    player_state_t player = { 0 };
    vector2d_t spawn = { INT_TO_FP12_4(32), INT_TO_FP12_4(32) };
    player_init(&player, spawn);
    player.grounded = 0;

    // Simulate 50 frames of gravity fall to ensure landing flush
    for (int frame = 0; frame < 50; ++frame) {
        player_update(&player, INPUT_NONE, &tilemap);
    }

    // Floor starts at y = 160 (tile 10 * 16). Upright robot is 32px tall.
    // Top of robot should land flush at 160 - 32 = 128.
    int16_t landed_y = FP12_4_TO_INT(player.position.y);
    TEST_ASSERT(landed_y == 128);
    TEST_ASSERT(player.grounded == 1);
    TEST_ASSERT(player.velocity.y == 0);
    printf("[PASS] Test 1: Player fell under gravity and landed flush at y=%d with zero penetration\n", landed_y);

    // -------------------------------------------------------------
    // Test 2: Walk into 1-tile crawlspace while standing (blocked),
    //         then crouch and crawl forward (permitted)
    // -------------------------------------------------------------
    // Move player right toward row 8 overhang (starts at x = 6 * 16 = 96)
    // Upright robot at x = 78 walking right tries to enter x = 96
    player.position.x = INT_TO_FP12_4(78);
    for (int i = 0; i < 20; ++i) {
        player_update(&player, INPUT_RIGHT, &tilemap);
    }

    // With upright height 32, box is y: 128..160. Ceiling is at y: 128..144.
    // Upright robot cannot penetrate x = 80 (since x + 16 would enter x=96).
    int16_t blocked_x = FP12_4_TO_INT(player.position.x);
    TEST_ASSERT(blocked_x <= 80);
    printf("[PASS] Test 2a: Standing robot blocked at crawlspace entrance (x=%d <= 80)\n", blocked_x);

    // Now press DOWN + RIGHT to crouch and crawl forward
    for (int i = 0; i < 40; ++i) {
        player_update(&player, INPUT_DOWN | INPUT_RIGHT, &tilemap);
    }

    int16_t crawled_x = FP12_4_TO_INT(player.position.x);
    TEST_ASSERT(crawled_x > 96);
    TEST_ASSERT(player.crouching == 1);
    printf("[PASS] Test 2b: Crouched robot crawled inside 1-tile gap to x=%d\n", crawled_x);

    // While inside the crawlspace, release DOWN and try to uncrouch
    player_update(&player, INPUT_NONE, &tilemap);
    TEST_ASSERT(player.crouching == 1); // Forced to stay crouching due to solid overhead ceiling!
    printf("[PASS] Test 2c: Robot forced to remain crouched under low ceiling\n");

    // -------------------------------------------------------------
    // Test 3: Attempt transformation to Jet inside crawlspace (blocked);
    //         exit crawlspace and transform (succeeds)
    // -------------------------------------------------------------
    // Attempt transform inside 1-tile gap
    bool can_transform_inside = player_can_transform(&player, &tilemap);
    TEST_ASSERT(!can_transform_inside);

    player_update(&player, INPUT_TRANSFORM, &tilemap);
    TEST_ASSERT(player.mode == PLAYER_MODE_ROBOT_CROUCH || player.mode == PLAYER_MODE_ROBOT_STAND);
    TEST_ASSERT(player.morph_timer == 0);
    printf("[PASS] Test 3a: Transformation correctly rejected inside 1-tile crawlspace\n");

    // Crawl out past the overhang (overhang ends at x = 13 * 16 = 208)
    for (int i = 0; i < 150; ++i) {
        player_update(&player, INPUT_DOWN | INPUT_RIGHT, &tilemap);
    }

    // Release down in open space
    player_update(&player, INPUT_NONE, &tilemap);
    TEST_ASSERT(player.crouching == 0);

    // Now transform to Jet
    bool can_transform_outside = player_can_transform(&player, &tilemap);
    TEST_ASSERT(can_transform_outside);

    player_update(&player, INPUT_TRANSFORM, &tilemap);
    TEST_ASSERT(player.morph_timer > 0);

    // Let morph animation finish (4 ticks)
    for (int i = 0; i < 5; ++i) {
        player_update(&player, INPUT_NONE, &tilemap);
    }
    TEST_ASSERT(player.mode == PLAYER_MODE_JET_FLY);
    printf("[PASS] Test 3b: Successfully transformed to Jet mode in open area\n");

    // Test Jet 8-way momentum flight
    for (int i = 0; i < 10; ++i) {
        player_update(&player, INPUT_UP | INPUT_RIGHT, &tilemap);
    }
    TEST_ASSERT(player.velocity.x > 0);
    TEST_ASSERT(player.velocity.y < 0);
    printf("[PASS] Test 3c: Jet 8-way momentum flight verified\n");

    printf("=== All M4.3 Kinematics & Collision Tests PASSED ===\n");
    return 0;
}
