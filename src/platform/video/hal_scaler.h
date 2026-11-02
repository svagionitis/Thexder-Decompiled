#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "hal_framebuffer.h"
#include "hal_palette.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Scaled display viewport bounds
typedef struct hal_viewport {
    int32_t x;
    int32_t y;
    int32_t width;
    int32_t height;
} hal_viewport_t;

/// @brief Video scaler state
typedef struct hal_scaler {
    uint32_t rgba_buffer[HAL_SCREEN_WIDTH * HAL_SCREEN_HEIGHT];
    bool enable_scanlines;
} hal_scaler_t;

/// @brief Initializes video scaler
void hal_scaler_init(hal_scaler_t* scaler);

/// @brief Converts 8-bit indexed framebuffer to 32-bit RGBA using active palette
void hal_scaler_convert_frame(hal_scaler_t* scaler, const hal_framebuffer_t* fb, const hal_palette_t* pal);

/// @brief Calculates 4:3 aspect-ratio preserving viewport for window dimensions
hal_viewport_t hal_scaler_calculate_viewport(int32_t window_width, int32_t window_height);

#ifdef __cplusplus
}
#endif
