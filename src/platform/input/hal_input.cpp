#include "hal_input.h"
#include "hal_gamepad.h"
#include "hal_scancode.h"
#include "hal_sdl_raii.hpp"

#include <SDL2/SDL.h>
#include <cstddef>
#include <cstdint>
#include <string.h>

namespace {

#define KEY_BUFFER_CAPACITY 32

struct ScancodeQueueEntry {
    uint8_t scancode;
    bool pressed;
};

struct InputState {
    hal::ControllerPtr controller { nullptr };
    hal_gamepad_t gamepad { };
    bool key_down_matrix[256] { };
    ScancodeQueueEntry key_buffer[KEY_BUFFER_CAPACITY] { };
    size_t buf_head { 0 };
    size_t buf_tail { 0 };
    size_t buf_count { 0 };
    bool initialized { false };
};

InputState g_input;

void enqueue_scancode(uint8_t scancode, bool pressed)
{
    if (scancode == 0 || g_input.buf_count >= KEY_BUFFER_CAPACITY) {
        return;
    }

    g_input.key_buffer[g_input.buf_tail].scancode = scancode;
    g_input.key_buffer[g_input.buf_tail].pressed = pressed;
    g_input.buf_tail = (g_input.buf_tail + 1) % KEY_BUFFER_CAPACITY;
    g_input.buf_count++;
}

bool input_driver_init(void)
{
    memset(g_input.key_down_matrix, 0, sizeof(g_input.key_down_matrix));
    g_input.buf_head = 0;
    g_input.buf_tail = 0;
    g_input.buf_count = 0;
    hal_gamepad_init(&g_input.gamepad);
    return true;
}

void input_driver_shutdown(void)
{
    memset(g_input.key_down_matrix, 0, sizeof(g_input.key_down_matrix));
    g_input.buf_count = 0;
}

void input_driver_poll_events(void)
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_KEYDOWN:
        case SDL_KEYUP: {
            bool is_down = (event.type == SDL_KEYDOWN);
            uint8_t make_code = hal_scancode_from_sdl(event.key.keysym.scancode);
            if (make_code != 0) {
                g_input.key_down_matrix[make_code] = is_down;
                uint8_t raw_code = is_down ? make_code : hal_scancode_make_to_break(make_code);
                enqueue_scancode(raw_code, is_down);
            }
            break;
        }

        case SDL_CONTROLLERAXISMOTION:
        case SDL_CONTROLLERBUTTONDOWN:
        case SDL_CONTROLLERBUTTONUP:
        case SDL_CONTROLLERDEVICEADDED:
        case SDL_CONTROLLERDEVICEREMOVED:
            hal_gamepad_process_event(&g_input.gamepad, &event);
            break;

        case SDL_QUIT:
            // Post Esc scancode to request exit
            g_input.key_down_matrix[HAL_SCANCODE_ESC] = true;
            enqueue_scancode(HAL_SCANCODE_ESC, true);
            break;

        default:
            break;
        }
    }
}

bool input_driver_is_key_down(uint8_t dos_scancode)
{
    return g_input.key_down_matrix[dos_scancode & 0x7FU];
}

bool input_driver_get_next_scancode(uint8_t* out_scancode, bool* out_is_pressed)
{
    if (out_scancode == NULL || out_is_pressed == NULL || g_input.buf_count == 0) {
        return false;
    }

    *out_scancode = g_input.key_buffer[g_input.buf_head].scancode;
    *out_is_pressed = g_input.key_buffer[g_input.buf_head].pressed;
    g_input.buf_head = (g_input.buf_head + 1) % KEY_BUFFER_CAPACITY;
    g_input.buf_count--;
    return true;
}

void input_driver_clear_key_buffer(void)
{
    g_input.buf_head = 0;
    g_input.buf_tail = 0;
    g_input.buf_count = 0;
}

void input_driver_get_joystick_state(int16_t* out_x, int16_t* out_y, uint8_t* out_buttons)
{
    hal_gamepad_get_state(&g_input.gamepad, out_x, out_y, out_buttons);
}

const hal_input_driver_t s_input_driver
    = { input_driver_init, input_driver_shutdown, input_driver_poll_events, input_driver_is_key_down,
          input_driver_get_next_scancode, input_driver_clear_key_buffer, input_driver_get_joystick_state };

} // namespace

bool hal_input_init(void)
{
    if (g_input.initialized) {
        return true;
    }

    if (SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER) == 0) {
        if (SDL_NumJoysticks() > 0 && SDL_IsGameController(0)) {
            SDL_GameController* c = SDL_GameControllerOpen(0);
            if (c) {
                g_input.controller.reset(c);
                g_input.gamepad.connected = true;
            }
        }
    }

    input_driver_init();
    g_input.initialized = true;
    return true;
}

void hal_input_shutdown(void)
{
    if (!g_input.initialized) {
        return;
    }

    g_input.controller.reset();
    input_driver_shutdown();
    SDL_QuitSubSystem(SDL_INIT_GAMECONTROLLER);
    g_input.initialized = false;
}

const hal_input_driver_t* hal_input_get_driver(void)
{
    return &s_input_driver;
}
