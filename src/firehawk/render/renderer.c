/// @file renderer.c
/// @brief Unified graphics pipeline, tilemap blitter, sprite renderer, and laser rasterizer.
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
#include "types.h"
#include "world/tilemap.h"

void renderer_clear(uint8_t* fb, int16_t fb_w, int16_t fb_h, uint8_t color)
{
    if (fb == NULL || fb_w <= 0 || fb_h <= 0) {
        return;
    }
    memset(fb, color, (size_t)fb_w * (size_t)fb_h);
}

void renderer_draw_tilemap(uint8_t* fb, int16_t fb_w, int16_t fb_h, const stage_tilemap_t* tilemap, int16_t viewport_h)
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

    int16_t tiles_x = (int16_t)((fb_w / TILE_SIZE) + 2);
    int16_t tiles_y = (int16_t)((viewport_h / TILE_SIZE) + 2);

    for (int16_t ty = 0; ty < tiles_y; ++ty) {
        int16_t map_ty = (int16_t)(start_ty + ty);
        int16_t screen_y = (int16_t)(ty * TILE_SIZE - sub_y);

        for (int16_t tx = 0; tx < tiles_x; ++tx) {
            int16_t map_tx = (int16_t)(start_tx + tx);
            int16_t screen_x = (int16_t)(tx * TILE_SIZE - sub_x);

            uint8_t tile_id = tilemap_get_tile(tilemap, map_tx, map_ty);
            uint16_t flags = tilemap_get_flags(tilemap, map_tx, map_ty);

            if (tile_id == 0 && flags == TILE_FLAG_EMPTY) {
                // Passable empty black background
                continue;
            }

            // Determine tile rendering color
            uint8_t color = 8; // Dark gray default
            if ((flags & (uint16_t)TILE_FLAG_LAVA_HAZARD) != 0) {
                color = 4; // Red lava
            } else if ((flags & (uint16_t)TILE_FLAG_ELECTRIC) != 0) {
                color = 14; // Bright yellow electric
            } else if ((flags & (uint16_t)TILE_FLAG_WATER) != 0) {
                color = 1; // Blue water
            } else if ((flags & (uint16_t)TILE_FLAG_RECHARGE) != 0) {
                color = 10; // Green recharge
            } else if ((flags & (uint16_t)TILE_FLAG_BREAKABLE) != 0) {
                color = 6; // Brown breakable
            } else if ((flags & (uint16_t)TILE_FLAG_SOLID) != 0) {
                color = (uint8_t)(7 + (tile_id % 3)); // Varied solid steel
            }

            // Draw 16x16 tile block
            for (int16_t py = 0; py < TILE_SIZE; ++py) {
                int16_t dest_y = (int16_t)(screen_y + py);
                if (dest_y < 0 || dest_y >= viewport_h) {
                    continue;
                }

                for (int16_t px = 0; px < TILE_SIZE; ++px) {
                    int16_t dest_x = (int16_t)(screen_x + px);
                    if (dest_x < 0 || dest_x >= fb_w) {
                        continue;
                    }

                    // Add subtle 1px border highlight on solid blocks
                    uint8_t final_color = color;
                    if ((flags & (uint16_t)TILE_FLAG_SOLID) != 0) {
                        if (px == 0 || py == 0) {
                            final_color = (uint8_t)(color + 8); // Light edge
                        } else if (px == 15 || py == 15) {
                            final_color = 0; // Dark edge
                        }
                    }

                    fb[(size_t)dest_y * (size_t)fb_w + (size_t)dest_x] = final_color;
                }
            }
        }
    }
}

