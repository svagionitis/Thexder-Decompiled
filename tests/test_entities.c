/// @file test_entities.c
/// @brief Automated verification test for Firehawk entity pool recycling and AI dispatch (M4.5).

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "actor/enemy_ai.h"
#include "actor/entities.h"
#include "actor/player.h"
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
    printf("=== Test: Firehawk Entity Pool & Enemy AI (M4.5) ===\n");

    entity_pool_t pool = { 0 };
    entities_init(&pool);
    TEST_ASSERT(pool.active_count == 0);

    // -------------------------------------------------------------
    // Test 1: 64-slot pool allocation and overflow protection
    // -------------------------------------------------------------
    vector2d_t pos = { INT_TO_FP12_4(10), INT_TO_FP12_4(20) };
    for (int i = 0; i < MAX_ENTITIES; ++i) {
        entity_t* ent = entities_alloc(&pool, ENTITY_TYPE_ENEMY_GROUND, pos);
        TEST_ASSERT(ent != NULL);
        TEST_ASSERT(ent->active == 1);
    }
    TEST_ASSERT(pool.active_count == 64);

    // 65th allocation must fail
    entity_t* overflow = entities_alloc(&pool, ENTITY_TYPE_ENEMY_GROUND, pos);
    TEST_ASSERT(overflow == NULL);
    printf("[PASS] Test 1: 64 slots allocated; 65th allocation correctly rejected (overflow protection)\n");

    // -------------------------------------------------------------
    // Test 2: Recycling and slot freeing
    // -------------------------------------------------------------
    // Free slot 10
    entities_free(&pool, &pool.slots[10]);
    TEST_ASSERT(pool.active_count == 63);
    TEST_ASSERT(pool.slots[10].active == 0);

    // Allocating again should reuse a free slot
    entity_t* reused = entities_alloc(&pool, ENTITY_TYPE_ENEMY_FLYER, pos);
    TEST_ASSERT(reused != NULL);
    TEST_ASSERT(reused == &pool.slots[10]);
    TEST_ASSERT(pool.active_count == 64);
    printf("[PASS] Test 2: Slot 10 freed and successfully recycled\n");

    // Clear pool for AI behavioral tests
    entities_init(&pool);

    // Construct test tilemap (20x20)
    // Floor at row 10 (x: 4..12) -> platform with edges at x=4 and x=12
    uint8_t tiles[400] = { 0 };
    uint16_t attr[256] = { 0 };
    attr[0] = TILE_FLAG_EMPTY;
    attr[1] = TILE_FLAG_SOLID;

    for (uint16_t x = 4; x <= 12; ++x) {
        tiles[10 * 20 + x] = 1;
    }
    // Wall at x = 12, row 9
    tiles[9 * 20 + 12] = 1;

    stage_tilemap_t tilemap = { 0 };
    tilemap_init(&tilemap, 1, 20, 20, tiles, attr);

    player_state_t player = { 0 };
    vector2d_t p_pos = { INT_TO_FP12_4(100), INT_TO_FP12_4(100) };
    player_init(&player, p_pos);

    // -------------------------------------------------------------
    // Test 3: Ground patroller AI reverses at wall and platform edge
    // -------------------------------------------------------------
    // Place patroller on platform walking right toward wall at x=12*16=192
    vector2d_t patrol_pos = { INT_TO_FP12_4(160), INT_TO_FP12_4(144) }; // y=144 sits on row 10 (160)
    entity_t* patroller = entities_alloc(&pool, ENTITY_TYPE_ENEMY_GROUND, patrol_pos);
    TEST_ASSERT(patroller != NULL);
    patroller->velocity.x = INT_TO_FP12_4(1);

    // Advance 40 frames into the wall
    for (int i = 0; i < 40; ++i) {
        ai_patroller_ground(patroller, &tilemap);
    }
    // Patroller must have hit wall and reversed to moving left!
    TEST_ASSERT(patroller->velocity.x < 0);
    printf("[PASS] Test 3a: Patroller collided with solid wall and reversed direction to left\n");

    // Advance patroller left until it reaches left edge of platform (x = 4 * 16 = 64)
    for (int i = 0; i < 150; ++i) {
        ai_patroller_ground(patroller, &tilemap);
    }
    // Reached platform edge; reversed to moving right again!
    TEST_ASSERT(patroller->velocity.x > 0);
    printf("[PASS] Test 3b: Patroller detected platform edge and reversed direction to right\n");

    // -------------------------------------------------------------
    // Test 4: Flyer AI sinusoidal tracking
    // -------------------------------------------------------------
    vector2d_t flyer_pos = { INT_TO_FP12_4(50), INT_TO_FP12_4(50) };
    entity_t* flyer = entities_alloc(&pool, ENTITY_TYPE_ENEMY_FLYER, flyer_pos);
    TEST_ASSERT(flyer != NULL);

    for (int i = 0; i < 20; ++i) {
        ai_flyer_swarmer(flyer, &player);
    }
    TEST_ASSERT(flyer->timer == 20);
    TEST_ASSERT(FP12_4_TO_INT(flyer->position.x) > 50); // Drifted right towards player (player at x=100)
    printf("[PASS] Test 4: Flyer moved horizontally toward player with wave oscillation\n");

    // -------------------------------------------------------------
    // Test 5: Stationary turret projectile firing
    // -------------------------------------------------------------
    vector2d_t turret_pos = { INT_TO_FP12_4(200), INT_TO_FP12_4(100) };
    entity_t* turret = entities_alloc(&pool, ENTITY_TYPE_ENEMY_TURRET, turret_pos);
    TEST_ASSERT(turret != NULL);

    size_t count_before_turret = pool.active_count;
    // Advance 60 frames to trigger bullet shot
    for (int i = 0; i < 61; ++i) {
        ai_stationary_turret(turret, &player, &pool);
    }
    TEST_ASSERT(pool.active_count == count_before_turret + 1);
    printf("[PASS] Test 5: Turret tracked player and spawned bullet projectile\n");

    // -------------------------------------------------------------
    // Test 6: Offscreen culling
    // -------------------------------------------------------------
    // Place an entity 200 pixels offscreen
    vector2d_t offscreen_pos = { INT_TO_FP12_4(800), INT_TO_FP12_4(800) };
    entity_t* far_enemy = entities_alloc(&pool, ENTITY_TYPE_ENEMY_GROUND, offscreen_pos);
    TEST_ASSERT(far_enemy != NULL);
    TEST_ASSERT(far_enemy->active == 1);

    vector2d_t cam_pos = { 0, 0 };
    entities_cull_offscreen(&pool, cam_pos, 320, 168);
    TEST_ASSERT(far_enemy->active == 0);
    printf("[PASS] Test 6: Offscreen entity culled beyond viewport margin\n");

    printf("=== All M4.5 Entity Pool & Enemy AI Tests PASSED ===\n");
    return 0;
}