#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "types.h"
#include "world/stage_loader.h"
#include "world/tilemap.h"

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_ENTITIES 64

/// @brief Entity classification archetype
typedef enum entity_type {
    ENTITY_TYPE_NONE = 0x00,
    ENTITY_TYPE_ENEMY_GROUND = 0x01,
    ENTITY_TYPE_ENEMY_FLYER = 0x02,
    ENTITY_TYPE_ENEMY_TURRET = 0x03,
    ENTITY_TYPE_ENEMY_BOSS = 0x04,
    ENTITY_TYPE_PROJ_BULLET = 0x10,
    ENTITY_TYPE_PROJ_MISSILE = 0x11,
    ENTITY_TYPE_PROJ_LASER_SEG = 0x12,
    ENTITY_TYPE_ITEM_CRYSTAL = 0x20,
    ENTITY_TYPE_ITEM_AMMO = 0x21,
    ENTITY_TYPE_EXPLOSION = 0x30
} entity_type_t;

/// @brief Entity flag bitmask
typedef enum entity_flags {
    ENTITY_FLAG_NONE = 0x0000,
    ENTITY_FLAG_SOLID = 0x0001,
    ENTITY_FLAG_FLYING = 0x0002,
    ENTITY_FLAG_HAZARD = 0x0004,
    ENTITY_FLAG_HOMING = 0x0008,
    ENTITY_FLAG_INVULNERABLE = 0x0010
} entity_flags_t;

/// @brief Active entity instance record in 64-slot pool
/// @details Ghidra: DGROUP:9200_BFFF (1000:9200)
typedef struct entity {
    uint8_t active; ///< 1 if slot is active, 0 if free
    entity_type_t type; ///< Archetype identifier
    uint8_t sub_type; ///< Variant or sprite index
    uint8_t state; ///< AI behavior state
    uint16_t flags; ///< Entity flag bitmask
    vector2d_t position; ///< 12.4 fixed-point world coordinates
    vector2d_t velocity; ///< 12.4 fixed-point velocity delta
    aabb_t hitbox; ///< Relative hitbox offset
    uint16_t health; ///< Remaining health points
    uint16_t timer; ///< State / animation timer countdown
    uint8_t anim_frame; ///< Current visual animation frame
    uint8_t flash_timer; ///< Damage hit flash counter
    uint16_t target_entity_id; ///< Target slot index for homing projectiles
} entity_t;

/// @brief Static entity pool management structure
typedef struct entity_pool {
    entity_t slots[MAX_ENTITIES]; ///< Fixed 64-slot entity array
    size_t active_count; ///< Current number of occupied slots
} entity_pool_t;

/// @brief Initialize entity pool, clearing all slots
void entities_init(entity_pool_t* pool);

/// @brief Allocate an inactive entity slot
/// @details Ghidra: FUN_1000_1688 (1000:1688)
/// @param pool Pointer to entity pool
/// @param type Entity archetype to instantiate
/// @param pos Initial 12.4 fixed-point coordinates
/// @return Pointer to allocated entity, or NULL if pool is full
entity_t* entities_alloc(entity_pool_t* pool, entity_type_t type, vector2d_t pos);

/// @brief Free an active entity slot
/// @param pool Pointer to entity pool
/// @param ent Pointer to entity to deactivate
void entities_free(entity_pool_t* pool, entity_t* ent);

/// @brief Retrieve absolute world AABB of an entity
/// @param ent Pointer to entity
/// @return Bounding box in pixel coordinates
aabb_t entities_get_world_hitbox(const entity_t* ent);

/// @brief Cull entities that have moved far outside viewport
/// @param pool Pointer to entity pool
/// @param cam_pos Camera top-left in 12.4 fixed-point
/// @param view_w Viewport width in pixels
/// @param view_h Viewport height in pixels
void entities_cull_offscreen(entity_pool_t* pool, vector2d_t cam_pos, int16_t view_w, int16_t view_h);

/// @brief Spawn stage entities when within activation range of camera viewport
/// @param pool Pointer to entity pool
/// @param spawners Array of stage spawners
/// @param spawner_count Total spawners in array
/// @param cam_pos Camera top-left in 12.4 fixed-point
/// @param view_w Viewport width in pixels
/// @param view_h Viewport height in pixels
void entities_spawn_from_stage(entity_pool_t* pool, const stage_spawner_t* spawners, size_t spawner_count,
    vector2d_t cam_pos, int16_t view_w, int16_t view_h);

#ifdef __cplusplus
}
#endif
