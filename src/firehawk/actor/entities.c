/// @file entities.c
/// @brief 64-slot static dynamic entity pool allocator, recycling, and lifetime management.
/// @details Ghidra: FUN_1000_14c0 (pool update) and FUN_1000_1688 (slot allocator)

#include "actor/entities.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "types.h"
#include "world/stage_loader.h"

void entities_init(entity_pool_t* pool)
{
    if (pool == NULL) {
        return;
    }

    memset(pool, 0, sizeof(entity_pool_t));
}

entity_t* entities_alloc(entity_pool_t* pool, entity_type_t type, vector2d_t pos)
{
    if (pool == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < MAX_ENTITIES; ++i) {
        if (pool->slots[i].active == 0) {
            entity_t* ent = &pool->slots[i];
            memset(ent, 0, sizeof(entity_t));
            ent->active = 1;
            ent->type = type;
            ent->position = pos;

            // Default hitbox 16x16
            ent->hitbox.min_x = 0;
            ent->hitbox.min_y = 0;
            ent->hitbox.max_x = 16;
            ent->hitbox.max_y = 16;
            ent->health = 10;

            pool->active_count++;
            return ent;
        }
    }

    return NULL; // Pool is full (overflow protection)
}

void entities_free(entity_pool_t* pool, entity_t* ent)
{
    if (pool == NULL || ent == NULL) {
        return;
    }

    if (ent->active != 0) {
        ent->active = 0;
        if (pool->active_count > 0) {
            pool->active_count--;
        }
    }
}

aabb_t entities_get_world_hitbox(const entity_t* ent)
{
    aabb_t box = { 0, 0, 16, 16 };
    if (ent == NULL) {
        return box;
    }

    int16_t px = FP12_4_TO_INT(ent->position.x);
    int16_t py = FP12_4_TO_INT(ent->position.y);

    box.min_x = (int16_t)(px + ent->hitbox.min_x);
    box.max_x = (int16_t)(px + ent->hitbox.max_x);
    box.min_y = (int16_t)(py + ent->hitbox.min_y);
    box.max_y = (int16_t)(py + ent->hitbox.max_y);
    return box;
}

void entities_cull_offscreen(entity_pool_t* pool, vector2d_t cam_pos, int16_t view_w, int16_t view_h)
{
    if (pool == NULL) {
        return;
    }

    int16_t cx = FP12_4_TO_INT(cam_pos.x);
    int16_t cy = FP12_4_TO_INT(cam_pos.y);

    const int16_t MARGIN = 64;
    int16_t left_bound = (int16_t)(cx - MARGIN);
    int16_t right_bound = (int16_t)(cx + view_w + MARGIN);
    int16_t top_bound = (int16_t)(cy - MARGIN);
    int16_t bottom_bound = (int16_t)(cy + view_h + MARGIN);

    for (size_t i = 0; i < MAX_ENTITIES; ++i) {
        entity_t* ent = &pool->slots[i];
        if (ent->active == 0) {
            continue;
        }

        // Never cull bosses or active laser segments
        if (ent->type == ENTITY_TYPE_ENEMY_BOSS || ent->type == ENTITY_TYPE_PROJ_LASER_SEG) {
            continue;
        }

        int16_t ex = FP12_4_TO_INT(ent->position.x);
        int16_t ey = FP12_4_TO_INT(ent->position.y);

        if (ex < left_bound || ex > right_bound || ey < top_bound || ey > bottom_bound) {
            entities_free(pool, ent);
        }
    }
}

void entities_spawn_from_stage(entity_pool_t* pool, const stage_spawner_t* spawners, size_t spawner_count,
    vector2d_t cam_pos, int16_t view_w, int16_t view_h)
{
    if (pool == NULL || spawners == NULL) {
        return;
    }

    int16_t cx = FP12_4_TO_INT(cam_pos.x);
    int16_t cy = FP12_4_TO_INT(cam_pos.y);

    int16_t trigger_min_x = (int16_t)(cx - 32);
    int16_t trigger_max_x = (int16_t)(cx + view_w + 32);
    int16_t trigger_min_y = (int16_t)(cy - 32);
    int16_t trigger_max_y = (int16_t)(cy + view_h + 32);

    for (size_t i = 0; i < spawner_count; ++i) {
        int16_t sx = (int16_t)spawners[i].x;
        int16_t sy = (int16_t)spawners[i].y;

        if (sx >= trigger_min_x && sx <= trigger_max_x && sy >= trigger_min_y && sy <= trigger_max_y) {
            // Map spawner enemy_type byte to archetype
            entity_type_t etype = ENTITY_TYPE_ENEMY_GROUND;
            if (spawners[i].enemy_type == 1) {
                etype = ENTITY_TYPE_ENEMY_GROUND;
            } else if (spawners[i].enemy_type == 2 || (spawners[i].flags & 2) != 0) {
                etype = ENTITY_TYPE_ENEMY_FLYER;
            } else if (spawners[i].enemy_type >= 0xC0) {
                etype = ENTITY_TYPE_ENEMY_TURRET;
            }

            vector2d_t spos = { INT_TO_FP12_4(sx), INT_TO_FP12_4(sy) };
            entity_t* e = entities_alloc(pool, etype, spos);
            if (e != NULL) {
                e->sub_type = spawners[i].extra;
                e->flags = spawners[i].flags;
            }
        }
    }
}
