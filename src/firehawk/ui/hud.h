#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "actor/player.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Initialize cockpit HUD subsystem
void hud_init(void);

/// @brief Set communications typewriter text message
/// @param msg Null-terminated string to display in message terminal
void hud_set_message(const char* msg);

/// @brief Advance message typewriter character clock
void hud_update(void);

/// @brief Render authentic cockpit frame border surrounding playfield
void hud_render_frame(uint8_t* fb, int16_t fb_w, int16_t fb_h);

/// @brief Render cockpit status gauges, score, ammunition, and terminal text
/// @details Ghidra: FUN_1000_22c8 (1000:22c8)
/// @param fb Pointer to 8-bit framebuffer
/// @param fb_w Framebuffer width in pixels (320)
/// @param fb_h Framebuffer height in pixels (200)
/// @param player Pointer to player state
/// @param font_data Pointer to REGFONT font sheet bytes
void hud_render(uint8_t* fb, int16_t fb_w, int16_t fb_h, const player_state_t* player, const uint8_t* font_data);

#ifdef __cplusplus
}
#endif
