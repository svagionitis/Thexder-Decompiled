#include "hal_mock.h"
#include "input/hal_gamepad.h"
#include "input/hal_input.h"
#include "input/hal_scancode.h"

#include <assert.h>
#include <cstdint>
#include <stdio.h>

static void test_scancode_translation(void)
{
    // Arrow keys
    assert(hal_scancode_from_sdl(SDL_SCANCODE_UP) == HAL_SCANCODE_UP);
    assert(hal_scancode_from_sdl(SDL_SCANCODE_DOWN) == HAL_SCANCODE_DOWN);
    assert(hal_scancode_from_sdl(SDL_SCANCODE_LEFT) == HAL_SCANCODE_LEFT);
    assert(hal_scancode_from_sdl(SDL_SCANCODE_RIGHT) == HAL_SCANCODE_RIGHT);

    // Gameplay keys
    assert(hal_scancode_from_sdl(SDL_SCANCODE_SPACE) == HAL_SCANCODE_SPACE);
    assert(hal_scancode_from_sdl(SDL_SCANCODE_RETURN) == HAL_SCANCODE_ENTER);
    assert(hal_scancode_from_sdl(SDL_SCANCODE_ESCAPE) == HAL_SCANCODE_ESC);
    assert(hal_scancode_from_sdl(SDL_SCANCODE_LCTRL) == HAL_SCANCODE_LCTRL);
    assert(hal_scancode_from_sdl(SDL_SCANCODE_LALT) == HAL_SCANCODE_LALT);
    assert(hal_scancode_from_sdl(SDL_SCANCODE_LSHIFT) == HAL_SCANCODE_LSHIFT);
    assert(hal_scancode_from_sdl(SDL_SCANCODE_TAB) == HAL_SCANCODE_TAB);

    // Make to break conversion
    assert(hal_scancode_make_to_break(HAL_SCANCODE_SPACE) == (HAL_SCANCODE_SPACE | 0x80U));
    assert(hal_scancode_make_to_break(HAL_SCANCODE_UP) == 0xC8);

    printf("  [PASS] test_scancode_translation\n");
}

static void test_gamepad_mapping(void)
{
    hal_gamepad_t pad { };
    hal_gamepad_init(&pad);

    int16_t x = 0;
    int16_t y = 0;
    uint8_t btns = 0;
    hal_gamepad_get_state(&pad, &x, &y, &btns);
    assert(x == 0 && y == 0 && btns == 0);

    // Simulate Button A Down (Laser)
    SDL_Event ev { };
    ev.type = SDL_CONTROLLERBUTTONDOWN;
    ev.cbutton.button = SDL_CONTROLLER_BUTTON_A;
    hal_gamepad_process_event(&pad, &ev);

    hal_gamepad_get_state(&pad, &x, &y, &btns);
    assert((btns & HAL_JOY_BUTTON_1) != 0);

    // Simulate Button B Down (Missiles)
    ev.cbutton.button = SDL_CONTROLLER_BUTTON_B;
    hal_gamepad_process_event(&pad, &ev);

    hal_gamepad_get_state(&pad, &x, &y, &btns);
    assert((btns & HAL_JOY_BUTTON_1) != 0);
    assert((btns & HAL_JOY_BUTTON_2) != 0);

    // Simulate Button A Up
    ev.type = SDL_CONTROLLERBUTTONUP;
    ev.cbutton.button = SDL_CONTROLLER_BUTTON_A;
    hal_gamepad_process_event(&pad, &ev);

    hal_gamepad_get_state(&pad, &x, &y, &btns);
    assert((btns & HAL_JOY_BUTTON_1) == 0);
    assert((btns & HAL_JOY_BUTTON_2) != 0);

    printf("  [PASS] test_gamepad_mapping\n");
}

static void test_mock_input_driver(void)
{
    hal_mock_state_t mock { };
    hal_mock_init(&mock);
    hal_input_driver_t driver = hal_mock_get_input_driver(&mock);

    assert(!driver.is_key_down(HAL_SCANCODE_SPACE));

    // Inject Space key press
    hal_mock_inject_key(&mock, HAL_SCANCODE_SPACE, true);
    assert(driver.is_key_down(HAL_SCANCODE_SPACE));

    uint8_t sc = 0;
    bool is_pressed = false;
    bool ok = driver.get_next_scancode(&sc, &is_pressed);
    assert(ok);
    (void)ok;
    assert(sc == HAL_SCANCODE_SPACE);
    assert(is_pressed == true);

    // Inject Space key release
    hal_mock_inject_key(&mock, HAL_SCANCODE_SPACE, false);
    assert(!driver.is_key_down(HAL_SCANCODE_SPACE));

    ok = driver.get_next_scancode(&sc, &is_pressed);
    assert(ok);
    (void)ok;
    assert(sc == (HAL_SCANCODE_SPACE | 0x80U));
    assert(is_pressed == false);

    printf("  [PASS] test_mock_input_driver\n");
}

int main(void)
{
    printf("[BEGIN] test_hal_input\n");
    test_scancode_translation();
    test_gamepad_mapping();
    test_mock_input_driver();
    printf("[SUCCESS] test_hal_input completed cleanly.\n");
    return 0;
}
