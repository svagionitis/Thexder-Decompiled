#include "hal_framebuffer.h"

#include <cstddef>
#include <cstdint>
#include <string.h>

void hal_framebuffer_init(hal_framebuffer_t* fb)
{
    if (fb == NULL) {
        return;
    }
    fb->width = HAL_SCREEN_WIDTH;
    fb->height = HAL_SCREEN_HEIGHT;
    hal_framebuffer_set_clip(fb, 0, 0, (int16_t)(fb->width - 1), (int16_t)(fb->height - 1));
    hal_framebuffer_clear(fb, 0);
}

void hal_framebuffer_clear(hal_framebuffer_t* fb, uint8_t color_index)
{
    if (fb == NULL) {
        return;
    }
    memset(fb->pixels, color_index, sizeof(fb->pixels));
}

void hal_framebuffer_set_clip(hal_framebuffer_t* fb, int16_t left, int16_t top, int16_t right, int16_t bottom)
{
    if (fb == NULL) {
        return;
    }

    if (left < 0) {
        left = 0;
    }
    if (top < 0) {
        top = 0;
    }
    if (right >= (int16_t)fb->width) {
        right = (int16_t)(fb->width - 1);
    }
    if (bottom >= (int16_t)fb->height) {
        bottom = (int16_t)(fb->height - 1);
    }

    if (left > right || top > bottom) {
        left = 0;
        top = 0;
        right = 0;
        bottom = 0;
    }

    fb->clip.left = left;
    fb->clip.top = top;
    fb->clip.right = right;
    fb->clip.bottom = bottom;
}

void hal_framebuffer_fill_rect(
    hal_framebuffer_t* fb, int16_t x, int16_t y, int16_t width, int16_t height, uint8_t color_index)
{
    if (fb == NULL || width <= 0 || height <= 0) {
        return;
    }

    int16_t x0 = x;
    int16_t y0 = y;
    int16_t x1 = (int16_t)(x + width - 1);
    int16_t y1 = (int16_t)(y + height - 1);

    if (x0 < fb->clip.left) {
        x0 = fb->clip.left;
    }
    if (y0 < fb->clip.top) {
        y0 = fb->clip.top;
    }
    if (x1 > fb->clip.right) {
        x1 = fb->clip.right;
    }
    if (y1 > fb->clip.bottom) {
        y1 = fb->clip.bottom;
    }

    if (x0 > x1 || y0 > y1) {
        return;
    }

    size_t fill_w = (size_t)(x1 - x0 + 1);
    for (int16_t row = y0; row <= y1; ++row) {
        size_t row_offset = (size_t)row * (size_t)fb->width + (size_t)x0;
        memset(&fb->pixels[row_offset], color_index, fill_w);
    }
}

void hal_framebuffer_copy_rect(
    hal_framebuffer_t* fb, int16_t src_x, int16_t src_y, int16_t dst_x, int16_t dst_y, int16_t width, int16_t height)
{
    if (fb == NULL || width <= 0 || height <= 0) {
        return;
    }

    // Clip destination rectangle
    int16_t dst_x0 = dst_x;
    int16_t dst_y0 = dst_y;
    int16_t dst_x1 = (int16_t)(dst_x + width - 1);
    int16_t dst_y1 = (int16_t)(dst_y + height - 1);

    if (dst_x0 < fb->clip.left) {
        int16_t diff = (int16_t)(fb->clip.left - dst_x0);
        src_x = (int16_t)(src_x + diff);
        dst_x0 = fb->clip.left;
    }
    if (dst_y0 < fb->clip.top) {
        int16_t diff = (int16_t)(fb->clip.top - dst_y0);
        src_y = (int16_t)(src_y + diff);
        dst_y0 = fb->clip.top;
    }
    if (dst_x1 > fb->clip.right) {
        dst_x1 = fb->clip.right;
    }
    if (dst_y1 > fb->clip.bottom) {
        dst_y1 = fb->clip.bottom;
    }

    if (dst_x0 > dst_x1 || dst_y0 > dst_y1) {
        return;
    }

    int16_t clipped_w = (int16_t)(dst_x1 - dst_x0 + 1);
    int16_t clipped_h = (int16_t)(dst_y1 - dst_y0 + 1);

    // Verify source bounds
    if (src_x < 0 || src_y < 0 || (src_x + clipped_w) > (int16_t)fb->width
        || (src_y + clipped_h) > (int16_t)fb->height) {
        return;
    }

    size_t copy_bytes = (size_t)clipped_w;

    // Handle potential vertical overlap by iterating in direction
    if (dst_y0 > src_y) {
        for (int16_t row = (int16_t)(clipped_h - 1); row >= 0; --row) {
            size_t s_off = (size_t)(src_y + row) * (size_t)fb->width + (size_t)src_x;
            size_t d_off = (size_t)(dst_y0 + row) * (size_t)fb->width + (size_t)dst_x0;
            memmove(&fb->pixels[d_off], &fb->pixels[s_off], copy_bytes);
        }
    } else {
        for (int16_t row = 0; row < clipped_h; ++row) {
            size_t s_off = (size_t)(src_y + row) * (size_t)fb->width + (size_t)src_x;
            size_t d_off = (size_t)(dst_y0 + row) * (size_t)fb->width + (size_t)dst_x0;
            memmove(&fb->pixels[d_off], &fb->pixels[s_off], copy_bytes);
        }
    }
}

