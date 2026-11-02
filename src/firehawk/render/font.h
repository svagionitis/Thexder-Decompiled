#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Render an ASCII text string into an 8-bit index framebuffer using 8x8 font data
/// @param fb Pointer to linear 8-bit framebuffer
/// @param fb_w Framebuffer width in pixels (typically 320)
/// @param fb_h Framebuffer height in pixels (typically 200)
/// @param x Horizontal pixel position (left)
/// @param y Vertical pixel position (top)
/// @param str Null-terminated ASCII string to render
/// @param color Palette color index for glyph pixels
/// @param font_data 4096-byte REGFONT bitmap sheet (256 chars * 16 rows) or 8x8 glyph sheet
void font_draw_string(uint8_t* fb, int16_t fb_w, int16_t fb_h, int16_t x, int16_t y, const char* str, uint8_t color,
    const uint8_t* font_data);

#ifdef __cplusplus
}
#endif
