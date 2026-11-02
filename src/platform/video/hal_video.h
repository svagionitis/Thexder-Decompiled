#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Standard MCGA / EGA dimensions for Firehawk: Thexder II
#define HAL_SCREEN_WIDTH 320
#define HAL_SCREEN_HEIGHT 200
#define HAL_EGA_HIRES_WIDTH 640
#define HAL_EGA_HIRES_HEIGHT 200
#define HAL_PALETTE_ENTRIES 256
#define HAL_EGA_PALETTE_ENTRIES 16

/// @brief Video blit clipping rectangle
typedef struct hal_clip_rect {
    int16_t left;
    int16_t top;
    int16_t right;
    int16_t bottom;
} hal_clip_rect_t;

/// @brief Sierra Video Driver Dispatch Table
/// @details Modeled directly after the 16-slot dispatch jump table recovered from
///          MCGA320.DRV and EGA640.DRV in Phase 2 reverse-engineering.
typedef struct hal_video_driver {
    /// @brief Slot 0: Initializes video mode (Mode 13h 320x200x256 or EGA 640x200x16)
    bool (*init)(uint16_t width, uint16_t height, uint8_t bpp);

    /// @brief Slot 1: Restores previous video mode and releases video resources
    void (*shutdown)(void);

    /// @brief Slot 2: Programs hardware DAC color palette (6-bit RGB triplets)
    void (*set_palette)(const uint8_t* dac_triplets, uint16_t start_index, uint16_t count);

    /// @brief Slot 2b: Reads back hardware DAC color palette
    void (*get_palette)(uint8_t* out_dac_triplets, uint16_t start_index, uint16_t count);

    /// @brief Slot 3: Blits solid sprite to virtual framebuffer
    void (*draw_sprite)(int16_t x, int16_t y, const uint8_t* sprite_data, int16_t width, int16_t height);

    /// @brief Slot 4: Blits masked/transparent sprite to virtual framebuffer
    void (*draw_masked_sprite)(
        int16_t x, int16_t y, const uint8_t* sprite_data, const uint8_t* mask_data, int16_t width, int16_t height);

    /// @brief Slot 5: Fills rectangular region with solid color index
    void (*fill_rect)(int16_t x, int16_t y, int16_t width, int16_t height, uint8_t color_index);

    /// @brief Slot 6: Copies rectangle from scratch/source to destination in framebuffer
    void (*copy_rect)(int16_t src_x, int16_t src_y, int16_t dst_x, int16_t dst_y, int16_t width, int16_t height);

    /// @brief Slot 7: Scrolls screen or sub-region horizontally/vertically
    void (*scroll_screen)(int16_t dx, int16_t dy, uint8_t fill_color);

    /// @brief Slot 8: Synchronizes with vertical blank (VBLANK ~60Hz)
    void (*vsync_wait)(void);

    /// @brief Slot 9: Presents active framebuffer to display (page flip)
    void (*flip_page)(void);

    /// @brief Slot 10: Updates active clipping rectangle
    void (*set_clip_rect)(int16_t left, int16_t top, int16_t right, int16_t bottom);

    /// @brief Slot 11: Clears entire screen to given color index
    void (*clear_screen)(uint8_t color_index);

    /// @brief Direct linear framebuffer access pointer (320x200 bytes)
    uint8_t* (*get_framebuffer)(void);
} hal_video_driver_t;

/// @brief Global video subsystem initialization and configuration
bool hal_video_init(const char* title, uint16_t initial_scale);

/// @brief Global video subsystem shutdown
void hal_video_shutdown(void);

/// @brief Retrieves the active video driver dispatch interface
const hal_video_driver_t* hal_video_get_driver(void);

#ifdef __cplusplus
}
#endif
