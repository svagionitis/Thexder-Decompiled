#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Tandy 3-Voice (SN76496-compatible) and PC Speaker sound generator
typedef struct hal_tandy_sound {
    uint16_t tone_period[3]; ///< Frequency counters for 3 square-wave channels (10 bits)
    uint8_t tone_volume[3]; ///< Volume attenuation (0 = full, 15 = silent)
    uint32_t tone_phase[3]; ///< Square-wave phase accumulator
    int8_t tone_output[3]; ///< Current square-wave state (+1 or -1)

    uint8_t noise_volume; ///< Noise attenuation (0..15)
    uint8_t noise_type; ///< 0 = periodic, 1 = white noise
    uint16_t noise_period; ///< Noise shift frequency
    uint32_t noise_shift_reg; ///< Linear feedback shift register (15 or 16 bits)
    uint32_t noise_phase; ///< Noise phase accumulator
    int8_t noise_output; ///< Current noise bit (+1 or -1)

    // PC Speaker PIT 8253 channel 2
    bool speaker_enabled;
    uint16_t speaker_divisor; ///< PIT divider (1193182 Hz / divisor)
    uint32_t speaker_phase;
    int8_t speaker_output;

    uint32_t sample_rate;
} hal_tandy_sound_t;

/// @brief Initializes Tandy / PC Speaker sound generator
void hal_tandy_sound_init(hal_tandy_sound_t* snd, uint32_t sample_rate);

/// @brief Resets all channels to silent
void hal_tandy_sound_reset(hal_tandy_sound_t* snd);

/// @brief Writes a byte to SN76496 sound chip register
void hal_tandy_sound_write_sn76496(hal_tandy_sound_t* snd, uint8_t byte);

/// @brief Sets PC Speaker PIT divider and enable state
void hal_tandy_sound_set_pc_speaker(hal_tandy_sound_t* snd, bool enabled, uint16_t divisor);

/// @brief Synthesizes 16-bit signed interleaved stereo PCM samples
void hal_tandy_sound_generate(hal_tandy_sound_t* snd, int16_t* output_interleaved_stereo, size_t num_frames);

#ifdef __cplusplus
}
#endif
