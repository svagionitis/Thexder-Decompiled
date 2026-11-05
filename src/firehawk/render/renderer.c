/// @file renderer.c
/// @brief Unified graphics pipeline, authentic tilemap blitter, mecha robot renderer, and laser rasterizer.
/// @details Ghidra: FUN_1000_1cb0 (tiles), FUN_1000_1e20 (sprites), FUN_1000_2014 (laser)

#include "render/renderer.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "actor/entities.h"
#include "actor/player.h"
#include "actor/weapons.h"
#include "render/robot_sprite_data.h"
#include "types.h"
#include "world/tilemap.h"

#define PLAYFIELD_X 32
#define PLAYFIELD_Y 32
#define PLAYFIELD_W 256
#define PLAYFIELD_H 128
#define PLAYFIELD_RIGHT (PLAYFIELD_X + PLAYFIELD_W)
#define PLAYFIELD_BOTTOM (PLAYFIELD_Y + PLAYFIELD_H)

void renderer_clear(uint8_t* fb, int16_t fb_w, int16_t fb_h, uint8_t color)
{
    if (fb == NULL || fb_w <= 0 || fb_h <= 0) {
        return;
    }
    memset(fb, color, (size_t)fb_w * (size_t)fb_h);
}

static inline void put_pixel(uint8_t* fb, int16_t fb_w, int16_t fb_h, int16_t px, int16_t py, uint8_t col)
{
    (void)fb_h;
    if (px >= PLAYFIELD_X && px < PLAYFIELD_RIGHT && py >= PLAYFIELD_Y && py < PLAYFIELD_BOTTOM && col != 0) {
        fb[(size_t)py * (size_t)fb_w + (size_t)px] = col;
    }
}

static inline uint8_t remap_tile_color(uint8_t color, uint8_t stage_num)
{
    // Stage 1 volcanic rock / magma color remap matching authentic DOSBox
    if (stage_num <= 1) {
        if (color == 3 || color == 11) {
            return 4; // Red
        }
        if (color == 5 || color == 13) {
            return 14; // Bright Yellow
        }
    }
    return color;
}

static void draw_8x8_tile(uint8_t* fb, int16_t fb_w, int16_t screen_x, int16_t screen_y, uint8_t tile_id,
    const uint8_t* stage_cg, size_t cg_len, uint8_t stage_num)
{
    if (tile_id == 0 || stage_cg == NULL) {
        return;
    }
    size_t off = (size_t)(tile_id - 1) * 32U;
    if (off + 32U > cg_len) {
        return;
    }

    for (int16_t y = 0; y < 8; ++y) {
        int16_t dest_y = (int16_t)(screen_y + y);
        if (dest_y < PLAYFIELD_Y || dest_y >= PLAYFIELD_BOTTOM) {
            continue;
        }

        size_t row_off = off + (size_t)y * 4U;
        uint8_t* fb_row = fb + (size_t)dest_y * (size_t)fb_w;

        for (int16_t bx = 0; bx < 4; ++bx) {
            uint8_t b = stage_cg[row_off + (size_t)bx];
            uint8_t p0 = remap_tile_color((uint8_t)((b >> 4) & 0x0fU), stage_num);
            uint8_t p1 = remap_tile_color((uint8_t)(b & 0x0fU), stage_num);

            int16_t dest_x0 = (int16_t)(screen_x + bx * 2);
            int16_t dest_x1 = (int16_t)(dest_x0 + 1);

            if (p0 != 0 && dest_x0 >= PLAYFIELD_X && dest_x0 < PLAYFIELD_RIGHT) {
                fb_row[dest_x0] = p0;
            }
            if (p1 != 0 && dest_x1 >= PLAYFIELD_X && dest_x1 < PLAYFIELD_RIGHT) {
                fb_row[dest_x1] = p1;
            }
        }
    }
}