void hal_framebuffer_draw_sprite(
    hal_framebuffer_t* fb, int16_t x, int16_t y, const uint8_t* sprite_data, int16_t width, int16_t height)
{
    if (fb == NULL || sprite_data == NULL || width <= 0 || height <= 0) {
        return;
    }

    int16_t x0 = x;
    int16_t y0 = y;
    int16_t x1 = (int16_t)(x + width - 1);
    int16_t y1 = (int16_t)(y + height - 1);

    int16_t src_skip_x = 0;
    int16_t src_skip_y = 0;

    if (x0 < fb->clip.left) {
        src_skip_x = (int16_t)(fb->clip.left - x0);
        x0 = fb->clip.left;
    }
    if (y0 < fb->clip.top) {
        src_skip_y = (int16_t)(fb->clip.top - y0);
        y0 = fb->clip.top;
    }
    if (x1 > fb->clip.right) {
        x1 = fb->clip.right;
    }
    if (y1 > fb->clip.bottom) {
        y1 = fb->clip.bottom;
    }

    if (x0 > x1 || y0 > y1) {
        return;
    }

    size_t copy_bytes = (size_t)(x1 - x0 + 1);
    for (int16_t dy = y0; dy <= y1; ++dy) {
        int16_t sy = (int16_t)(src_skip_y + (dy - y0));
        size_t src_offset = (size_t)sy * (size_t)width + (size_t)src_skip_x;
        size_t dst_offset = (size_t)dy * (size_t)fb->width + (size_t)x0;
        memcpy(&fb->pixels[dst_offset], &sprite_data[src_offset], copy_bytes);
    }
}

void hal_framebuffer_draw_masked_sprite(hal_framebuffer_t* fb, int16_t x, int16_t y, const uint8_t* sprite_data,
    const uint8_t* mask_data, int16_t width, int16_t height)
{
    if (fb == NULL || sprite_data == NULL || width <= 0 || height <= 0) {
        return;
    }

    int16_t x0 = x;
    int16_t y0 = y;
    int16_t x1 = (int16_t)(x + width - 1);
    int16_t y1 = (int16_t)(y + height - 1);

    int16_t src_skip_x = 0;
    int16_t src_skip_y = 0;

    if (x0 < fb->clip.left) {
        src_skip_x = (int16_t)(fb->clip.left - x0);
        x0 = fb->clip.left;
    }
    if (y0 < fb->clip.top) {
        src_skip_y = (int16_t)(fb->clip.top - y0);
        y0 = fb->clip.top;
    }
    if (x1 > fb->clip.right) {
        x1 = fb->clip.right;
    }
    if (y1 > fb->clip.bottom) {
        y1 = fb->clip.bottom;
    }

    if (x0 > x1 || y0 > y1) {
        return;
    }

    for (int16_t dy = y0; dy <= y1; ++dy) {
        int16_t sy = (int16_t)(src_skip_y + (dy - y0));
        size_t src_row = (size_t)sy * (size_t)width;
        size_t dst_row = (size_t)dy * (size_t)fb->width;

        for (int16_t dx = x0; dx <= x1; ++dx) {
            int16_t sx = (int16_t)(src_skip_x + (dx - x0));
            size_t s_off = src_row + (size_t)sx;

            if (mask_data != NULL) {
                if (mask_data[s_off] != 0) {
                    fb->pixels[dst_row + (size_t)dx] = sprite_data[s_off];
                }
            } else {
                // Color 0 transparency convention
                uint8_t pixel = sprite_data[s_off];
                if (pixel != 0) {
                    fb->pixels[dst_row + (size_t)dx] = pixel;
                }
            }
        }
    }
}

void hal_framebuffer_scroll(hal_framebuffer_t* fb, int16_t dx, int16_t dy, uint8_t fill_color)
{
    if (fb == NULL || (dx == 0 && dy == 0)) {
        return;
    }

    int16_t w = (int16_t)(fb->clip.right - fb->clip.left + 1);
    int16_t h = (int16_t)(fb->clip.bottom - fb->clip.top + 1);

    if (dx >= w || dx <= -w || dy >= h || dy <= -h) {
        // Complete clear
        hal_framebuffer_fill_rect(fb, fb->clip.left, fb->clip.top, w, h, fill_color);
        return;
    }

    // Scroll by copying rectangle
    int16_t src_x = (int16_t)(fb->clip.left + ((dx > 0) ? dx : 0));
    int16_t dst_x = (int16_t)(fb->clip.left + ((dx < 0) ? -dx : 0));
    int16_t copy_w = (int16_t)(w - (dx > 0 ? dx : -dx));

    int16_t src_y = (int16_t)(fb->clip.top + ((dy > 0) ? dy : 0));
    int16_t dst_y = (int16_t)(fb->clip.top + ((dy < 0) ? -dy : 0));
    int16_t copy_h = (int16_t)(h - (dy > 0 ? dy : -dy));

    hal_framebuffer_copy_rect(fb, src_x, src_y, dst_x, dst_y, copy_w, copy_h);

    // Fill newly exposed border areas
    if (dy > 0) {
        // Bottom exposed
        hal_framebuffer_fill_rect(fb, fb->clip.left, (int16_t)(fb->clip.bottom - dy + 1), w, dy, fill_color);
    } else if (dy < 0) {
        // Top exposed
        hal_framebuffer_fill_rect(fb, fb->clip.left, fb->clip.top, w, (int16_t)(-dy), fill_color);
    }

    if (dx > 0) {
        // Right exposed
        hal_framebuffer_fill_rect(fb, (int16_t)(fb->clip.right - dx + 1), fb->clip.top, dx, h, fill_color);
    } else if (dx < 0) {
        // Left exposed
        hal_framebuffer_fill_rect(fb, fb->clip.left, fb->clip.top, (int16_t)(-dx), h, fill_color);
    }
}
