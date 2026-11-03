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
        size_t char_idx = (u_ch >= 32) ? (size_t)(u_ch - 32) : (size_t)u_ch;

        for (int row = 0; row < 8; ++row) {
            int16_t py = (int16_t)(curr_y + row);
            if (py < 0 || py >= fb_h) {
                continue;
            }

            uint16_t row_word = 0;
            if (font_data != NULL) {
                // REGFONT: 8 rows per character, each row is a 16-bit word (2-bit doubled pixels)
                uint16_t b0 = font_data[char_idx * 16 + (size_t)row * 2];
                uint16_t b1 = font_data[char_idx * 16 + (size_t)row * 2 + 1];
                row_word = (uint16_t)(((uint16_t)b0 << 8) | b1);
            } else {
                // Basic default fallback glyphs for common characters
                uint8_t fallback = 0;
                if (ch >= 'A' && ch <= 'Z') {
                    fallback = (row == 0 || row == 4) ? 0x7C : 0x42;
                } else if (ch >= '0' && ch <= '9') {
                    fallback = (row == 0 || row == 7) ? 0x7E : 0x42;
                } else if (ch == ':') {
                    fallback = (row == 2 || row == 5) ? 0x18 : 0x00;
                }
                row_word = (uint16_t)((uint16_t)fallback << 8);
            }

            for (int col = 0; col < 8; ++col) {
                int16_t px = (int16_t)(curr_x + col);
                if (px >= 0 && px < fb_w) {
                    bool bit_set = false;
                    if (font_data != NULL) {
                        bit_set = (row_word & (uint16_t)(0x8000 >> (col * 2))) != 0;
                    } else {
                        bit_set = (row_word & (uint16_t)(0x8000 >> col)) != 0;
                    }
                    if (bit_set) {
                        fb[(size_t)py * (size_t)fb_w + (size_t)px] = color;
                    }
                }
            }
        }

        curr_x = (int16_t)(curr_x + 8);
    }
}
