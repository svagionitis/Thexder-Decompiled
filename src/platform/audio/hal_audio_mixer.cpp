#include "hal_audio_mixer.h"

#include <cstddef>
#include <cstdint>
#include <string.h>

void hal_audio_mixer_init(hal_audio_mixer_t* mixer)
{
    if (mixer == NULL) {
        return;
    }
    memset(mixer, 0, sizeof(*mixer));
    mixer->master_volume = 127;
    mixer->music_volume = 127;
    mixer->sfx_volume = 127;
}

void hal_audio_mixer_reset(hal_audio_mixer_t* mixer)
{
    if (mixer == NULL) {
        return;
    }
    mixer->read_pos = 0;
    mixer->write_pos = 0;
    mixer->available_frames = 0;
    memset(mixer->ring_buffer, 0, sizeof(mixer->ring_buffer));
}

size_t hal_audio_mixer_push_samples(hal_audio_mixer_t* mixer, const int16_t* frames, size_t num_frames)
{
    if (mixer == NULL || frames == NULL || num_frames == 0) {
        return 0;
    }

    size_t free_frames = HAL_MIXER_RING_CAPACITY - mixer->available_frames;
    size_t to_write = (num_frames < free_frames) ? num_frames : free_frames;

    for (size_t i = 0; i < to_write; ++i) {
        size_t write_idx = mixer->write_pos * 2;
        mixer->ring_buffer[write_idx + 0] = frames[i * 2 + 0];
        mixer->ring_buffer[write_idx + 1] = frames[i * 2 + 1];
        mixer->write_pos = (mixer->write_pos + 1) % HAL_MIXER_RING_CAPACITY;
    }

    mixer->available_frames += to_write;
    return to_write;
}

size_t hal_audio_mixer_pull_samples(hal_audio_mixer_t* mixer, int16_t* out_frames, size_t requested_frames)
{
    if (mixer == NULL || out_frames == NULL || requested_frames == 0) {
        return 0;
    }

    size_t to_read = (requested_frames < mixer->available_frames) ? requested_frames : mixer->available_frames;
    int32_t master_vol = (int32_t)mixer->master_volume;

    for (size_t i = 0; i < to_read; ++i) {
        size_t read_idx = mixer->read_pos * 2;
        int32_t left = (int32_t)mixer->ring_buffer[read_idx + 0];
        int32_t right = (int32_t)mixer->ring_buffer[read_idx + 1];

        // Apply master volume attenuation
        left = (left * master_vol) / 127;
        right = (right * master_vol) / 127;

        out_frames[i * 2 + 0] = (int16_t)left;
        out_frames[i * 2 + 1] = (int16_t)right;

        mixer->read_pos = (mixer->read_pos + 1) % HAL_MIXER_RING_CAPACITY;
    }

    mixer->available_frames -= to_read;

    // Fill remaining requested frames with silence if ring buffer is starved
    if (to_read < requested_frames) {
        size_t remaining = requested_frames - to_read;
        memset(&out_frames[to_read * 2], 0, remaining * 2 * sizeof(int16_t));
    }

    return to_read;
}