void renderer_draw_tilemap(uint8_t* fb, int16_t fb_w, int16_t fb_h, const stage_tilemap_t* tilemap,
    const uint8_t* stage_cg, size_t cg_len, const uint8_t* stage_ct, size_t ct_len, uint8_t stage_num)
{
    if (fb == NULL || tilemap == NULL || fb_w <= 0 || fb_h <= 0) {
        return;
    }

    int16_t cam_x = FP12_4_TO_INT(tilemap->camera_pos.x);
    int16_t cam_y = FP12_4_TO_INT(tilemap->camera_pos.y);

    int16_t start_tx = (int16_t)(cam_x >> TILE_SHIFT);
    int16_t start_ty = (int16_t)(cam_y >> TILE_SHIFT);
    int16_t sub_x = (int16_t)(cam_x & (TILE_SIZE - 1));
    int16_t sub_y = (int16_t)(cam_y & (TILE_SIZE - 1));

    int16_t tiles_x = (int16_t)((PLAYFIELD_W / TILE_SIZE) + 2);
    int16_t tiles_y = (int16_t)((PLAYFIELD_H / TILE_SIZE) + 2);

    for (int16_t ty = 0; ty < tiles_y; ++ty) {
        int16_t map_ty = (int16_t)(start_ty + ty);
        int16_t screen_y = (int16_t)(PLAYFIELD_Y + ty * TILE_SIZE - sub_y);

        for (int16_t tx = 0; tx < tiles_x; ++tx) {
            int16_t map_tx = (int16_t)(start_tx + tx);
            int16_t screen_x = (int16_t)(PLAYFIELD_X + tx * TILE_SIZE - sub_x);

            uint8_t tile_id = tilemap_get_tile(tilemap, map_tx, map_ty);
            uint16_t flags = tilemap_get_flags(tilemap, map_tx, map_ty);

            if (flags == TILE_FLAG_EMPTY && tile_id == 0) {
                continue;
            }

            // Authentic 16x16 Compound Block Decoding via CTxx and CGxx
            if (stage_ct != NULL && stage_cg != NULL && ((size_t)tile_id * 8U + 4U <= ct_len)) {
                size_t ct_off = (size_t)tile_id * 8U;
                uint8_t t_tl = stage_ct[ct_off + 0];
                uint8_t t_tr = stage_ct[ct_off + 1];
                uint8_t t_bl = stage_ct[ct_off + 2];
                uint8_t t_br = stage_ct[ct_off + 3];

                draw_8x8_tile(fb, fb_w, screen_x, screen_y, t_tl, stage_cg, cg_len, stage_num);
                draw_8x8_tile(fb, fb_w, (int16_t)(screen_x + 8), screen_y, t_tr, stage_cg, cg_len, stage_num);
                draw_8x8_tile(fb, fb_w, screen_x, (int16_t)(screen_y + 8), t_bl, stage_cg, cg_len, stage_num);
                draw_8x8_tile(
                    fb, fb_w, (int16_t)(screen_x + 8), (int16_t)(screen_y + 8), t_br, stage_cg, cg_len, stage_num);
            } else if (flags != TILE_FLAG_EMPTY) {
                // Procedural fallback if stage chunks not available
                uint8_t color = 8;
                if ((flags & (uint16_t)TILE_FLAG_LAVA_HAZARD) != 0) {
                    color = 4;
                } else if ((flags & (uint16_t)TILE_FLAG_ELECTRIC) != 0) {
                    color = 14;
                } else if ((flags & (uint16_t)TILE_FLAG_WATER) != 0) {
                    color = 1;
                } else if ((flags & (uint16_t)TILE_FLAG_SOLID) != 0) {
                    color = (uint8_t)(7 + (tile_id % 3));
                }

                for (int16_t py = 0; py < TILE_SIZE; ++py) {
                    for (int16_t px = 0; px < TILE_SIZE; ++px) {
                        put_pixel(fb, fb_w, fb_h, (int16_t)(screen_x + px), (int16_t)(screen_y + py), color);
                    }
                }
            }
        }
    }
}

