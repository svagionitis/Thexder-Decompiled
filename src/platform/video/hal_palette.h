#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @brief 6-bit VGA DAC color triplet
typedef struct hal_dac_color {
    uint8_t r; ///< Red channel (0..63)
    uint8_t g; ///< Green channel (0..63)
    uint8_t b; ///< Blue channel (0..63)
} hal_dac_color_t;

/// @brief Palette manager holding active 256 DAC colors and 32-bit RGBA lookup table
typedef struct hal_palette {
    hal_dac_color_t dac[256];
    uint32_t rgba[256];
} hal_palette_t;

/// @brief Initializes palette with default EGA/VGA color table
void hal_palette_init_default(hal_palette_t* pal);

/// @brief Updates DAC registers and recalculates 32-bit RGBA lookups
/// @param[in,out] pal Target palette structure
/// @param[in] dac_triplets Raw byte array of 6-bit RGB values (3 * count bytes)
/// @param[in] start_index Starting palette slot (0..255)
/// @param[in] count Number of palette entries to update
void hal_palette_set_dac(hal_palette_t* pal, const uint8_t* dac_triplets, uint16_t start_index, uint16_t count);

/// @brief Reads current DAC registers into output buffer
void hal_palette_get_dac(const hal_palette_t* pal, uint8_t* out_dac_triplets, uint16_t start_index, uint16_t count);

/// @brief Converts a 6-bit DAC channel (0..63) to 8-bit channel (0..255)
static inline uint8_t hal_dac_6to8(uint8_t val6)
{
    uint32_t v = (uint32_t)(val6 & 0x3FU);
    return (uint8_t)((v * 255U) / 63U);
}

/// @brief Fades palette towards black by factor (0 = total black, 256 = full brightness)
void hal_palette_fade(hal_palette_t* out_pal, const hal_palette_t* src_pal, uint16_t factor_256);

#ifdef __cplusplus
}
#endif
