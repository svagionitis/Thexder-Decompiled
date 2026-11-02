#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "game_loop.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Initialize master game engine and resource catalog
/// @details Ghidra: FUN_1000_0016 CRT setup and engine bootstrap
/// @param asset_root Path to assets/firehawk directory
/// @return true on success, false if required assets missing
bool game_main_init(const char* asset_root);

/// @brief Shutdown master game engine and release resource catalogs
void game_main_shutdown(void);

/// @brief Trigger state transition with screen clear
/// @details Ghidra: FUN_1000_0256 (1000:0256)
/// @param ctx Pointer to game context
/// @param new_state Target state (STATE_TITLE, DEMO, INTRO, STAGE_PLAY, STAGE_CLEAR, GAME_OVER)
void game_set_state(game_context_t* ctx, game_state_t new_state);

/// @brief Retrieve current game state
/// @param ctx Pointer to game context
/// @return Current game state
game_state_t game_get_state(const game_context_t* ctx);

/// @brief Master frame simulation step dispatched once per 60Hz tick
/// @param ctx Pointer to game context
/// @param inputs Bitmask of active player inputs for this tick
/// @param fb Pointer to 320x200 8-bit index framebuffer
void game_main_step(game_context_t* ctx, uint16_t inputs, uint8_t* fb);

#ifdef __cplusplus
}
#endif
