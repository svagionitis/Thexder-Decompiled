/// @file enemy_ai.c
/// @brief Enemy behavior dispatch table, ground patrollers, airborne swarmers, and boss AI.
/// @details Ghidra: FUN_1000_14c0 (1000:14c0)

#include "actor/enemy_ai.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#include "actor/entities.h"
#include "actor/player.h"
#include "physics/collision.h"
#include "types.h"
#include "world/tilemap.h"

void ai_patroller_ground(entity_t* ent, const stage_tilemap_t* tilemap)
{
    if (ent == NULL || tilemap == NULL) {
        return;
    }

    if (ent->velocity.x == 0) {
        ent->velocity.x = INT_TO_FP12_4(1); // Default rightward walk
    }

    int16_t dx = FP12_4_TO_INT(ent->velocity.x);
    aabb_t box = entities_get_world_hitbox(ent);
    int16_t actual_dx = 0;

    bool wall_hit = collision_swept_move_x(tilemap, &box, dx, &actual_dx);
    ent->position.x = ent->position.x + INT_TO_FP12_4(actual_dx);

    // Reverse at wall collision
    if (wall_hit) {
        ent->velocity.x = -ent->velocity.x;
        return;
    }

    // Edge-of-platform detection: check tile below front foot
    int16_t ex = FP12_4_TO_INT(ent->position.x);
    int16_t ey = FP12_4_TO_INT(ent->position.y);
    int16_t check_x = (ent->velocity.x > 0) ? (int16_t)(ex + 16) : (int16_t)(ex - 1);
    int16_t check_y = (int16_t)(ey + 17);

    int16_t tx = (int16_t)(check_x >> TILE_SHIFT);
    int16_t ty = (int16_t)(check_y >> TILE_SHIFT);

    if (!tilemap_is_solid(tilemap, tx, ty)) {
        // Reached platform edge; turn around
        ent->velocity.x = -ent->velocity.x;
    }
}

void ai_flyer_swarmer(entity_t* ent, const player_state_t* player)
{
    if (ent == NULL || player == NULL) {
        return;
    }

    ent->timer++;

    int16_t ex = FP12_4_TO_INT(ent->position.x);
    int16_t ey = FP12_4_TO_INT(ent->position.y);
    int16_t px = FP12_4_TO_INT(player->position.x);
    int16_t py = FP12_4_TO_INT(player->position.y);

    // Horizontal drift towards player
    int16_t dir_x = (ex < px) ? 1 : -1;
    ent->velocity.x = INT_TO_FP12_4(dir_x);

    // Sinusoidal vertical bobbing
    // 32-tick cycle: first 16 ticks drift down, next 16 ticks drift up
    uint8_t cycle = (uint8_t)(ent->timer & 31);
    int32_t wave_y = (cycle < 16) ? 1 : -1;

    // Bias towards player's vertical elevation
    if (ey < py - 20) {
        wave_y = 1;
    } else if (ey > py + 20) {
        wave_y = -1;
    }

    ent->velocity.y = wave_y * (FP12_4_ONE / 2);
    ent->position.x = ent->position.x + ent->velocity.x;
    ent->position.y = ent->position.y + ent->velocity.y;
}

void ai_stationary_turret(entity_t* ent, const player_state_t* player, entity_pool_t* pool)
{
    if (ent == NULL || player == NULL || pool == NULL) {
        return;
    }

    ent->timer++;

    // Fire every 60 frames (1 second)
    const uint16_t TURRET_INTERVAL = 60;
    if (ent->timer >= TURRET_INTERVAL) {
        ent->timer = 0;

        int16_t ex = FP12_4_TO_INT(ent->position.x);
        int16_t ey = FP12_4_TO_INT(ent->position.y);
        int16_t px = FP12_4_TO_INT(player->position.x);

        int32_t bullet_dx = (ex < px) ? INT_TO_FP12_4(3) : -INT_TO_FP12_4(3);
        vector2d_t bpos = { INT_TO_FP12_4(ex + 8), INT_TO_FP12_4(ey + 4) };

        entity_t* bullet = entities_alloc(pool, ENTITY_TYPE_PROJ_BULLET, bpos);
        if (bullet != NULL) {
            bullet->velocity.x = bullet_dx;
            bullet->velocity.y = 0;
            bullet->health = 1;
            bullet->timer = 90; // 1.5 second lifetime
        }
    }
}

