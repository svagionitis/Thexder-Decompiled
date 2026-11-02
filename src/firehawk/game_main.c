/// @file game_main.c
/// @brief Master game lifecycle entry point, CRT bootstrap, and state machine transitions.
/// @details Ghidra: FUN_1000_0016 (CRT init) and FUN_1000_0256 (state transition)

#include "game_main.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "actor/player.h"
#include "audio/audio_events.h"
#include "game_loop.h"
#include "render/font.h"
#include "render/renderer.h"
#include "resource/res_manager.h"
#include "system/hal_vfs.h"
#include "types.h"
#include "ui/hud.h"

bool game_main_init(const char* asset_root)
{
    if (asset_root != NULL) {
        hal_vfs_set_asset_root(asset_root);
    }

    if (!res_manager_init()) {
        return false;
    }

    audio_events_init();
    return true;
}

void game_main_shutdown(void)
{
    audio_events_stop_music();
    res_manager_shutdown();
}

void game_set_state(game_context_t* ctx, game_state_t new_state)
{
    if (ctx == NULL) {
        return;
    }

    ctx->state = new_state;

    switch (new_state) {
    case STATE_TITLE:
        audio_events_play_music(0);
        break;

    case STATE_STAGE_PLAY:
        game_loop_init_stage(ctx, ctx->current_stage, ctx->current_sub_stage);
        break;

    case STATE_GAME_OVER:
        hud_set_message("GAME OVER");
        break;

    default:
        break;
    }
}

game_state_t game_get_state(const game_context_t* ctx)
{
    if (ctx == NULL) {
        return STATE_TITLE;
    }
    return ctx->state;
}

void game_main_step(game_context_t* ctx, uint16_t inputs, uint8_t* fb)
{
    if (ctx == NULL) {
        return;
    }

    switch (ctx->state) {
    case STATE_STAGE_PLAY:
        game_loop_tick(ctx, inputs, fb);
        break;

    case STATE_TITLE:
        if (fb != NULL) {
            renderer_clear(fb, 320, 200, 0);
            font_draw_string(fb, 320, 200, 80, 80, "FIREHAWK: THEXDER II", 14, ctx->font_data);
            font_draw_string(fb, 320, 200, 72, 110, "PRESS FIRE TO COMMENCE", 15, ctx->font_data);
            font_draw_string(fb, 320, 200, 64, 160, "(C) 1990 GAME ARTS / SIERRA", 7, ctx->font_data);
        }

        // Start game on action buttons
        if ((inputs & ((uint16_t)INPUT_FIRE_LASER | (uint16_t)INPUT_JUMP | (uint16_t)INPUT_TRANSFORM)) != 0) {
            ctx->current_stage = 0; // Practice / Stage 1
            ctx->current_sub_stage = 0;
            game_set_state(ctx, STATE_STAGE_PLAY);
        }
        break;

    case STATE_GAME_OVER:
        if (fb != NULL) {
            // Keep game world in background, overlay GAME OVER banner
            renderer_draw_tilemap(fb, 320, 200, &ctx->tilemap, 168);
            hud_render(fb, 320, 200, &ctx->player, ctx->font_data);
            font_draw_string(fb, 320, 200, 120, 80, "GAME OVER", 12, ctx->font_data);
            font_draw_string(fb, 320, 200, 80, 110, "PRESS FIRE TO CONTINUE", 14, ctx->font_data);
        }

        // Return to title on fire button
        if ((inputs & (uint16_t)INPUT_FIRE_LASER) != 0) {
            game_set_state(ctx, STATE_TITLE);
        }
        break;

    default:
        break;
    }
}
