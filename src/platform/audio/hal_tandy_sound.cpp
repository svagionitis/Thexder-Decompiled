#include "hal_tandy_sound.h"

#include <cstddef>
#include <cstdint>
#include <string.h>

namespace {

// Volume attenuation table: each step is -2 dB, step 15 is total silence
const int16_t s_volume_table[16]
    = { 8191, 6506, 5168, 4105, 3261, 2590, 2057, 1634, 1298, 1031, 819, 650, 516, 410, 326, 0 };

} // namespace

void hal_tandy_sound_init(hal_tandy_sound_t* snd, uint32_t sample_rate)
{
    if (snd == NULL) {
        return;
    }
    memset(snd, 0, sizeof(*snd));
    snd->sample_rate = (sample_rate > 0) ? sample_rate : 48000;
    snd->noise_shift_reg = 0x4000; // 15-bit LFSR initial seed
    hal_tandy_sound_reset(snd);
}

void hal_tandy_sound_reset(hal_tandy_sound_t* snd)
{
    if (snd == NULL) {
        return;
    }
    for (size_t i = 0; i < 3; ++i) {
        snd->tone_period[i] = 0;
        snd->tone_volume[i] = 15; // Muted
        snd->tone_phase[i] = 0;
        snd->tone_output[i] = 1;
    }

    snd->noise_volume = 15; // Muted
    snd->noise_type = 0;
    snd->noise_period = 0;
    snd->noise_shift_reg = 0x4000;
    snd->noise_phase = 0;
    snd->noise_output = 1;

    snd->speaker_enabled = false;
    snd->speaker_divisor = 0;
    snd->speaker_phase = 0;
    snd->speaker_output = 1;
}

void hal_tandy_sound_write_sn76496(hal_tandy_sound_t* snd, uint8_t byte)
{
    if (snd == NULL) {
        return;
    }

    // SN76496 command format:
    // Bit 7 = 1: Latch and execute
    // Bits 6..5: Channel (0..2 = Tone, 3 = Noise)
    // Bit 4: Type (0 = Frequency, 1 = Volume)
    // Bits 3..0: Data
    if (byte & 0x80U) {
        uint8_t ch = (byte >> 5) & 0x03U;
        bool is_vol = (byte & 0x10U) != 0;
        uint8_t data = byte & 0x0FU;

        if (is_vol) {
            if (ch < 3) {
                snd->tone_volume[ch] = data;
            } else {
                snd->noise_volume = data;
            }
        } else {
            if (ch < 3) {
                snd->tone_period[ch] = (uint16_t)((snd->tone_period[ch] & 0x03F0U) | data);
            } else {
                snd->noise_type = (data >> 2) & 0x01U;
                uint8_t rate = data & 0x03U;
                if (rate == 0) {
                    snd->noise_period = 16;
                } else if (rate == 1) {
                    snd->noise_period = 32;
                } else if (rate == 2) {
                    snd->noise_period = 64;
                } else {
                    snd->noise_period = snd->tone_period[2];
                }
                snd->noise_shift_reg = 0x4000;
            }
        }
    } else {
        // High 6 bits of tone frequency
        // Assuming channel 0..2
        uint8_t data = byte & 0x3FU;
        // Default to tone channel 0 if not latched
        snd->tone_period[0] = (uint16_t)((snd->tone_period[0] & 0x000FU) | ((uint32_t)data << 4U));
    }
}

void hal_tandy_sound_set_pc_speaker(hal_tandy_sound_t* snd, bool enabled, uint16_t divisor)
{
    if (snd == NULL) {
        return;
    }
    snd->speaker_enabled = enabled;
    snd->speaker_divisor = divisor;
}

void hal_tandy_sound_generate(hal_tandy_sound_t* snd, int16_t* output_interleaved_stereo, size_t num_frames)
{
    if (snd == NULL || output_interleaved_stereo == NULL || num_frames == 0) {
        return;
    }

    const uint32_t tandy_clock = 3579545; // 3.58 MHz
    const uint32_t pit_clock = 1193182; // 1.19 MHz PC Speaker

    for (size_t f = 0; f < num_frames; ++f) {
        int32_t sample = 0;

        // Tone channels 0..2
        for (size_t i = 0; i < 3; ++i) {
            if (snd->tone_volume[i] < 15 && snd->tone_period[i] > 0) {
                // Period in samples = (tone_period * 32 * sample_rate) / tandy_clock
                uint32_t period_samples = ((uint32_t)snd->tone_period[i] * 32U * snd->sample_rate) / tandy_clock;
                if (period_samples == 0) {
                    period_samples = 1;
                }

                snd->tone_phase[i]++;
                if (snd->tone_phase[i] >= (period_samples / 2)) {
                    snd->tone_phase[i] = 0;
                    snd->tone_output[i] = (int8_t)(-snd->tone_output[i]);
                }

                sample += (int32_t)snd->tone_output[i] * (int32_t)s_volume_table[snd->tone_volume[i]];
            }
        }

        // Noise channel
        if (snd->noise_volume < 15 && snd->noise_period > 0) {
            uint32_t noise_samples = ((uint32_t)snd->noise_period * 32U * snd->sample_rate) / tandy_clock;
            if (noise_samples == 0) {
                noise_samples = 1;
            }

            snd->noise_phase++;
            if (snd->noise_phase >= noise_samples) {
                snd->noise_phase = 0;
                // LFSR update
                uint32_t feedback = 0;
                if (snd->noise_type == 1) {
                    // White noise: tap bits 0 and 1
                    feedback = (snd->noise_shift_reg & 0x01U) ^ ((snd->noise_shift_reg >> 1) & 0x01U);
                } else {
                    // Periodic noise: tap bit 0
                    feedback = snd->noise_shift_reg & 0x01U;
                }
                snd->noise_shift_reg = (snd->noise_shift_reg >> 1) | (feedback << 14);
                snd->noise_output = (snd->noise_shift_reg & 0x01U) ? (int8_t)1 : (int8_t)(-1);
            }

            sample += (int32_t)snd->noise_output * (int32_t)s_volume_table[snd->noise_volume];
        }

        // PC Speaker square wave
        if (snd->speaker_enabled && snd->speaker_divisor > 0) {
            uint32_t spk_samples = ((uint32_t)snd->speaker_divisor * snd->sample_rate) / pit_clock;
            if (spk_samples == 0) {
                spk_samples = 1;
            }

            snd->speaker_phase++;
            if (snd->speaker_phase >= (spk_samples / 2)) {
                snd->speaker_phase = 0;
                snd->speaker_output = (int8_t)(-snd->speaker_output);
            }

            sample += (int32_t)snd->speaker_output * 6000;
        }

        // Clamp
        if (sample > 32767) {
            sample = 32767;
        } else if (sample < -32768) {
            sample = -32768;
        }

        output_interleaved_stereo[f * 2 + 0] = (int16_t)sample;
        output_interleaved_stereo[f * 2 + 1] = (int16_t)sample;
    }
}
