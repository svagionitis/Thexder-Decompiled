#pragma once

#include <stdint.h>

#include "hal_video.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Virtual linear 8-bit framebuffer structure
typedef struct hal_framebuffer {
    uint8_t pixels[HAL_SCREEN_WIDTH * HAL_SCREEN_HEIGHT];
    hal_clip_rect_t clip;
    uint16_t width;
    uint16_t height;
} hal_framebuffer_t;

/// @brief Initializes framebuffer with default 320x200 dimensions and full screen clip
void hal_framebuffer_init(hal_framebuffer_t* fb);

/// @brief Clears entire buffer to color_index
void hal_framebuffer_clear(hal_framebuffer_t* fb, uint8_t color_index);

/// @brief Sets active clipping rectangle with bounds clamping
void hal_framebuffer_set_clip(hal_framebuffer_t* fb, int16_t left, int16_t top, int16_t right, int16_t bottom);

/// @brief Fills clipped rectangle with color_index
void hal_framebuffer_fill_rect(
    hal_framebuffer_t* fb, int16_t x, int16_t y, int16_t width, int16_t height, uint8_t color_index);

/// @brief Copies rectangle from source coordinates to destination coordinates within framebuffer
void hal_framebuffer_copy_rect(
    hal_framebuffer_t* fb, int16_t src_x, int16_t src_y, int16_t dst_x, int16_t dst_y, int16_t width, int16_t height);

/// @brief Blits solid rectangular sprite to framebuffer with clipping
void hal_framebuffer_draw_sprite(
    hal_framebuffer_t* fb, int16_t x, int16_t y, const uint8_t* sprite_data, int16_t width, int16_t height);

/// @brief Blits masked/transparent sprite to framebuffer with clipping
/// @details If mask_data is NULL, color index 0 is treated as transparent (MCGA Mode 13h convention).
///          If mask_data is provided, mask byte 0 indicates transparency.
void hal_framebuffer_draw_masked_sprite(hal_framebuffer_t* fb, int16_t x, int16_t y, const uint8_t* sprite_data,
    const uint8_t* mask_data, int16_t width, int16_t height);

/// @brief Scrolls the entire framebuffer or clipped area by (dx, dy)
void hal_framebuffer_scroll(hal_framebuffer_t* fb, int16_t dx, int16_t dy, uint8_t fill_color);

#ifdef __cplusplus
}
#endif
