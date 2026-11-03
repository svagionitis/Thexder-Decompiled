/// @file test_collision.c
/// @brief Automated verification suite for Firehawk swept AABB collision and raycasting (M5.1).

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

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

static void test_aabb_intersection(void)
{
    printf("  Testing AABB intersection logic...\n");

    aabb_t box_a = { .min_x = 10, .min_y = 10, .max_x = 26, .max_y = 42 }; // 16x32 box
    aabb_t box_b = { .min_x = 20, .min_y = 20, .max_x = 36, .max_y = 36 }; // overlapping box
    aabb_t box_c = { .min_x = 26, .min_y = 10, .max_x = 42, .max_y = 42 }; // touching edge (x=26)
    aabb_t box_d = { .min_x = 50, .min_y = 50, .max_x = 66, .max_y = 66 }; // completely disjoint

    // Overlapping boxes must intersect
    TEST_ASSERT(collision_aabb_intersects(&box_a, &box_b) == true);
    TEST_ASSERT(collision_aabb_intersects(&box_b, &box_a) == true);

    // Touching borders are exclusive (not overlapping)
    TEST_ASSERT(collision_aabb_intersects(&box_a, &box_c) == false);
    TEST_ASSERT(collision_aabb_intersects(&box_c, &box_a) == false);

    // Completely disjoint
    TEST_ASSERT(collision_aabb_intersects(&box_a, &box_d) == false);

    // Null safety
    TEST_ASSERT(collision_aabb_intersects(NULL, &box_a) == false);
    TEST_ASSERT(collision_aabb_intersects(&box_a, NULL) == false);
}

static void test_tile_aabb_checking(void)
{
    printf("  Testing tile grid AABB collision checks...\n");

    const uint16_t MAP_W = 10;
    const uint16_t MAP_H = 10;
    uint8_t tiles[100] = { 0 };
    uint16_t attr[256] = { 0 };
    attr[0] = TILE_FLAG_EMPTY;
    attr[1] = TILE_FLAG_SOLID;
    attr[2] = TILE_FLAG_LAVA_HAZARD;

    // Set tile (3, 3) = solid, tile (5, 5) = hazard
    tiles[3 * MAP_W + 3] = 1;
    tiles[5 * MAP_W + 5] = 2;

    stage_tilemap_t map = { 0 };
    tilemap_init(&map, 1, MAP_W, MAP_H, tiles, attr);

    // Box inside empty area (x: 0..16, y: 0..16) -> tile (0, 0)
    aabb_t empty_box = { .min_x = 0, .min_y = 0, .max_x = 16, .max_y = 16 };
    TEST_ASSERT(collision_check_tile_aabb(&map, &empty_box, TILE_FLAG_SOLID) == false);
    TEST_ASSERT(collision_check_tile_aabb(&map, &empty_box, TILE_FLAG_LAVA_HAZARD) == false);

    // Box overlapping solid tile at (3, 3) -> pixel coords (48, 48) to (64, 64)
    aabb_t solid_box = { .min_x = 40, .min_y = 40, .max_x = 56, .max_y = 56 };
    TEST_ASSERT(collision_check_tile_aabb(&map, &solid_box, TILE_FLAG_SOLID) == true);
    TEST_ASSERT(collision_check_tile_aabb(&map, &solid_box, TILE_FLAG_LAVA_HAZARD) == false);

    // Box overlapping hazard tile at (5, 5) -> pixel coords (80, 80) to (96, 96)
    aabb_t hazard_box = { .min_x = 85, .min_y = 85, .max_x = 95, .max_y = 95 };
    TEST_ASSERT(collision_check_tile_aabb(&map, &hazard_box, TILE_FLAG_SOLID) == false);
    TEST_ASSERT(collision_check_tile_aabb(&map, &hazard_box, TILE_FLAG_LAVA_HAZARD) == true);
}

