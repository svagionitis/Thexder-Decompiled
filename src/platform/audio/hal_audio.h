#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_AUDIO_SAMPLE_RATE 48000
#define HAL_AUDIO_BUFFER_SAMPLES 1024

/// @brief Audio output backend type
typedef enum hal_audio_backend {
    HAL_AUDIO_BACKEND_OPL2_ADLIB = 0, ///< AdLib FM synthesizer (ADL.DRV)
    HAL_AUDIO_BACKEND_OPL2_SBLAST = 1, ///< Sound Blaster FM / DSP (SNDBLAST.DRV)
    HAL_AUDIO_BACKEND_MT32 = 2, ///< Roland MT-32 MIDI (MT32.DRV)
    HAL_AUDIO_BACKEND_TANDY = 3, ///< Tandy 3-Voice / PCjr (TANDY.DRV)
    HAL_AUDIO_BACKEND_PC_SPEAKER = 4 ///< IBM PC Internal Speaker (STD.DRV)
} hal_audio_backend_t;

/// @brief Sierra Sound Synthesizer Dispatch Table
/// @details Modeled directly from the 16-slot audio driver dispatch tables
///          recovered from ADL.DRV, SNDBLAST.DRV, MT32.DRV, and STD.DRV.
typedef struct hal_audio_driver {
    /// @brief Slot 0: Initializes audio hardware and starts audio streaming thread
    bool (*init)(uint32_t sample_rate);

    /// @brief Slot 1: Silences all channels and releases audio device
    void (*shutdown)(void);

    /// @brief Slot 2: Loads track and begins music playback
    void (*play_music)(uint16_t track_id, bool loop);

    /// @brief Slot 3: Halts music playback and releases active voices
    void (*stop_music)(void);

    /// @brief Slot 4: Pauses music playback
    void (*pause_music)(void);

    /// @brief Slot 5: Resumes paused music playback
    void (*resume_music)(void);

    /// @brief Slot 6: Plays sound effect with given priority
    void (*play_sfx)(uint16_t sfx_id, uint8_t priority);

    /// @brief Slot 7: Stops active sound effect
    void (*stop_sfx)(uint16_t sfx_id);

    /// @brief Slot 8: Sets master output volume (0..127)
    void (*set_master_volume)(uint8_t volume);

    /// @brief Sets background music volume (0..127)
    void (*set_music_volume)(uint8_t volume);

    /// @brief Sets sound effects volume (0..127)
    void (*set_sfx_volume)(uint8_t volume);

    /// @brief Slot 9: Sequencer tick callback (called ~60 times per second)
    void (*update)(void);
} hal_audio_driver_t;

/// @brief Global audio subsystem initialization
bool hal_audio_init(hal_audio_backend_t backend);

/// @brief Global audio subsystem shutdown
void hal_audio_shutdown(void);

/// @brief Selects active audio synthesizer backend
void hal_audio_set_backend(hal_audio_backend_t backend);

/// @brief Retrieves the active audio driver dispatch interface
const hal_audio_driver_t* hal_audio_get_driver(void);

#ifdef __cplusplus
}
#endif
