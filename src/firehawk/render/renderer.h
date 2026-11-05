#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "actor/entities.h"
#include "actor/player.h"
#include "actor/weapons.h"
#include "types.h"
#include "world/tilemap.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Clear framebuffer with solid color index
/// @param fb Pointer to 8-bit framebuffer
/// @param fb_w Framebuffer width in pixels
/// @param fb_h Framebuffer height in pixels
/// @param color Fill palette color index
void renderer_clear(uint8_t* fb, int16_t fb_w, int16_t fb_h, uint8_t color);

/// @brief Blit visible 16x16 stage tiles to backbuffer based on camera position
/// @details Ghidra: FUN_1000_1cb0 (1000:1cb0)
/// @param fb Pointer to 8-bit framebuffer
/// @param fb_w Framebuffer width in pixels (320)
/// @param fb_h Framebuffer height in pixels (200)
/// @param tilemap Pointer to stage tilemap
/// @param stage_cg Pointer to stage 8x8 character tiles (CGxx)
/// @param cg_len Byte length of stage_cg buffer
/// @param stage_ct Pointer to stage 16x16 block mapping table (CTxx)
/// @param ct_len Byte length of stage_ct buffer
/// @param stage_num Stage number (0 to 12) for palette remapping
void renderer_draw_tilemap(uint8_t* fb, int16_t fb_w, int16_t fb_h, const stage_tilemap_t* tilemap,
    const uint8_t* stage_cg, size_t cg_len, const uint8_t* stage_ct, size_t ct_len, uint8_t stage_num);

/// @brief Draw player robot or jet sprite
/// @details Ghidra: FUN_1000_1e20 (1000:1e20)
/// @param fb Pointer to 8-bit framebuffer
/// @param fb_w Framebuffer width in pixels
/// @param fb_h Framebuffer height in pixels
/// @param player Pointer to player state
/// @param cam_pos Camera position (12.4 fixed-point)
/// @param ship_sprites Pointer to decompressed SHIP sprite sheet data (optional)
/// @param ship_len Length of sprite sheet buffer
void renderer_draw_player(uint8_t* fb, int16_t fb_w, int16_t fb_h, const player_state_t* player, vector2d_t cam_pos,
    const uint8_t* ship_sprites, size_t ship_len);

/// @brief Draw active entities (enemies, missiles, bullets)
/// @param fb Pointer to 8-bit framebuffer
/// @param fb_w Framebuffer width in pixels
/// @param fb_h Framebuffer height in pixels
/// @param pool Pointer to entity pool
/// @param cam_pos Camera position (12.4 fixed-point)
void renderer_draw_entities(uint8_t* fb, int16_t fb_w, int16_t fb_h, const entity_pool_t* pool, vector2d_t cam_pos);

/// @brief Rasterize homing laser beam from player nozzle to target
/// @details Ghidra: FUN_1000_2014 (1000:2014)
/// @param fb Pointer to 8-bit framebuffer
/// @param fb_w Framebuffer width in pixels
/// @param fb_h Framebuffer height in pixels
/// @param beam Pointer to laser beam state
/// @param cam_pos Camera position (12.4 fixed-point)
void renderer_draw_laser(uint8_t* fb, int16_t fb_w, int16_t fb_h, const laser_beam_t* beam, vector2d_t cam_pos);

/// @brief Render orbiting spherical barrier shield effect
/// @param fb Pointer to 8-bit framebuffer
/// @param fb_w Framebuffer width in pixels
/// @param fb_h Framebuffer height in pixels
/// @param player Pointer to player state
/// @param cam_pos Camera position (12.4 fixed-point)
void renderer_draw_barrier(uint8_t* fb, int16_t fb_w, int16_t fb_h, const player_state_t* player, vector2d_t cam_pos);

#ifdef __cplusplus
}
#endif
