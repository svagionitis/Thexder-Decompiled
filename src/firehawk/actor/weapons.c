/// @file weapons.c
/// @brief Homing laser targeting raycasts, missile guidance, and barrier shield management.
/// @details Ghidra: FUN_1000_1042 (laser), FUN_1000_1218 (missile), FUN_1000_1350 (shield)

#include "actor/weapons.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "actor/entities.h"
#include "actor/player.h"
#include "physics/collision.h"
#include "types.h"
#include "world/tilemap.h"

void weapons_init(weapon_system_t* weapons)
{
    if (weapons == NULL) {
        return;
    }

    memset(weapons, 0, sizeof(weapon_system_t));
    weapons->laser.locked_slot = -1;
    weapons->missile_cooldown = 0;
}

int16_t weapons_find_target(
    const entity_pool_t* pool, const stage_tilemap_t* tilemap, vector2d_t origin, int16_t max_range, direction_t facing)
{
    if (pool == NULL || tilemap == NULL) {
        return -1;
    }

    int32_t best_dist2 = (int32_t)max_range * (int32_t)max_range;
    int16_t best_slot = -1;

    for (size_t i = 0; i < MAX_ENTITIES; ++i) {
        const entity_t* ent = &pool->slots[i];
        if (ent->active == 0) {
            continue;
        }

        // Only target enemies
        if (ent->type < ENTITY_TYPE_ENEMY_GROUND || ent->type > ENTITY_TYPE_ENEMY_BOSS) {
            continue;
        }

        int16_t ex = (int16_t)(FP12_4_TO_INT(ent->position.x) + 8);
        int16_t ey = (int16_t)(FP12_4_TO_INT(ent->position.y) + 8);

        int16_t dx = (int16_t)(ex - origin.x);
        int16_t dy = (int16_t)(ey - origin.y);

        // Directional cone filter: prefer forward facing hemisphere
        if (facing == DIR_LEFT && dx > 8) {
            continue;
        }
        if (facing == DIR_RIGHT && dx < -8) {
            continue;
        }

        int32_t dist2 = (int32_t)dx * (int32_t)dx + (int32_t)dy * (int32_t)dy;
        if (dist2 > best_dist2) {
            continue;
        }

        // Raycast line of sight check against solid tiles
        if (collision_line_obstructed(tilemap, (int16_t)origin.x, (int16_t)origin.y, ex, ey, TILE_FLAG_SOLID)) {
            continue; // Line of sight is blocked by a solid wall!
        }

        best_dist2 = dist2;
        best_slot = (int16_t)i;
    }

    return best_slot;
}

void weapons_update_laser(weapon_system_t* weapons, player_state_t* player, entity_pool_t* pool,
    const stage_tilemap_t* tilemap, bool fire_button_down)
{
    if (weapons == NULL || player == NULL) {
        return;
    }

    if (!fire_button_down || player->energy < LASER_ENERGY_DRAIN) {
        weapons->laser.active = 0;
        weapons->laser.locked_slot = -1;
        return;
    }

    // Deduct 2 energy units per tick
    player->energy = (energy_t)(player->energy - LASER_ENERGY_DRAIN);
    weapons->laser.active = 1;

    // Laser origin from player center
    int16_t px = (int16_t)(FP12_4_TO_INT(player->position.x) + 8);
    int16_t py = (int16_t)(FP12_4_TO_INT(player->position.y) + 16);
    weapons->laser.start.x = px;
    weapons->laser.start.y = py;

    int16_t slot = weapons_find_target(pool, tilemap, weapons->laser.start, LASER_MAX_RANGE, player->facing);
    weapons->laser.locked_slot = slot;

    if (slot >= 0 && pool != NULL) {
        entity_t* target = &pool->slots[slot];
        weapons->laser.end.x = (int16_t)(FP12_4_TO_INT(target->position.x) + 8);
        weapons->laser.end.y = (int16_t)(FP12_4_TO_INT(target->position.y) + 8);

        // Continuous damage tick
        const uint16_t LASER_DAMAGE_TICK = 2;
        if (target->health > LASER_DAMAGE_TICK) {
            target->health = (uint16_t)(target->health - LASER_DAMAGE_TICK);
            target->flash_timer = 2;
        } else {
            target->health = 0;
            entities_free(pool, target);
            weapons->laser.locked_slot = -1;
            player->score += 100;
        }
    } else {
        // Straight beam in facing direction
        int16_t dir_x = (player->facing == DIR_LEFT) ? -1 : 1;
        weapons->laser.end.x = (int16_t)(px + dir_x * LASER_MAX_RANGE);
        weapons->laser.end.y = py;
    }
}

bool weapons_fire_missile(weapon_system_t* weapons, player_state_t* player, entity_pool_t* pool, bool homing)
{
    if (weapons == NULL || player == NULL || pool == NULL) {
        return false;
    }

    if (weapons->missile_cooldown > 0) {
        return false;
    }

    if (homing) {
        if (player->homing_missiles == 0) {
            return false;
        }
        player->homing_missiles--;
    } else {
        if (player->normal_missiles == 0) {
            return false;
        }
        player->normal_missiles--;
    }

    // Spawn missile entity
    int16_t px = (int16_t)(FP12_4_TO_INT(player->position.x) + ((player->facing == DIR_LEFT) ? -8 : 16));
    int16_t py = (int16_t)(FP12_4_TO_INT(player->position.y) + 12);
    vector2d_t mpos = { INT_TO_FP12_4(px), INT_TO_FP12_4(py) };

    entity_t* proj = entities_alloc(pool, ENTITY_TYPE_PROJ_MISSILE, mpos);
    if (proj != NULL) {
        proj->velocity.x = (player->facing == DIR_LEFT) ? -INT_TO_FP12_4(4) : INT_TO_FP12_4(4);
        proj->velocity.y = 0;
        proj->flags = homing ? (uint16_t)ENTITY_FLAG_HOMING : (uint16_t)ENTITY_FLAG_NONE;
        proj->health = 1;
        proj->timer = 120; // 2 second lifetime
    }

    weapons->missile_cooldown = 15; // Cooldown ticks between launches
    return true;
}

bool weapons_activate_shield(player_state_t* player)
{
    if (player == NULL) {
        return false;
    }

    if (player->energy < SHIELD_ENERGY_COST) {
        return false;
    }

    player->energy = (energy_t)(player->energy - SHIELD_ENERGY_COST);
    player->shield_timer = SHIELD_DURATION_TICKS;
    return true;
}

void weapons_update(weapon_system_t* weapons, player_state_t* player, entity_pool_t* pool,
    const stage_tilemap_t* tilemap, uint16_t inputs)
{
    if (weapons == NULL || player == NULL) {
        return;
    }

    if (weapons->missile_cooldown > 0) {
        weapons->missile_cooldown--;
    }

    // Shield toggle input
    if ((inputs & (uint16_t)INPUT_SHIELD) != 0 && player->shield_timer == 0) {
        weapons_activate_shield(player);
    }

    // Laser firing
    bool fire_laser = (inputs & (uint16_t)INPUT_FIRE_LASER) != 0;
    weapons_update_laser(weapons, player, pool, tilemap, fire_laser);

    // Missile launch
    if ((inputs & (uint16_t)INPUT_FIRE_MISSILE) != 0) {
        // Use homing missile if available, else normal missile
        if (player->homing_missiles > 0) {
            weapons_fire_missile(weapons, player, pool, true);
        } else if (player->normal_missiles > 0) {
            weapons_fire_missile(weapons, player, pool, false);
        }
    }
}
