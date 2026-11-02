#include "hal_palette.h"

#include <cstddef>
#include <cstdint>
#include <string.h>

/// @brief Standard IBM EGA 16-color palette (in 6-bit DAC format 0..63)
static const uint8_t s_default_ega_palette_dac[16][3] = {
    { 0x00, 0x00, 0x00 }, // 0: Black
    { 0x00, 0x00, 0x2A }, // 1: Blue
    { 0x00, 0x2A, 0x00 }, // 2: Green
    { 0x00, 0x2A, 0x2A }, // 3: Cyan
    { 0x2A, 0x00, 0x00 }, // 4: Red
    { 0x2A, 0x00, 0x2A }, // 5: Magenta
    { 0x2A, 0x15, 0x00 }, // 6: Brown
    { 0x2A, 0x2A, 0x2A }, // 7: Light Gray
    { 0x15, 0x15, 0x15 }, // 8: Dark Gray
    { 0x15, 0x15, 0x3F }, // 9: Bright Blue
    { 0x15, 0x3F, 0x15 }, // 10: Bright Green
    { 0x15, 0x3F, 0x3F }, // 11: Bright Cyan
    { 0x3F, 0x15, 0x15 }, // 12: Bright Red
    { 0x3F, 0x15, 0x3F }, // 13: Bright Magenta
    { 0x3F, 0x3F, 0x15 }, // 14: Bright Yellow
    { 0x3F, 0x3F, 0x3F } // 15: Bright White
};

static void update_rgba_entry(hal_palette_t* pal, size_t index)
{
    uint8_t r = hal_dac_6to8(pal->dac[index].r);
    uint8_t g = hal_dac_6to8(pal->dac[index].g);
    uint8_t b = hal_dac_6to8(pal->dac[index].b);

    // SDL_PIXELFORMAT_RGBA8888 in little-endian memory: R, G, B, A
    // (uint32_t value: (R << 24) | (G << 16) | (B << 8) | A on big-endian,
    // or pack byte-by-byte into RGBA)
    pal->rgba[index] = (uint32_t)r | ((uint32_t)g << 8) | ((uint32_t)b << 16) | (0xFF000000U);
}

void hal_palette_init_default(hal_palette_t* pal)
{
    if (pal == NULL) {
        return;
    }
    memset(pal, 0, sizeof(*pal));

    for (size_t i = 0; i < 16; ++i) {
        pal->dac[i].r = s_default_ega_palette_dac[i][0];
        pal->dac[i].g = s_default_ega_palette_dac[i][1];
        pal->dac[i].b = s_default_ega_palette_dac[i][2];
        update_rgba_entry(pal, i);
    }

    // Fill remaining slots 16..255 with grayscale ramp as fallback
    for (size_t i = 16; i < 256; ++i) {
        uint8_t level = (uint8_t)(((i - 16) * 63) / (256 - 16));
        pal->dac[i].r = level;
        pal->dac[i].g = level;
        pal->dac[i].b = level;
        update_rgba_entry(pal, i);
    }
}

void hal_palette_set_dac(hal_palette_t* pal, const uint8_t* dac_triplets, uint16_t start_index, uint16_t count)
{
    if (pal == NULL || dac_triplets == NULL) {
        return;
    }

    size_t end_index = (size_t)start_index + (size_t)count;
    if (end_index > 256) {
        end_index = 256;
    }

    size_t read_offset = 0;
    for (size_t i = start_index; i < end_index; ++i) {
        pal->dac[i].r = dac_triplets[read_offset + 0] & 0x3FU;
        pal->dac[i].g = dac_triplets[read_offset + 1] & 0x3FU;
        pal->dac[i].b = dac_triplets[read_offset + 2] & 0x3FU;
        read_offset += 3;

        update_rgba_entry(pal, i);
    }
}

void hal_palette_get_dac(const hal_palette_t* pal, uint8_t* out_dac_triplets, uint16_t start_index, uint16_t count)
{
    if (pal == NULL || out_dac_triplets == NULL) {
        return;
    }

    size_t end_index = (size_t)start_index + (size_t)count;
    if (end_index > 256) {
        end_index = 256;
    }

    size_t write_offset = 0;
    for (size_t i = start_index; i < end_index; ++i) {
        out_dac_triplets[write_offset + 0] = pal->dac[i].r;
        out_dac_triplets[write_offset + 1] = pal->dac[i].g;
        out_dac_triplets[write_offset + 2] = pal->dac[i].b;
        write_offset += 3;
    }
}

void hal_palette_fade(hal_palette_t* out_pal, const hal_palette_t* src_pal, uint16_t factor_256)
{
    if (out_pal == NULL || src_pal == NULL) {
        return;
    }
    if (factor_256 > 256) {
        factor_256 = 256;
    }

    for (size_t i = 0; i < 256; ++i) {
        out_pal->dac[i].r = (uint8_t)(((uint32_t)src_pal->dac[i].r * factor_256) >> 8);
        out_pal->dac[i].g = (uint8_t)(((uint32_t)src_pal->dac[i].g * factor_256) >> 8);
        out_pal->dac[i].b = (uint8_t)(((uint32_t)src_pal->dac[i].b * factor_256) >> 8);
        update_rgba_entry(out_pal, i);
    }
}