void ai_boss_stage(entity_t* ent, const player_state_t* player, entity_pool_t* pool)
{
    if (ent == NULL || player == NULL) {
        return;
    }

    ent->timer++;

    // Multi-phase boss logic based on state
    switch (ent->state) {
    case 0: // Hover & observe
        if (ent->timer > 120) {
            ent->state = 1; // Transition to charge
            ent->timer = 0;
            int16_t ex = FP12_4_TO_INT(ent->position.x);
            int16_t px = FP12_4_TO_INT(player->position.x);
            ent->velocity.x = (ex < px) ? INT_TO_FP12_4(4) : -INT_TO_FP12_4(4);
            ent->velocity.y = 0;
        }
        break;

    case 1: // Charge attack
        ent->position.x = ent->position.x + ent->velocity.x;
        if (ent->timer > 45) {
            ent->state = 2; // Transition to barrage
            ent->timer = 0;
            ent->velocity.x = 0;
        }
        break;

    case 2: // Projectile barrage
        if ((ent->timer % 15) == 0 && pool != NULL) {
            int16_t ex = FP12_4_TO_INT(ent->position.x);
            int16_t ey = FP12_4_TO_INT(ent->position.y);
            vector2d_t bpos = { INT_TO_FP12_4(ex + 8), INT_TO_FP12_4(ey + 16) };
            entity_t* bullet = entities_alloc(pool, ENTITY_TYPE_PROJ_BULLET, bpos);
            if (bullet != NULL) {
                bullet->velocity.x = INT_TO_FP12_4(-2);
                bullet->velocity.y = INT_TO_FP12_4(2);
                bullet->timer = 60;
            }
        }
        if (ent->timer > 60) {
            ent->state = 0; // Return to hover
            ent->timer = 0;
        }
        break;

    default:
        ent->state = 0;
        ent->timer = 0;
        break;
    }
}

static void update_projectile(entity_t* proj, entity_pool_t* pool, const stage_tilemap_t* tilemap)
{
    if (proj == NULL || pool == NULL) {
        return;
    }

    if (proj->timer > 0) {
        proj->timer--;
        if (proj->timer == 0) {
            entities_free(pool, proj);
            return;
        }
    }

    // Move projectile
    int16_t dx = FP12_4_TO_INT(proj->velocity.x);
    int16_t dy = FP12_4_TO_INT(proj->velocity.y);
    aabb_t box = entities_get_world_hitbox(proj);

    int16_t actual_dx = 0;
    int16_t actual_dy = 0;

    if (tilemap != NULL) {
        bool hit_x = collision_swept_move_x(tilemap, &box, dx, &actual_dx);
        bool hit_y = collision_swept_move_y(tilemap, &box, dy, &actual_dy);

        if (hit_x || hit_y) {
            // Hit a solid tile; despawn projectile
            entities_free(pool, proj);
            return;
        }
    } else {
        actual_dx = dx;
        actual_dy = dy;
    }

    proj->position.x = proj->position.x + INT_TO_FP12_4(actual_dx);
    proj->position.y = proj->position.y + INT_TO_FP12_4(actual_dy);
}

void enemy_ai_update_all(entity_pool_t* pool, const player_state_t* player, const stage_tilemap_t* tilemap)
{
    if (pool == NULL) {
        return;
    }

    for (size_t i = 0; i < MAX_ENTITIES; ++i) {
        entity_t* ent = &pool->slots[i];
        if (ent->active == 0) {
            continue;
        }

        if (ent->flash_timer > 0) {
            ent->flash_timer--;
        }

        switch (ent->type) {
        case ENTITY_TYPE_ENEMY_GROUND:
            ai_patroller_ground(ent, tilemap);
            break;

        case ENTITY_TYPE_ENEMY_FLYER:
            ai_flyer_swarmer(ent, player);
            break;

        case ENTITY_TYPE_ENEMY_TURRET:
            ai_stationary_turret(ent, player, pool);
            break;

        case ENTITY_TYPE_ENEMY_BOSS:
            ai_boss_stage(ent, player, pool);
            break;

        case ENTITY_TYPE_PROJ_BULLET:
        case ENTITY_TYPE_PROJ_MISSILE:
            update_projectile(ent, pool, tilemap);
            break;

        default:
            break;
        }
    }
}
