#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "physics/collision.h"
#include "types.h"
#include "world/tilemap.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Input action bitmask queried each 60Hz tick
typedef enum player_input {
    INPUT_NONE = 0x0000,
    INPUT_LEFT = 0x0001,
    INPUT_RIGHT = 0x0002,
    INPUT_UP = 0x0004,
    INPUT_DOWN = 0x0008,
    INPUT_JUMP = 0x0010,
    INPUT_TRANSFORM = 0x0020,
    INPUT_FIRE_LASER = 0x0040,
    INPUT_FIRE_MISSILE = 0x0080,
    INPUT_SHIELD = 0x0100
} player_input_t;

/// @brief Player state tracking full morphological state and kinematics
/// @details Ghidra: DGROUP:1000_9200
typedef struct player_state {
    vector2d_t position; ///< 12.4 fixed-point world position
    vector2d_t velocity; ///< 12.4 fixed-point velocity delta per frame
    player_mode_t mode; ///< Current mode (Robot upright, walk, crouch, jump, jet, morph)
    direction_t facing; ///< Current facing orientation
    uint8_t morph_timer; ///< Countdown timer during morph animation
    uint8_t anim_frame; ///< Current animation frame index
    uint8_t grounded; ///< 1 if standing on solid floor, 0 if airborne
    uint8_t crouching; ///< 1 if crouched navigating 1-tile crawlspace
    energy_t energy; ///< Current main energy reservoir (0 to 5000)
    uint16_t max_energy; ///< Maximum energy capacity
    uint16_t shield_timer; ///< Active barrier shield duration ticks
    uint16_t normal_missiles; ///< Standard missile ammunition count
    uint16_t homing_missiles; ///< Homing missile ammunition count
    uint32_t score; ///< 32-bit score counter
} player_state_t;

/// @brief Initialize player state with default parameters and spawn point
/// @param player Pointer to player_state_t to initialize
/// @param spawn_pos 12.4 fixed-point spawn coordinates
void player_init(player_state_t* player, vector2d_t spawn_pos);

/// @brief Compute current axis-aligned bounding box based on player mode and coordinates
/// @param player Pointer to player_state_t
/// @return Calculated AABB in pixel coordinates
aabb_t player_get_hitbox(const player_state_t* player);

/// @brief Verify if spatial clearance permits transformation between modes
/// @param player Pointer to player_state_t
/// @param tilemap Pointer to active stage tilemap
/// @return true if clearance is available, false if blocked by solid tiles
bool player_can_transform(const player_state_t* player, const stage_tilemap_t* tilemap);

/// @brief Trigger morph transformation sequence between Robot and Jet modes
/// @details Ghidra: FUN_1000_0b84 (1000:0b84)
/// @param player Pointer to player_state_t
/// @param tilemap Pointer to active stage tilemap
void player_trigger_transform(player_state_t* player, const stage_tilemap_t* tilemap);

/// @brief Master 60Hz kinematics update (gravity, movement, crouch, flight, collisions)
/// @details Ghidra: FUN_1000_0a12 (1000:0a12)
/// @param player Pointer to player_state_t
/// @param inputs Bitmask of active player inputs for this tick
/// @param tilemap Pointer to active stage tilemap
void player_update(player_state_t* player, uint16_t inputs, const stage_tilemap_t* tilemap);

/// @brief Apply damage to player, considering active shield
/// @param player Pointer to player_state_t
/// @param damage Energy points to deduct
void player_apply_damage(player_state_t* player, uint16_t damage);

/// @brief Replenish player energy up to max_energy
/// @param player Pointer to player_state_t
/// @param amount Energy units to add
void player_recharge_energy(player_state_t* player, uint16_t amount);

#ifdef __cplusplus
}
#endif
