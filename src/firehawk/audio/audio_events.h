#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Sound effect event enumeration
typedef enum audio_sfx {
    SFX_NONE = 0x00,
    SFX_LASER = 0x01,
    SFX_MISSILE = 0x02,
    SFX_EXPLOSION = 0x03,
    SFX_SHIELD = 0x04,
    SFX_DAMAGE = 0x05,
    SFX_POWERUP = 0x06,
    SFX_TRANSFORM = 0x07
} audio_sfx_t;

/// @brief Initialize audio event routing subsystem
void audio_events_init(void);

/// @brief Dispatch sound effect to active HAL audio driver
/// @details Ghidra: FUN_1000_2180 (1000:2180)
/// @param sfx Sound effect identifier
void audio_events_play_sfx(audio_sfx_t sfx);

/// @brief Request stage background music playback
/// @param stage_num Stage number (0 to 12)
void audio_events_play_music(uint8_t stage_num);

/// @brief Stop background music playback
void audio_events_stop_music(void);

#ifdef __cplusplus
}
#endif
