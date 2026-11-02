/// @file audio_events.c
/// @brief Gameplay sound effect and background music dispatch to HAL audio driver.
/// @details Ghidra: FUN_1000_2180 (1000:2180)

#include "audio/audio_events.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "audio/hal_audio.h"

void audio_events_init(void)
{
    // Audio subsystem initialized via hal_init()
}

void audio_events_play_sfx(audio_sfx_t sfx)
{
    const hal_audio_driver_t* driver = hal_audio_get_driver();
    if (driver != NULL && driver->play_sfx != NULL) {
        uint8_t priority = 5;
        if (sfx == SFX_DAMAGE || sfx == SFX_EXPLOSION) {
            priority = 10; // High priority sound effect
        }
        driver->play_sfx((uint16_t)sfx, priority);
    }
}

void audio_events_play_music(uint8_t stage_num)
{
    const hal_audio_driver_t* driver = hal_audio_get_driver();
    if (driver != NULL && driver->play_music != NULL) {
        // Map stage number to track ID (1..14)
        uint16_t track_id = (uint16_t)(stage_num + 1);
        driver->play_music(track_id, true);
    }
}

void audio_events_stop_music(void)
{
    const hal_audio_driver_t* driver = hal_audio_get_driver();
    if (driver != NULL && driver->stop_music != NULL) {
        driver->stop_music();
    }
}
