#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "audio/hal_audio.h"
#include "input/hal_input.h"
#include "video/hal_video.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct hal_mock_state {
    // Video state
    uint8_t framebuffer[HAL_SCREEN_WIDTH * HAL_SCREEN_HEIGHT];
    uint8_t palette_dac[256 * 3];
    uint16_t flip_page_count;
    uint16_t vsync_wait_count;

    // Audio state
    uint16_t last_music_track;
    bool music_playing;
    bool music_looping;
    uint16_t last_sfx_id;
    uint8_t last_sfx_priority;
    uint8_t master_volume;
    uint8_t music_volume;
    uint8_t sfx_volume;

    // Input state
    bool key_down[256];
    uint8_t queued_scancodes[32];
    bool queued_pressed[32];
    size_t queue_head;
    size_t queue_tail;
    size_t queue_count;
    int16_t joy_x;
    int16_t joy_y;
    uint8_t joy_buttons;
} hal_mock_state_t;

/// @brief Initializes mock HAL state
void hal_mock_init(hal_mock_state_t* mock);

/// @brief Simulates key press/release event in mock input queue
void hal_mock_inject_key(hal_mock_state_t* mock, uint8_t dos_scancode, bool pressed);

/// @brief Sets simulated joystick axes and buttons
void hal_mock_set_joystick(hal_mock_state_t* mock, int16_t x, int16_t y, uint8_t buttons);

/// @brief Returns mock video driver dispatch interface bound to mock state
hal_video_driver_t hal_mock_get_video_driver(hal_mock_state_t* mock);

/// @brief Returns mock audio driver dispatch interface bound to mock state
hal_audio_driver_t hal_mock_get_audio_driver(hal_mock_state_t* mock);

/// @brief Returns mock input driver dispatch interface bound to mock state
hal_input_driver_t hal_mock_get_input_driver(hal_mock_state_t* mock);

#ifdef __cplusplus
}
#endif
