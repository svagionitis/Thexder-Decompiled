/// @file game_loop.c
/// @brief Master 60Hz tick simulation dispatcher, input routing, and frame presentation.
/// @details Ghidra: FUN_1000_0188 (1000:0188)

#include "game_loop.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "actor/enemy_ai.h"
#include "actor/entities.h"
#include "actor/player.h"
#include "actor/weapons.h"
#include "audio/audio_events.h"
#include "physics/collision.h"
#include "render/font.h"
#include "render/renderer.h"
#include "resource/res_manager.h"
#include "types.h"
#include "ui/hud.h"
#include "world/stage_loader.h"
#include "world/tilemap.h"

bool game_loop_init_stage(game_context_t* ctx, uint8_t stage_num, uint8_t sub_stage)
{
    if (ctx == NULL) {
        return false;
    }

    memset(ctx, 0, sizeof(game_context_t));
    ctx->current_stage = stage_num;
    ctx->current_sub_stage = sub_stage;
    ctx->state = STATE_STAGE_PLAY;

    // Load REGFONT bitmap sheet
    size_t font_size = 0;
    res_manager_load_file("REGFONT", ctx->font_data, sizeof(ctx->font_data), &font_size, true);

    // Load stage geometry and spawners
    stage_header_t hdr = { 0 };
    if (!stage_loader_load_stage(stage_num, sub_stage, &ctx->tilemap, &hdr, ctx->spawners, 128, &ctx->spawner_count,
            ctx->stage_tiles, sizeof(ctx->stage_tiles))) {
        return false;
    }

    // Initialize subsystems
    vector2d_t p_spawn = { INT_TO_FP12_4(32), INT_TO_FP12_4(32) };
    player_init(&ctx->player, p_spawn);
    weapons_init(&ctx->weapons);
    entities_init(&ctx->pool);
    hud_init();

    char welcome_msg[64];
    snprintf(welcome_msg, sizeof(welcome_msg), "MISSION %u-%u ENGAGED", stage_num, sub_stage);
    hud_set_message(welcome_msg);

    audio_events_play_music(stage_num);

    return true;
}

void game_loop_tick(game_context_t* ctx, uint16_t inputs, uint8_t* fb)
{
    if (ctx == NULL) {
        return;
    }

    ctx->frame_counter++;

    if (ctx->state == STATE_STAGE_PLAY) {
        // 1. Player Kinematics & Transformation
        player_update(&ctx->player, inputs, &ctx->tilemap);

        // 2. Weapon Suite & Targeting
        weapons_update(&ctx->weapons, &ctx->player, &ctx->pool, &ctx->tilemap, inputs);

        // 3. Dynamic Entity AI Dispatch
        enemy_ai_update_all(&ctx->pool, &ctx->player, &ctx->tilemap);

        // 4. Inter-entity Collisions (Player vs Enemies)
        aabb_t p_box = player_get_hitbox(&ctx->player);
        for (size_t i = 0; i < MAX_ENTITIES; ++i) {
            entity_t* ent = &ctx->pool.slots[i];
            if (ent->active == 0) {
                continue;
            }

            // Damage player upon contact with enemy or bullet
            if (ent->type >= ENTITY_TYPE_ENEMY_GROUND && ent->type <= ENTITY_TYPE_PROJ_BULLET) {
                aabb_t e_box = entities_get_world_hitbox(ent);
                if (collision_aabb_intersects(&p_box, &e_box)) {
                    player_apply_damage(&ctx->player, 25);
                    audio_events_play_sfx(SFX_DAMAGE);

                    // Destroy projectile upon contact
                    if (ent->type == ENTITY_TYPE_PROJ_BULLET) {
                        entities_free(&ctx->pool, ent);
                    }
                }
            }
        }

        // 5. Spawner Activation & Viewport Culling
        entities_spawn_from_stage(&ctx->pool, ctx->spawners, ctx->spawner_count, ctx->tilemap.camera_pos, 320, 168);
        entities_cull_offscreen(&ctx->pool, ctx->tilemap.camera_pos, 320, 168);

        // 6. Viewport Camera Tracking
        tilemap_update_cam(&ctx->tilemap, ctx->player.position, 320, 168);

        // 7. HUD Status Clock
        hud_update();

        // 8. Lifecycle Check (Player Destruction)
        if (ctx->player.energy == 0 || ctx->player.mode == PLAYER_MODE_DEAD) {
            ctx->state = STATE_GAME_OVER;
            hud_set_message("MISSION FAILED - THE END");
            audio_events_play_sfx(SFX_EXPLOSION);
        }
    }

    // 9. Frame Presentation & Blitting
    if (fb != NULL) {
        renderer_clear(fb, 320, 200, 0);
        renderer_draw_tilemap(fb, 320, 200, &ctx->tilemap, 168);
        renderer_draw_entities(fb, 320, 200, &ctx->pool, ctx->tilemap.camera_pos);
        renderer_draw_player(fb, 320, 200, &ctx->player, ctx->tilemap.camera_pos);
        renderer_draw_laser(fb, 320, 200, &ctx->weapons.laser, ctx->tilemap.camera_pos);
        renderer_draw_barrier(fb, 320, 200, &ctx->player, ctx->tilemap.camera_pos);
        hud_render(fb, 320, 200, &ctx->player, ctx->font_data);
    }
}
