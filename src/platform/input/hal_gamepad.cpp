#include "hal_gamepad.h"

#include <cstdint>
#include <string.h>

void hal_gamepad_init(hal_gamepad_t* pad)
{
    if (pad == NULL) {
        return;
    }
    memset(pad, 0, sizeof(*pad));
}

void hal_gamepad_process_event(hal_gamepad_t* pad, const SDL_Event* event)
{
    if (pad == NULL || event == NULL) {
        return;
    }

    switch (event->type) {
    case SDL_CONTROLLERAXISMOTION:
        if (event->caxis.axis == SDL_CONTROLLER_AXIS_LEFTX) {
            // Apply deadzone
            int16_t val = event->caxis.value;
            if (val > -8000 && val < 8000) {
                val = 0;
            }
            pad->axis_x = val;
        } else if (event->caxis.axis == SDL_CONTROLLER_AXIS_LEFTY) {
            int16_t val = event->caxis.value;
            if (val > -8000 && val < 8000) {
                val = 0;
            }
            pad->axis_y = val;
        }
        break;

    case SDL_CONTROLLERBUTTONDOWN:
    case SDL_CONTROLLERBUTTONUP: {
        bool down = (event->type == SDL_CONTROLLERBUTTONDOWN);
        uint8_t flag = 0;

        switch (event->cbutton.button) {
        case SDL_CONTROLLER_BUTTON_A:
            flag = HAL_JOY_BUTTON_1; // Laser
            break;
        case SDL_CONTROLLER_BUTTON_B:
            flag = HAL_JOY_BUTTON_2; // Missiles
            break;
        case SDL_CONTROLLER_BUTTON_X:
            flag = HAL_JOY_BUTTON_3; // Shield
            break;
        case SDL_CONTROLLER_BUTTON_Y:
            flag = HAL_JOY_BUTTON_4; // Transform Robot/Jet
            break;
        case SDL_CONTROLLER_BUTTON_DPAD_UP:
            pad->axis_y = down ? (int16_t)(-32767) : 0;
            break;
        case SDL_CONTROLLER_BUTTON_DPAD_DOWN:
            pad->axis_y = down ? (int16_t)32767 : 0;
            break;
        case SDL_CONTROLLER_BUTTON_DPAD_LEFT:
            pad->axis_x = down ? (int16_t)(-32767) : 0;
            break;
        case SDL_CONTROLLER_BUTTON_DPAD_RIGHT:
            pad->axis_x = down ? (int16_t)32767 : 0;
            break;
        default:
            break;
        }

        if (flag != 0) {
            if (down) {
                pad->buttons |= flag;
            } else {
                pad->buttons &= (uint8_t)(~flag);
            }
        }
        break;
    }

    case SDL_CONTROLLERDEVICEADDED:
        pad->connected = true;
        break;

    case SDL_CONTROLLERDEVICEREMOVED:
        pad->connected = false;
        pad->axis_x = 0;
        pad->axis_y = 0;
        pad->buttons = 0;
        break;

    default:
        break;
    }
}

void hal_gamepad_get_state(const hal_gamepad_t* pad, int16_t* out_x, int16_t* out_y, uint8_t* out_buttons)
{
    if (out_x != NULL) {
        *out_x = pad ? pad->axis_x : (int16_t)0;
    }
    if (out_y != NULL) {
        *out_y = pad ? pad->axis_y : (int16_t)0;
    }
    if (out_buttons != NULL) {
        *out_buttons = pad ? pad->buttons : (uint8_t)0;
    }
}
