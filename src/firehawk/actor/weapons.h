#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "actor/entities.h"
#include "actor/player.h"
#include "types.h"
#include "world/tilemap.h"

#ifdef __cplusplus
extern "C" {
#endif

#define LASER_ENERGY_DRAIN 2
#define SHIELD_ENERGY_COST 50
#define SHIELD_DURATION_TICKS 180
#define LASER_MAX_RANGE 160

/// @brief Active laser beam geometry and lock-on state
typedef struct laser_beam {
    uint8_t active; ///< 1 if beam is active this frame, 0 otherwise
    vector2d_t start; ///< World start coordinates (nozzle) in pixels
    vector2d_t end; ///< World end / hit coordinates in pixels
    int16_t locked_slot; ///< Entity pool slot index locked on (-1 if none)
} laser_beam_t;

/// @brief Master weapon system state
typedef struct weapon_system {
    laser_beam_t laser; ///< Current homing laser beam state
    uint8_t missile_cooldown; ///< Frame cooldown between missile launches
} weapon_system_t;

/// @brief Initialize weapon subsystem
/// @param weapons Pointer to weapon_system_t
void weapons_init(weapon_system_t* weapons);

/// @brief Find nearest visible enemy with unobstructed line-of-sight
/// @details Ghidra: FUN_1000_1042 (1000:1042)
/// @param pool Pointer to entity pool
/// @param tilemap Pointer to stage tilemap
/// @param origin Weapon origin / player center coordinates in pixels
/// @param max_range Maximum search radius in pixels
/// @param facing Aim direction of player
/// @return Index of closest valid entity slot in pool, or -1 if no target
int16_t weapons_find_target(const entity_pool_t* pool, const stage_tilemap_t* tilemap, vector2d_t origin,
    int16_t max_range, direction_t facing);

/// @brief Update homing laser targeting, beam rasterization, and continuous energy consumption
/// @details Ghidra: FUN_1000_1042 (1000:1042)
/// @param weapons Pointer to weapon system
/// @param player Pointer to player state
/// @param pool Pointer to entity pool
/// @param tilemap Pointer to stage tilemap
/// @param fire_button_down true if laser fire button is held down
void weapons_update_laser(weapon_system_t* weapons, player_state_t* player, entity_pool_t* pool,
    const stage_tilemap_t* tilemap, bool fire_button_down);

/// @brief Fire dumbfire or homing missile
/// @details Ghidra: FUN_1000_1218 (1000:1218)
/// @param weapons Pointer to weapon system
/// @param player Pointer to player state
/// @param pool Pointer to entity pool
/// @param homing true to launch homing missile, false for standard missile
/// @return true if missile launched, false if out of ammunition or on cooldown
bool weapons_fire_missile(weapon_system_t* weapons, player_state_t* player, entity_pool_t* pool, bool homing);

/// @brief Activate barrier energy shield
/// @details Ghidra: FUN_1000_1350 (1000:1350)
/// @param player Pointer to player state
/// @return true if shield activated, false if insufficient energy
bool weapons_activate_shield(player_state_t* player);

/// @brief Update weapon subsystem per 60Hz tick
/// @param weapons Pointer to weapon system
/// @param player Pointer to player state
/// @param pool Pointer to entity pool
/// @param tilemap Pointer to stage tilemap
/// @param inputs Player input bitmask
void weapons_update(weapon_system_t* weapons, player_state_t* player, entity_pool_t* pool,
    const stage_tilemap_t* tilemap, uint16_t inputs);

#ifdef __cplusplus
}
#endif
