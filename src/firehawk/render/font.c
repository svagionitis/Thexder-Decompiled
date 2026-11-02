/// @file font.c
/// @brief 8x8 bitmap text glyph rendering from REGFONT sheet.

#include "render/font.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

void font_draw_string(uint8_t* fb, int16_t fb_w, int16_t fb_h, int16_t x, int16_t y, const char* str, uint8_t color,
    const uint8_t* font_data)
{
    if (fb == NULL || str == NULL || fb_w <= 0 || fb_h <= 0) {
        return;
    }

    int16_t curr_x = x;
    int16_t curr_y = y;

    for (const char* p = str; *p != '\0'; ++p) {
        char ch = *p;

        if (ch == '\n') {
            curr_x = x;
            curr_y = (int16_t)(curr_y + 8);
            continue;
        }

        uint8_t u_ch = (uint8_t)ch;

        for (int row = 0; row < 8; ++row) {
            int16_t py = (int16_t)(curr_y + row);
            if (py < 0 || py >= fb_h) {
                continue;
            }

            uint8_t bits = 0;
            if (font_data != NULL) {
                // REGFONT is 256 characters * 16 rows per char
                bits = font_data[(size_t)u_ch * 16 + (size_t)row];
            } else {
                // Basic default fallback glyphs for common characters
                if (ch >= 'A' && ch <= 'Z') {
                    bits = (row == 0 || row == 4) ? 0x7C : 0x42;
                } else if (ch >= '0' && ch <= '9') {
                    bits = (row == 0 || row == 7) ? 0x7E : 0x42;
                } else if (ch == ':') {
                    bits = (row == 2 || row == 5) ? 0x18 : 0x00;
                } else {
                    bits = 0x00;
                }
            }

            for (int col = 0; col < 8; ++col) {
                int16_t px = (int16_t)(curr_x + col);
                if (px >= 0 && px < fb_w) {
                    if ((bits & (0x80 >> col)) != 0) {
                        fb[(size_t)py * (size_t)fb_w + (size_t)px] = color;
                    }
                }
            }
        }

        curr_x = (int16_t)(curr_x + 8);
    }
}