static void test_swept_movement_x(void)
{
    printf("  Testing swept movement along X axis (tunneling prevention)...\n");

    const uint16_t MAP_W = 16;
    const uint16_t MAP_H = 16;
    uint8_t tiles[256] = { 0 };
    uint16_t attr[256] = { 0 };
    attr[0] = TILE_FLAG_EMPTY;
    attr[1] = TILE_FLAG_SOLID;

    // Solid wall at column 5: x = 5 * 16 = 80
    for (uint16_t y = 0; y < MAP_H; ++y) {
        tiles[y * MAP_W + 5] = 1;
    }

    stage_tilemap_t map = { 0 };
    tilemap_init(&map, 1, MAP_W, MAP_H, tiles, attr);

    // Player box at x = [50..66], y = [16..32] (width 16, height 16)
    // Distance to wall (x=80) is 80 - 66 = 14 pixels
    aabb_t box = { .min_x = 50, .min_y = 16, .max_x = 66, .max_y = 32 };
    int16_t actual_dx = 0;

    // Attempt high speed movement: dx = 50 pixels to the right (would tunnel past wall if not swept)
    bool collided = collision_swept_move_x(&map, &box, 50, &actual_dx);

    TEST_ASSERT(collided == true);
    TEST_ASSERT(actual_dx == 14);
    TEST_ASSERT(box.max_x == 80);
    TEST_ASSERT(box.min_x == 64);

    // Attempt further right movement while touching wall -> must be blocked immediately
    collided = collision_swept_move_x(&map, &box, 10, &actual_dx);
    TEST_ASSERT(collided == true);
    TEST_ASSERT(actual_dx == 0);
    TEST_ASSERT(box.max_x == 80);

    // Free movement to the left away from wall
    collided = collision_swept_move_x(&map, &box, -20, &actual_dx);
    TEST_ASSERT(collided == false);
    TEST_ASSERT(actual_dx == -20);
    TEST_ASSERT(box.max_x == 60);
    TEST_ASSERT(box.min_x == 44);
}

static void test_swept_movement_y(void)
{
    printf("  Testing swept movement along Y axis (floor landing and ceiling collision)...\n");

    const uint16_t MAP_W = 16;
    const uint16_t MAP_H = 16;
    uint8_t tiles[256] = { 0 };
    uint16_t attr[256] = { 0 };
    attr[0] = TILE_FLAG_EMPTY;
    attr[1] = TILE_FLAG_SOLID;

    // Ceiling at row 2 (y = 32..48)
    // Floor at row 8 (y = 128..144)
    for (uint16_t x = 0; x < MAP_W; ++x) {
        tiles[2 * MAP_W + x] = 1;
        tiles[8 * MAP_W + x] = 1;
    }

    stage_tilemap_t map = { 0 };
    tilemap_init(&map, 1, MAP_W, MAP_H, tiles, attr);

    // Player box at x = [32..48], y = [60..92] (height 32)
    // Floor is at y = 128, distance to floor = 128 - 92 = 36 pixels
    aabb_t box = { .min_x = 32, .min_y = 60, .max_x = 48, .max_y = 92 };
    int16_t actual_dy = 0;

    // Fall downwards with high velocity: dy = 60 pixels
    bool collided = collision_swept_move_y(&map, &box, 60, &actual_dy);

    TEST_ASSERT(collided == true);
    TEST_ASSERT(actual_dy == 36);
    TEST_ASSERT(box.max_y == 128); // Landed exactly on floor
    TEST_ASSERT(box.min_y == 96);

    // Jump upwards towards ceiling (ceiling bottom is at y = 48)
    // Distance to ceiling = 96 - 48 = 48 pixels
    collided = collision_swept_move_y(&map, &box, -60, &actual_dy);
    TEST_ASSERT(collided == true);
    TEST_ASSERT(actual_dy == -48);
    TEST_ASSERT(box.min_y == 48); // Hit ceiling underside
    TEST_ASSERT(box.max_y == 80);
}

