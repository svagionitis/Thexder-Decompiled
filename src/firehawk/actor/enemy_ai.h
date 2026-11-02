#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "actor/entities.h"
#include "actor/player.h"
#include "world/tilemap.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Master AI dispatch table executing behavior routines for all active enemies
/// @details Ghidra: FUN_1000_14c0 (1000:14c0)
/// @param pool Pointer to entity pool
/// @param player Pointer to player state
/// @param tilemap Pointer to stage tilemap
void enemy_ai_update_all(entity_pool_t* pool, const player_state_t* player, const stage_tilemap_t* tilemap);

/// @brief Ground walking patroller AI (turns around at walls and platform edges)
/// @param ent Pointer to patroller entity
/// @param tilemap Pointer to stage tilemap
void ai_patroller_ground(entity_t* ent, const stage_tilemap_t* tilemap);

/// @brief Airborne flyer AI (sinusoidal homing flight toward player)
/// @param ent Pointer to flyer entity
/// @param player Pointer to player state
void ai_flyer_swarmer(entity_t* ent, const player_state_t* player);

/// @brief Stationary turret AI (tracking and projectile bursts)
/// @param ent Pointer to turret entity
/// @param player Pointer to player state
/// @param pool Pointer to entity pool for spawning bullets
void ai_stationary_turret(entity_t* ent, const player_state_t* player, entity_pool_t* pool);

/// @brief Stage boss multi-phase state machine
/// @param ent Pointer to boss entity
/// @param player Pointer to player state
/// @param pool Pointer to entity pool
void ai_boss_stage(entity_t* ent, const player_state_t* player, entity_pool_t* pool);

#ifdef __cplusplus
}
#endif
