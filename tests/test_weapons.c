/// @file test_weapons.c
/// @brief Automated verification test for Firehawk weapon targeting, raycasting, and energy drain (M4.4).

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "actor/entities.h"
#include "actor/player.h"
#include "actor/weapons.h"
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
    printf("=== Test: Firehawk Weapons & Combat Systems (M4.4) ===\n");

    // Construct 20x20 test map
    const uint16_t MAP_W = 20;
    const uint16_t MAP_H = 20;
    uint8_t tiles[400] = { 0 };
    uint16_t attr[256] = { 0 };
    attr[0] = TILE_FLAG_EMPTY;
    attr[1] = TILE_FLAG_SOLID;

    // Solid floor at row 10
    for (uint16_t x = 0; x < MAP_W; ++x) {
        tiles[10 * MAP_W + x] = 1;
    }

    // Solid wall at column 5 (x = 80) between row 4 and 9
    for (uint16_t y = 4; y < 10; ++y) {
        tiles[y * MAP_W + 5] = 1;
    }

    stage_tilemap_t tilemap = { 0 };
    tilemap_init(&tilemap, 1, MAP_W, MAP_H, tiles, attr);

    entity_pool_t pool = { 0 };
    entities_init(&pool);

    player_state_t player = { 0 };
    vector2d_t p_spawn = { INT_TO_FP12_4(32), INT_TO_FP12_4(128) };
    player_init(&player, p_spawn);
    player.energy = 1000;

    weapon_system_t weapons = { 0 };
    weapons_init(&weapons);

    // -------------------------------------------------------------
    // Test 1: Enemy behind solid wall (raycast line-of-sight occlusion)
    // -------------------------------------------------------------
    // Player is at x = 32. Wall is at x = 80. Enemy placed at x = 112 (behind wall).
    vector2d_t e_pos = { INT_TO_FP12_4(112), INT_TO_FP12_4(128) };
    entity_t* enemy = entities_alloc(&pool, ENTITY_TYPE_ENEMY_GROUND, e_pos);
    TEST_ASSERT(enemy != NULL);
    enemy->health = 20;

    // Fire laser with enemy behind wall
    weapons_update(&weapons, &player, &pool, &tilemap, INPUT_FIRE_LASER);

    // Verify: laser fired, but target NOT locked due to wall occlusion!
    TEST_ASSERT(weapons.laser.active == 1);
    TEST_ASSERT(weapons.laser.locked_slot == -1);
    TEST_ASSERT(player.energy == 998); // Exactly 2 units deducted
    TEST_ASSERT(enemy->health == 20); // Enemy took 0 damage
    printf("[PASS] Test 1: Laser raycast correctly blocked by solid wall; no lock-on\n");

    // -------------------------------------------------------------
    // Test 2: Clear line of sight (lock-on and energy drain rate)
    // -------------------------------------------------------------
    // Move enemy in front of wall at x = 60 (clear LOS from x = 32)
    enemy->position.x = INT_TO_FP12_4(60);

    // Fire laser for 5 consecutive ticks
    for (int tick = 0; tick < 5; ++tick) {
        weapons_update(&weapons, &player, &pool, &tilemap, INPUT_FIRE_LASER);
    }

    // Verify: locked onto enemy, 2 units/tick consumed (5 * 2 = 10 units)
    TEST_ASSERT(weapons.laser.active == 1);
    TEST_ASSERT(weapons.laser.locked_slot >= 0);
    TEST_ASSERT(player.energy == 988); // 998 - 10 = 988
    TEST_ASSERT(enemy->health == 10); // 20 - (5 * 2) = 10
    printf("[PASS] Test 2: Unobstructed laser locked on, enemy took damage, energy drained at 2 units/tick\n");

    // -------------------------------------------------------------
    // Test 3: Shield activation and damage absorption
    // -------------------------------------------------------------
    uint16_t energy_before_shield = player.energy;
    bool shield_ok = weapons_activate_shield(&player);
    TEST_ASSERT(shield_ok);
    TEST_ASSERT(player.energy == (energy_before_shield - SHIELD_ENERGY_COST));
    TEST_ASSERT(player.shield_timer == SHIELD_DURATION_TICKS);

    // While shield is active, apply damage to player
    player_apply_damage(&player, 500);
    TEST_ASSERT(player.energy == (energy_before_shield - SHIELD_ENERGY_COST)); // Absorbed!
    printf("[PASS] Test 3: Shield consumed 50 energy and absorbed damage completely\n");

    // -------------------------------------------------------------
    // Test 4: Missile firing and inventory deduction
    // -------------------------------------------------------------
    uint16_t missiles_before = player.normal_missiles;
    size_t active_entities_before = pool.active_count;

    bool fired = weapons_fire_missile(&weapons, &player, &pool, false);
    TEST_ASSERT(fired);
    TEST_ASSERT(player.normal_missiles == missiles_before - 1);
    TEST_ASSERT(pool.active_count == active_entities_before + 1);
    printf("[PASS] Test 4: Missile fired, inventory deducted, projectile entity spawned\n");

    printf("=== All M4.4 Weapons & Combat Tests PASSED ===\n");
    return 0;
}