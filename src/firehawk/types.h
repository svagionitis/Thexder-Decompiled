#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Fixed-point 12.4 shift constant (16 sub-units per screen pixel)
#define FP12_4_SHIFT 4
#define FP12_4_ONE (1 << FP12_4_SHIFT)
#define FP12_4_HALF (1 << (FP12_4_SHIFT - 1))
#define FP12_4_TO_INT(v) ((int16_t)((v) >> FP12_4_SHIFT))
#define INT_TO_FP12_4(v) ((int16_t)((int16_t)(v) << FP12_4_SHIFT))

/// @brief 2D Vector using 12.4 fixed-point coordinates
typedef struct vector2d {
    int16_t x; ///< 12.4 fixed-point horizontal coordinate
    int16_t y; ///< 12.4 fixed-point vertical coordinate
} vector2d_t;

/// @brief 2D Axis-Aligned Bounding Box (AABB) in integer pixel units
typedef struct aabb {
    int16_t min_x; ///< Left coordinate (inclusive)
    int16_t min_y; ///< Top coordinate (inclusive)
    int16_t max_x; ///< Right coordinate (exclusive)
    int16_t max_y; ///< Bottom coordinate (exclusive)
} aabb_t;

/// @brief Master game states
typedef enum game_state {
    STATE_TITLE = 0x00, ///< Title splash, copyright, mode menu
    STATE_DEMO = 0x01, ///< Recorded attract gameplay playback
    STATE_INTRO = 0x02, ///< Carrier launch cinematic & mission briefing
    STATE_STAGE_PLAY = 0x03, ///< Active interactive gameplay loop
    STATE_STAGE_CLEAR = 0x04, ///< Mission accomplished, transit to next stage
    STATE_GAME_OVER = 0x05 ///< Destruction sequence & game over summary
} game_state_t;

/// @brief 8-way discrete facing orientation
typedef enum direction {
    DIR_LEFT = 0,
    DIR_RIGHT = 1,
    DIR_UP = 2,
    DIR_DOWN = 3,
    DIR_UP_LEFT = 4,
    DIR_UP_RIGHT = 5,
    DIR_DOWN_LEFT = 6,
    DIR_DOWN_RIGHT = 7
} direction_t;

/// @brief Player morphological and kinematics operational mode
typedef enum player_mode {
    PLAYER_MODE_ROBOT_STAND = 0x00, ///< Standing upright on solid ground
    PLAYER_MODE_ROBOT_WALK = 0x01, ///< Walking along ground surface
    PLAYER_MODE_ROBOT_JUMP = 0x02, ///< Airborne under gravity
    PLAYER_MODE_ROBOT_CROUCH = 0x03, ///< Crouched navigating 1-tile crawlspace
    PLAYER_MODE_JET_FLY = 0x04, ///< Free flight with thruster momentum
    PLAYER_MODE_MORPH_TO_JET = 0x05, ///< Transforming from Robot into Jet
    PLAYER_MODE_MORPH_TO_BOT = 0x06, ///< Transforming from Jet into Robot
    PLAYER_MODE_DEAD = 0x07 ///< Destroyed
} player_mode_t;

/// @brief Player energy measurement unit (0 to 5000)
typedef uint16_t energy_t;

#ifdef __cplusplus
}
#endif
