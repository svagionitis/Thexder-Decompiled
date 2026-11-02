#pragma once

#include <stddef.h>
#include <stdint.h>

#include "hal_audio.h"

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_MIXER_RING_CAPACITY (HAL_AUDIO_BUFFER_SAMPLES * 8)

typedef struct hal_audio_mixer {
    int16_t ring_buffer[HAL_MIXER_RING_CAPACITY * 2]; ///< Interleaved stereo ring buffer
    size_t read_pos;
    size_t write_pos;
    size_t available_frames;

    uint8_t master_volume; ///< 0..127
    uint8_t music_volume; ///< 0..127
    uint8_t sfx_volume; ///< 0..127
} hal_audio_mixer_t;

/// @brief Initializes audio mixer with default volumes
void hal_audio_mixer_init(hal_audio_mixer_t* mixer);

/// @brief Clears mixer buffer
void hal_audio_mixer_reset(hal_audio_mixer_t* mixer);

/// @brief Pushes synthesized interleaved stereo frames into ring buffer
size_t hal_audio_mixer_push_samples(hal_audio_mixer_t* mixer, const int16_t* frames, size_t num_frames);

/// @brief Pulls samples from ring buffer to feed SDL audio device callback
size_t hal_audio_mixer_pull_samples(hal_audio_mixer_t* mixer, int16_t* out_frames, size_t requested_frames);

#ifdef __cplusplus
}
#endif
