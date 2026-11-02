#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "actor/enemy_ai.h"
#include "actor/entities.h"
#include "actor/player.h"
#include "actor/weapons.h"
#include "audio/audio_events.h"
#include "render/font.h"
#include "render/renderer.h"
#include "types.h"
#include "ui/hud.h"
#include "ui/savegame.h"
#include "world/stage_loader.h"
#include "world/tilemap.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Master game context holding all engine subsystem state
typedef struct game_context {
    game_state_t state; ///< Current master game state
    stage_tilemap_t tilemap; ///< Active stage geometry
    player_state_t player; ///< Active player kinematics & morph
    weapon_system_t weapons; ///< Weapons and targeting systems
    entity_pool_t pool; ///< 64-slot dynamic entity pool
    savegame_state_t save; ///< Persistent save record
    uint8_t font_data[4096]; ///< REGFONT bitmap font sheet
    uint8_t stage_tiles[65536]; ///< Active stage tile index buffer
    uint16_t tile_attributes[256]; ///< Tile ID -> attribute bitmask table
    stage_spawner_t spawners[128]; ///< Active stage spawner table
    size_t spawner_count; ///< Total spawners in current stage
    uint8_t current_stage; ///< Current stage number (0 to 12)
    uint8_t current_sub_stage; ///< Current sub-stage (0, 1, 2)
    uint32_t frame_counter; ///< 60Hz tick simulation counter
} game_context_t;

/// @brief Initialize gameplay context for a specific stage
/// @param ctx Pointer to game_context_t
/// @param stage_num Stage number (0 to 12)
/// @param sub_stage Sub-stage index (0 to 2)
/// @return true on success, false if stage could not be loaded
bool game_loop_init_stage(game_context_t* ctx, uint8_t stage_num, uint8_t sub_stage);

/// @brief Execute single deterministic 60Hz frame simulation update and render dispatch
/// @details Ghidra: FUN_1000_0188 (1000:0188)
/// @param ctx Pointer to game context
/// @param inputs Bitmask of active player inputs for this tick
/// @param fb Destination 8-bit index framebuffer (320x200)
void game_loop_tick(game_context_t* ctx, uint16_t inputs, uint8_t* fb);

#ifdef __cplusplus
}
#endif