void renderer_draw_player(uint8_t* fb, int16_t fb_w, int16_t fb_h, const player_state_t* player, vector2d_t cam_pos,
    const uint8_t* ship_sprites, size_t ship_len)
{
    (void)ship_sprites;
    (void)ship_len;

    if (fb == NULL || player == NULL) {
        return;
    }

    int16_t cx = FP12_4_TO_INT(cam_pos.x);
    int16_t cy = FP12_4_TO_INT(cam_pos.y);

    int16_t px = (int16_t)FP12_4_TO_INT(player->position.x);
    int16_t py = (int16_t)FP12_4_TO_INT(player->position.y);
    int16_t sx = (int16_t)(PLAYFIELD_X + px - cx);
    int16_t sy = (int16_t)(PLAYFIELD_Y + py - cy);
    bool face_left = (player->facing == DIR_LEFT || player->facing == DIR_UP_LEFT || player->facing == DIR_DOWN_LEFT);

    if (player->mode == PLAYER_MODE_JET_FLY) {
        // High-definition delta-wing supersonic Jet (32x16)
        for (int16_t y = 0; y < 16; ++y) {
            for (int16_t x = 0; x < 32; ++x) {
                int16_t lx = face_left ? (int16_t)(31 - x) : x;
                uint8_t col = 0;

                // Needle nose radome (white tip, cyan cone)
                if (lx >= 29 && y >= 7 && y <= 9) {
                    col = (lx == 31 && y == 8) ? 15 : 11;
                } else if (lx >= 25 && y >= 6 && y <= 10) {
                    col = 11;
                } else if (lx >= 16 && lx <= 24 && y >= 5 && y <= 8) {
                    col = (y == 5) ? 15 : 14;
                } else if (lx >= 6 && lx <= 24 && y >= 6 && y <= 10) {
                    col = (y == 8) ? 11 : 9;
                } else if (y >= 1 && y <= 5 && lx >= 6 && lx <= (int16_t)(6 + (5 - y) * 3)) {
                    col = (y == 1) ? 15 : 11;
                } else if (y >= 11 && y <= 15 && lx >= 6 && lx <= (int16_t)(6 + (y - 11) * 3)) {
                    col = (y == 15) ? 15 : 11;
                } else if (lx >= 8 && lx <= 12 && (y == 2 || y == 14)) {
                    col = 12;
                } else if (lx >= 4 && lx <= 5 && y >= 7 && y <= 9) {
                    col = 8;
                } else if (lx < 4 && y >= 7 && y <= 9) {
                    int16_t flame_len = (int16_t)(2 + (player->anim_frame % 3));
                    if ((4 - lx) <= flame_len) {
                        col = (y == 8) ? 14 : 12;
                    }
                }

                if (col != 0) {
                    put_pixel(fb, fb_w, fb_h, (int16_t)(sx + x), (int16_t)(sy + y), col);
                }
            }
        }
    } else if (player->mode == PLAYER_MODE_ROBOT_CROUCH) {
        // Crouched Robot (16x14)
        for (int16_t y = 0; y < 14; ++y) {
            for (int16_t x = 0; x < 16; ++x) {
                int16_t lx = face_left ? (int16_t)(15 - x) : x;
                uint8_t col = 0;

                if (y < 4 && lx >= 4 && lx <= 10) {
                    col = (y >= 1 && lx >= 7) ? 15 : 11;
                } else if (y >= 4 && y <= 8 && lx >= 2 && lx <= 11) {
                    col = (lx == 6 || lx == 7) ? 12 : 11;
                } else if (y >= 6 && y <= 8 && lx >= 12 && lx <= 15) {
                    col = (lx == 15) ? 15 : 7;
                } else if (y >= 9 && y <= 13 && lx >= 2 && lx <= 12) {
                    col = (y == 13) ? 1 : 9;
                }

                if (col != 0) {
                    put_pixel(fb, fb_w, fb_h, (int16_t)(sx + x), (int16_t)(sy + y), col);
                }
            }
        }
    } else if (player->mode == PLAYER_MODE_MORPH_TO_JET || player->mode == PLAYER_MODE_MORPH_TO_BOT) {
        // Morphing transformation sequence
        for (int16_t y = 0; y < 24; ++y) {
            for (int16_t x = 0; x < 24; ++x) {
                int16_t lx = face_left ? (int16_t)(23 - x) : x;
                uint8_t col = 0;
                if (y >= 6 && y <= 16 && lx >= 4 && lx <= 18) {
                    col = (lx >= 10 && lx <= 12) ? 12 : 11;
                } else if ((lx + y) % 3 == 0) {
                    col = 14;
                }
                if (col != 0) {
                    put_pixel(fb, fb_w, fb_h, (int16_t)(sx + x), (int16_t)(sy + y), col);
                }
            }
        }
    } else {
        // Authentic Upright Thexder Mecha Robot (13x33)
        int16_t walk_phase = (int16_t)((player->anim_frame / 4) % 4);
        int16_t stride_y = (player->mode == PLAYER_MODE_ROBOT_WALK) ? (int16_t)(walk_phase % 2) : 0;

        for (int16_t y = 0; y < ROBOT_SPRITE_H; ++y) {
            for (int16_t x = 0; x < ROBOT_SPRITE_W; ++x) {
                int16_t lx = face_left ? (int16_t)((ROBOT_SPRITE_W - 1) - x) : x;
                uint8_t col = g_robot_sprite[(size_t)y * ROBOT_SPRITE_W + (size_t)lx];
                if (col != 0) {
                    put_pixel(fb, fb_w, fb_h, (int16_t)(sx + x), (int16_t)(sy + y + stride_y), col);
                }
            }
        }
    }
}