static void test_crouch_gap_navigation(void)
{
    printf("  Testing 1-tile crawlspace crouch navigation...\n");

    const uint16_t MAP_W = 20;
    const uint16_t MAP_H = 10;
    uint8_t tiles[200] = { 0 };
    uint16_t attr[256] = { 0 };
    attr[0] = TILE_FLAG_EMPTY;
    attr[1] = TILE_FLAG_SOLID;

    // Floor at row 5 (y = 80)
    for (uint16_t x = 0; x < MAP_W; ++x) {
        tiles[5 * MAP_W + x] = 1;
    }

    // Low ceiling at row 3 (y = 48..64) across x = 4..10
    // Crawlspace height: from y = 64 (ceiling bottom) to y = 80 (floor top) = 16 pixels
    for (uint16_t x = 4; x <= 10; ++x) {
        tiles[3 * MAP_W + x] = 1;
    }

    stage_tilemap_t map = { 0 };
    tilemap_init(&map, 1, MAP_W, MAP_H, tiles, attr);

    // Standing robot (16x32) at x = 16, y = [48..80]
    aabb_t standing_box = { .min_x = 16, .min_y = 48, .max_x = 32, .max_y = 80 };
    int16_t actual_dx = 0;

    // Moving right towards low ceiling at x = 64 (col 4 * 16)
    // Distance = 64 - 32 = 32 pixels
    bool collided = collision_swept_move_x(&map, &standing_box, 48, &actual_dx);
    TEST_ASSERT(collided == true);
    TEST_ASSERT(actual_dx == 32);
    TEST_ASSERT(standing_box.max_x == 64); // Blocked by row 3 ceiling edge

    // Crouching robot (16x16) at x = 16, y = [64..80] (fits within 16px crawlspace)
    aabb_t crouch_box = { .min_x = 16, .min_y = 64, .max_x = 32, .max_y = 80 };
    collided = collision_swept_move_x(&map, &crouch_box, 100, &actual_dx);
    TEST_ASSERT(collided == false); // Navigates freely through 1-tile gap!
    TEST_ASSERT(actual_dx == 100);
    TEST_ASSERT(crouch_box.min_x == 116);
}

static void test_line_raycast(void)
{
    printf("  Testing Bresenham line-of-sight raycasting...\n");

    const uint16_t MAP_W = 16;
    const uint16_t MAP_H = 16;
    uint8_t tiles[256] = { 0 };
    uint16_t attr[256] = { 0 };
    attr[0] = TILE_FLAG_EMPTY;
    attr[1] = TILE_FLAG_SOLID;

    // Solid pillar at tile (5, 5) -> x: 80..96, y: 80..96
    tiles[5 * MAP_W + 5] = 1;

    stage_tilemap_t map = { 0 };
    tilemap_init(&map, 1, MAP_W, MAP_H, tiles, attr);

    // Clear horizontal ray passing above pillar (y = 60, x: 20 -> 140)
    bool blocked = collision_line_obstructed(&map, 20, 60, 140, 60, TILE_FLAG_SOLID);
    TEST_ASSERT(blocked == false);

    // Ray passing directly through pillar at (88, 88)
    blocked = collision_line_obstructed(&map, 20, 88, 140, 88, TILE_FLAG_SOLID);
    TEST_ASSERT(blocked == true);

    // Diagonal ray passing through pillar
    blocked = collision_line_obstructed(&map, 20, 20, 140, 140, TILE_FLAG_SOLID);
    TEST_ASSERT(blocked == true);

    // Diagonal ray passing through corner (80, 80) of pillar
    blocked = collision_line_obstructed(&map, 20, 140, 140, 20, TILE_FLAG_SOLID);
    TEST_ASSERT(blocked == true);

    // Diagonal ray clearly missing pillar (stays in region x <= 60, y <= 60)
    blocked = collision_line_obstructed(&map, 10, 60, 60, 10, TILE_FLAG_SOLID);
    TEST_ASSERT(blocked == false);
}

int main(void)
{
    printf("=== Test: Firehawk Swept AABB Collision & Raycasting (M5.1) ===\n");

    test_aabb_intersection();
    test_tile_aabb_checking();
    test_swept_movement_x();
    test_swept_movement_y();
    test_crouch_gap_navigation();
    test_line_raycast();

    printf("=== All M5.1 Collision Verification Tests PASSED ===\n");
    return 0;
}