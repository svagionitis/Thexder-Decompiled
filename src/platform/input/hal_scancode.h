#pragma once

#include <stdint.h>

#include "hal_input.h"
#include <SDL2/SDL_scancode.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Translates an SDL_Scancode to an IBM PC Set 1 Make scancode
/// @param[in] sdl_scancode SDL scancode enum
/// @return IBM PC Set 1 Make scancode byte, or 0 if unmapped
uint8_t hal_scancode_from_sdl(SDL_Scancode sdl_scancode);

/// @brief Returns the break scancode for a make scancode (byte | 0x80)
static inline uint8_t hal_scancode_make_to_break(uint8_t make_code)
{
    return (uint8_t)(make_code | 0x80U);
}

#ifdef __cplusplus
}
#endif