void renderer_draw_entities(uint8_t* fb, int16_t fb_w, int16_t fb_h, const entity_pool_t* pool, vector2d_t cam_pos)
{
    if (fb == NULL || pool == NULL) {
        return;
    }

    int16_t cx = FP12_4_TO_INT(cam_pos.x);
    int16_t cy = FP12_4_TO_INT(cam_pos.y);

    for (size_t i = 0; i < MAX_ENTITIES; ++i) {
        const entity_t* ent = &pool->slots[i];
        if (ent->active == 0) {
            continue;
        }

        aabb_t box = entities_get_world_hitbox(ent);
        int16_t sx = (int16_t)(PLAYFIELD_X + box.min_x - cx);
        int16_t sy = (int16_t)(PLAYFIELD_Y + box.min_y - cy);
        int16_t w = (int16_t)(box.max_x - box.min_x);
        int16_t h = (int16_t)(box.max_y - box.min_y);

        if (sx + w < PLAYFIELD_X || sx >= PLAYFIELD_RIGHT || sy + h < PLAYFIELD_Y || sy >= PLAYFIELD_BOTTOM) {
            continue;
        }

        uint8_t color = 12; // Red enemy
        if (ent->type == ENTITY_TYPE_PROJ_BULLET) {
            color = 14; // Yellow bullet
        } else if (ent->type == ENTITY_TYPE_PROJ_MISSILE) {
            color = 15; // White missile
        } else if (ent->type == ENTITY_TYPE_ENEMY_BOSS) {
            color = 13; // Magenta boss
        }

        if (ent->flash_timer > 0) {
            color = 15; // White flash on damage
        }

        for (int16_t y = 0; y < h; ++y) {
            for (int16_t x = 0; x < w; ++x) {
                put_pixel(fb, fb_w, fb_h, (int16_t)(sx + x), (int16_t)(sy + y), color);
            }
        }
    }
}

void renderer_draw_laser(uint8_t* fb, int16_t fb_w, int16_t fb_h, const laser_beam_t* beam, vector2d_t cam_pos)
{
    if (fb == NULL || beam == NULL || beam->active == 0) {
        return;
    }

    int16_t cx = FP12_4_TO_INT(cam_pos.x);
    int16_t cy = FP12_4_TO_INT(cam_pos.y);

    int16_t x0 = (int16_t)(PLAYFIELD_X + beam->start.x - cx);
    int16_t y0 = (int16_t)(PLAYFIELD_Y + beam->start.y - cy);
    int16_t x1 = (int16_t)(PLAYFIELD_X + beam->end.x - cx);
    int16_t y1 = (int16_t)(PLAYFIELD_Y + beam->end.y - cy);

    int16_t dx = (int16_t)abs(x1 - x0);
    int16_t dy = (int16_t)abs(y1 - y0);
    int16_t sx = (x0 < x1) ? 1 : -1;
    int16_t sy = (y0 < y1) ? 1 : -1;
    int16_t err = (int16_t)(dx - dy);

    int16_t curr_x = x0;
    int16_t curr_y = y0;

    while (true) {
        put_pixel(fb, fb_w, fb_h, curr_x, curr_y, 14); // Yellow laser core
        put_pixel(fb, fb_w, fb_h, curr_x, (int16_t)(curr_y + 1), 12); // Red laser glow

        if (curr_x == x1 && curr_y == y1) {
            break;
        }

        int16_t e2 = (int16_t)(2 * err);
        if (e2 > -dy) {
            err = (int16_t)(err - dy);
            curr_x = (int16_t)(curr_x + sx);
        }
        if (e2 < dx) {
            err = (int16_t)(err + dx);
            curr_y = (int16_t)(curr_y + sy);
        }
    }
}

void renderer_draw_barrier(uint8_t* fb, int16_t fb_w, int16_t fb_h, const player_state_t* player, vector2d_t cam_pos)
{
    if (fb == NULL || player == NULL || player->shield_timer == 0) {
        return;
    }

    int16_t cx = FP12_4_TO_INT(cam_pos.x);
    int16_t cy = FP12_4_TO_INT(cam_pos.y);

    aabb_t box = player_get_hitbox(player);
    int16_t center_x = (int16_t)(PLAYFIELD_X + ((box.min_x + box.max_x) / 2) - cx);
    int16_t center_y = (int16_t)(PLAYFIELD_Y + ((box.min_y + box.max_y) / 2) - cy);
    const int16_t RADIUS = 22;

    int16_t x = RADIUS;
    int16_t y = 0;
    int16_t err = 0;

    while (x >= y) {
        int16_t pts[8][2] = { { center_x + x, center_y + y }, { center_x + y, center_y + x },
            { center_x - y, center_y + x }, { center_x - x, center_y + y }, { center_x - x, center_y - y },
            { center_x - y, center_y - x }, { center_x + y, center_y - x }, { center_x + x, center_y - y } };

        for (int i = 0; i < 8; ++i) {
            put_pixel(fb, fb_w, fb_h, pts[i][0], pts[i][1], (uint8_t)(9 + (y & 1)));
        }

        if (err <= 0) {
            y += 1;
            err += 2 * y + 1;
        }
        if (err > 0) {
            x -= 1;
            err -= 2 * x + 1;
        }
    }
}
