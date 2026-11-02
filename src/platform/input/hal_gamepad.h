#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "hal_input.h"
#include <SDL2/SDL.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct hal_gamepad {
    int16_t axis_x; ///< -32768..32767
    int16_t axis_y; ///< -32768..32767
    uint8_t buttons; ///< Bitflags: HAL_JOY_BUTTON_1..4
    bool connected;
} hal_gamepad_t;

/// @brief Initializes gamepad state
void hal_gamepad_init(hal_gamepad_t* pad);

/// @brief Updates state from SDL controller events
void hal_gamepad_process_event(hal_gamepad_t* pad, const SDL_Event* event);

/// @brief Gets active joystick state
void hal_gamepad_get_state(const hal_gamepad_t* pad, int16_t* out_x, int16_t* out_y, uint8_t* out_buttons);

#ifdef __cplusplus
}
#endif
