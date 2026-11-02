#include "hal_scaler.h"

#include <cstddef>
#include <cstdint>
#include <string.h>

void hal_scaler_init(hal_scaler_t* scaler)
{
    if (scaler == NULL) {
        return;
    }
    memset(scaler->rgba_buffer, 0, sizeof(scaler->rgba_buffer));
    scaler->enable_scanlines = false;
}

void hal_scaler_convert_frame(hal_scaler_t* scaler, const hal_framebuffer_t* fb, const hal_palette_t* pal)
{
    if (scaler == NULL || fb == NULL || pal == NULL) {
        return;
    }

    const uint8_t* src = fb->pixels;
    uint32_t* dst = scaler->rgba_buffer;
    const uint32_t* lut = pal->rgba;

    size_t total_pixels = (size_t)fb->width * (size_t)fb->height;

    if (!scaler->enable_scanlines) {
        for (size_t i = 0; i < total_pixels; ++i) {
            dst[i] = lut[src[i]];
        }
    } else {
        // Darken alternate scanlines slightly (50% intensity)
        for (size_t y = 0; y < fb->height; ++y) {
            size_t row_off = y * (size_t)fb->width;
            bool is_dark_row = ((y & 1U) != 0U);

            if (!is_dark_row) {
                for (size_t x = 0; x < fb->width; ++x) {
                    dst[row_off + x] = lut[src[row_off + x]];
                }
            } else {
                for (size_t x = 0; x < fb->width; ++x) {
                    uint32_t c = lut[src[row_off + x]];
                    // Halve RGB channels while keeping Alpha = 0xFF
                    uint32_t r = ((c & 0x000000FFU) * 3U) >> 2;
                    uint32_t g = ((c & 0x0000FF00U) * 3U) >> 2;
                    uint32_t b = ((c & 0x00FF0000U) * 3U) >> 2;
                    dst[row_off + x] = (r & 0x000000FFU) | (g & 0x0000FF00U) | (b & 0x00FF0000U) | (c & 0xFF000000U);
                }
            }
        }
    }
}

hal_viewport_t hal_scaler_calculate_viewport(int32_t window_width, int32_t window_height)
{
    hal_viewport_t vp = { 0, 0, window_width, window_height };
    if (window_width <= 0 || window_height <= 0) {
        return vp;
    }

    // Modern displays: preserve 4:3 CRT aspect ratio (4 units width per 3 units height)
    // 4 / 3 = 1.3333333333
    int32_t target_w = window_width;
    int32_t target_h = (window_width * 3) / 4;

    if (target_h <= window_height) {
        // Pillarboxing (black bars on left & right)
        vp.width = target_w;
        vp.height = target_h;
        vp.x = 0;
        vp.y = (window_height - target_h) / 2;
    } else {
        // Letterboxing (black bars on top & bottom)
        target_h = window_height;
        target_w = (window_height * 4) / 3;
        vp.width = target_w;
        vp.height = target_h;
        vp.x = (window_width - target_w) / 2;
        vp.y = 0;
    }

    return vp;
}