void renderer_draw_player(uint8_t* fb, int16_t fb_w, int16_t fb_h, const player_state_t* player, vector2d_t cam_pos)
{
    if (fb == NULL || player == NULL) {
        return;
    }

    int16_t cx = FP12_4_TO_INT(cam_pos.x);
    int16_t cy = FP12_4_TO_INT(cam_pos.y);

    aabb_t box = player_get_hitbox(player);
    int16_t sx = (int16_t)(box.min_x - cx);
    int16_t sy = (int16_t)(box.min_y - cy);
    int16_t w = (int16_t)(box.max_x - box.min_x);
    int16_t h = (int16_t)(box.max_y - box.min_y);

    // Primary robot/jet color (Cyan 11, visor White 15)
    uint8_t body_color = 11;
    if (player->mode == PLAYER_MODE_JET_FLY) {
        body_color = 9; // Bright blue for Jet
    }

    for (int16_t y = 0; y < h; ++y) {
        int16_t py = (int16_t)(sy + y);
        if (py < 0 || py >= fb_h)
            continue;

        for (int16_t x = 0; x < w; ++x) {
            int16_t px = (int16_t)(sx + x);
            if (px < 0 || px >= fb_w)
                continue;

            uint8_t col = body_color;
            if (y < 4 && x > 4 && x < w - 4) {
                col = 15; // Visor cockpit
            } else if (x == 0 || x == w - 1 || y == h - 1) {
                col = 1; // Dark edge
            }

            fb[(size_t)py * (size_t)fb_w + (size_t)px] = col;
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
        int16_t sx = (int16_t)(box.min_x - cx);
        int16_t sy = (int16_t)(box.min_y - cy);
        int16_t w = (int16_t)(box.max_x - box.min_x);
        int16_t h = (int16_t)(box.max_y - box.min_y);

        if (sx + w < 0 || sx >= fb_w || sy + h < 0 || sy >= fb_h) {
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
            int16_t py = (int16_t)(sy + y);
            if (py < 0 || py >= fb_h)
                continue;

            for (int16_t x = 0; x < w; ++x) {
                int16_t px = (int16_t)(sx + x);
                if (px < 0 || px >= fb_w)
                    continue;

                fb[(size_t)py * (size_t)fb_w + (size_t)px] = color;
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

    int16_t x0 = (int16_t)(beam->start.x - cx);
    int16_t y0 = (int16_t)(beam->start.y - cy);
    int16_t x1 = (int16_t)(beam->end.x - cx);
    int16_t y1 = (int16_t)(beam->end.y - cy);

    // Rasterize laser beam line using Bresenham algorithm
    int16_t dx = (int16_t)abs(x1 - x0);
    int16_t dy = (int16_t)abs(y1 - y0);
    int16_t sx = (x0 < x1) ? 1 : -1;
    int16_t sy = (y0 < y1) ? 1 : -1;
    int16_t err = (int16_t)(dx - dy);

    int16_t curr_x = x0;
    int16_t curr_y = y0;

    while (true) {
        if (curr_x >= 0 && curr_x < fb_w && curr_y >= 0 && curr_y < fb_h) {
            fb[(size_t)curr_y * (size_t)fb_w + (size_t)curr_x] = 14; // Yellow core
            // 1px glow
            if (curr_y + 1 < fb_h) {
                fb[(size_t)(curr_y + 1) * (size_t)fb_w + (size_t)curr_x] = 12; // Red glow
            }
        }

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
    int16_t center_x = (int16_t)(((box.min_x + box.max_x) / 2) - cx);
    int16_t center_y = (int16_t)(((box.min_y + box.max_y) / 2) - cy);
    const int16_t RADIUS = 22;

    // Midpoint circle outline for barrier shield
    int16_t x = RADIUS;
    int16_t y = 0;
    int16_t err = 0;

    while (x >= y) {
        int16_t pts[8][2] = { { center_x + x, center_y + y }, { center_x + y, center_y + x },
            { center_x - y, center_y + x }, { center_x - x, center_y + y }, { center_x - x, center_y - y },
            { center_x - y, center_y - x }, { center_x + y, center_y - x }, { center_x + x, center_y - y } };

        for (int i = 0; i < 8; ++i) {
            int16_t px = pts[i][0];
            int16_t py = pts[i][1];
            if (px >= 0 && px < fb_w && py >= 0 && py < fb_h) {
                fb[(size_t)py * (size_t)fb_w + (size_t)px] = (uint8_t)(9 + (y & 1));
            }
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
