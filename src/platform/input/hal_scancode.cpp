#include "hal_scancode.h"

#include <cstdint>

uint8_t hal_scancode_from_sdl(SDL_Scancode sdl_scancode)
{
    switch (sdl_scancode) {
    // Navigation & Arrow Keys
    case SDL_SCANCODE_UP:
        return HAL_SCANCODE_UP;
    case SDL_SCANCODE_DOWN:
        return HAL_SCANCODE_DOWN;
    case SDL_SCANCODE_LEFT:
        return HAL_SCANCODE_LEFT;
    case SDL_SCANCODE_RIGHT:
        return HAL_SCANCODE_RIGHT;
    case SDL_SCANCODE_HOME:
        return HAL_SCANCODE_HOME;
    case SDL_SCANCODE_END:
        return HAL_SCANCODE_END;
    case SDL_SCANCODE_PAGEUP:
        return HAL_SCANCODE_PAGEUP;
    case SDL_SCANCODE_PAGEDOWN:
        return HAL_SCANCODE_PAGEDOWN;

    // Keypad Navigation (Standard DOS mapping)
    case SDL_SCANCODE_KP_8:
        return HAL_SCANCODE_UP;
    case SDL_SCANCODE_KP_2:
        return HAL_SCANCODE_DOWN;
    case SDL_SCANCODE_KP_4:
        return HAL_SCANCODE_LEFT;
    case SDL_SCANCODE_KP_6:
        return HAL_SCANCODE_RIGHT;
    case SDL_SCANCODE_KP_7:
        return HAL_SCANCODE_HOME;
    case SDL_SCANCODE_KP_1:
        return HAL_SCANCODE_END;
    case SDL_SCANCODE_KP_9:
        return HAL_SCANCODE_PAGEUP;
    case SDL_SCANCODE_KP_3:
        return HAL_SCANCODE_PAGEDOWN;
    case SDL_SCANCODE_KP_5:
        return HAL_SCANCODE_CENTER;

    // Action Keys
    case SDL_SCANCODE_SPACE:
        return HAL_SCANCODE_SPACE;
    case SDL_SCANCODE_RETURN:
        return HAL_SCANCODE_ENTER;
    case SDL_SCANCODE_KP_ENTER:
        return HAL_SCANCODE_ENTER;
    case SDL_SCANCODE_ESCAPE:
        return HAL_SCANCODE_ESC;
    case SDL_SCANCODE_TAB:
        return HAL_SCANCODE_TAB;
    case SDL_SCANCODE_LCTRL:
        return HAL_SCANCODE_LCTRL;
    case SDL_SCANCODE_RCTRL:
        return HAL_SCANCODE_LCTRL;
    case SDL_SCANCODE_LALT:
        return HAL_SCANCODE_LALT;
    case SDL_SCANCODE_RALT:
        return HAL_SCANCODE_LALT;
    case SDL_SCANCODE_LSHIFT:
        return HAL_SCANCODE_LSHIFT;
    case SDL_SCANCODE_RSHIFT:
        return HAL_SCANCODE_RSHIFT;

    // Number Keys
    case SDL_SCANCODE_1:
        return HAL_SCANCODE_1;
    case SDL_SCANCODE_2:
        return HAL_SCANCODE_2;
    case SDL_SCANCODE_3:
        return HAL_SCANCODE_3;
    case SDL_SCANCODE_4:
        return HAL_SCANCODE_4;
    case SDL_SCANCODE_5:
        return HAL_SCANCODE_5;
    case SDL_SCANCODE_6:
        return HAL_SCANCODE_6;
    case SDL_SCANCODE_7:
        return HAL_SCANCODE_7;
    case SDL_SCANCODE_8:
        return HAL_SCANCODE_8;
    case SDL_SCANCODE_9:
        return HAL_SCANCODE_9;
    case SDL_SCANCODE_0:
        return HAL_SCANCODE_0;

    // Letters
    case SDL_SCANCODE_A:
        return HAL_SCANCODE_A;
    case SDL_SCANCODE_B:
        return HAL_SCANCODE_B;
    case SDL_SCANCODE_C:
        return HAL_SCANCODE_C;
    case SDL_SCANCODE_D:
        return HAL_SCANCODE_D;
    case SDL_SCANCODE_E:
        return HAL_SCANCODE_E;
    case SDL_SCANCODE_F:
        return HAL_SCANCODE_F;
    case SDL_SCANCODE_G:
        return HAL_SCANCODE_G;
    case SDL_SCANCODE_H:
        return HAL_SCANCODE_H;
    case SDL_SCANCODE_I:
        return HAL_SCANCODE_I;
    case SDL_SCANCODE_J:
        return HAL_SCANCODE_J;
    case SDL_SCANCODE_K:
        return HAL_SCANCODE_K;
    case SDL_SCANCODE_L:
        return HAL_SCANCODE_L;
    case SDL_SCANCODE_M:
        return HAL_SCANCODE_M;
    case SDL_SCANCODE_N:
        return HAL_SCANCODE_N;
    case SDL_SCANCODE_O:
        return HAL_SCANCODE_O;
    case SDL_SCANCODE_P:
        return HAL_SCANCODE_P;
    case SDL_SCANCODE_Q:
        return HAL_SCANCODE_Q;
    case SDL_SCANCODE_R:
        return HAL_SCANCODE_R;
    case SDL_SCANCODE_S:
        return HAL_SCANCODE_S;
    case SDL_SCANCODE_T:
        return HAL_SCANCODE_T;
    case SDL_SCANCODE_U:
        return HAL_SCANCODE_U;
    case SDL_SCANCODE_V:
        return HAL_SCANCODE_V;
    case SDL_SCANCODE_W:
        return HAL_SCANCODE_W;
    case SDL_SCANCODE_X:
        return HAL_SCANCODE_X;
    case SDL_SCANCODE_Y:
        return HAL_SCANCODE_Y;
    case SDL_SCANCODE_Z:
        return HAL_SCANCODE_Z;

    // Function Keys
    case SDL_SCANCODE_F1:
        return HAL_SCANCODE_F1;
    case SDL_SCANCODE_F2:
        return HAL_SCANCODE_F2;
    case SDL_SCANCODE_F3:
        return HAL_SCANCODE_F3;
    case SDL_SCANCODE_F4:
        return HAL_SCANCODE_F4;
    case SDL_SCANCODE_F5:
        return HAL_SCANCODE_F5;
    case SDL_SCANCODE_F6:
        return HAL_SCANCODE_F6;
    case SDL_SCANCODE_F7:
        return HAL_SCANCODE_F7;
    case SDL_SCANCODE_F8:
        return HAL_SCANCODE_F8;
    case SDL_SCANCODE_F9:
        return HAL_SCANCODE_F9;
    case SDL_SCANCODE_F10:
        return HAL_SCANCODE_F10;

    default:
        return 0x00;
    }
}
