#include "hal_opl2.h"

#include <cstddef>
#include <cstdint>
#include <math.h>
#include <string.h>

namespace {

// 1024-entry full-period sine lookup table (scaled to signed 16-bit)
int16_t s_sine_table[1024];
bool s_sine_table_initialized = false;

const uint8_t s_op_mult_table[16] = { 1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 20, 24, 24, 30, 30 };

// Maps channel (0..8) and op (0..1) to operator index (0..17)
const uint8_t s_channel_to_op[9][2] = {
    { 0, 3 }, // Channel 0
    { 1, 4 }, // Channel 1
    { 2, 5 }, // Channel 2
    { 6, 9 }, // Channel 3
    { 7, 10 }, // Channel 4
    { 8, 11 }, // Channel 5
    { 12, 15 }, // Channel 6
    { 13, 16 }, // Channel 7
    { 14, 17 } // Channel 8
};

// Maps register offset (0x00..0x15) to operator index (0..17)
const int8_t s_offset_to_op[32] = { 0, 1, 2, 3, 4, 5, -1, -1, 6, 7, 8, 9, 10, 11, -1, -1, 12, 13, 14, 15, 16, 17, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1 };

void init_sine_table(void)
{
    if (s_sine_table_initialized) {
        return;
    }
    const double k_pi = 3.14159265358979323846;
    for (size_t i = 0; i < 1024; ++i) {
        double angle = ((double)i * 2.0 * k_pi) / 1024.0;
        double val = sin(angle) * 8192.0; // Scaled to prevent clipping on 9 channels
        s_sine_table[i] = (int16_t)val;
    }
    s_sine_table_initialized = true;
}

int16_t evaluate_wave(uint32_t phase, uint8_t waveform)
{
    uint32_t idx = (phase >> 10) & 0x3FFU; // Top 10 bits of 20-bit phase
    int16_t sample = s_sine_table[idx];

    switch (waveform & 0x03U) {
    case 0: // Normal sine
        return sample;
    case 1: // Half-sine (negative half clipped to 0)
        return (idx < 512U) ? sample : (int16_t)0;
    case 2: // Absolute sine
        return (sample < 0) ? (int16_t)(-sample) : sample;
    case 3: // Pulse sine
        return (idx < 256U || (idx >= 512U && idx < 768U)) ? (sample < 0 ? (int16_t)(-sample) : sample) : (int16_t)0;
    default:
        return sample;
    }
}

void update_phase_step(hal_opl2_chip_t* chip, size_t ch_idx, size_t op_idx)
{
    hal_opl2_channel_t* ch = &chip->channels[ch_idx];
    hal_opl2_operator_t* op = &chip->operators[op_idx];

    if (chip->sample_rate == 0) {
        return;
    }

    // OPL2 clock frequency is nominal 3,579,545 Hz / 72 = 49,716 Hz
    // Phase step = Fnum * 2^(Block - 1) * Mult
    uint32_t mult = s_op_mult_table[op->mult & 0x0FU];
    uint32_t fnum = ch->fnum;
    uint32_t block = ch->block;

    // Nominal formula scaled to 20-bit phase accumulator
    // phase_inc = (fnum * mult << block) * (49716.0 / sample_rate)
    uint64_t num = (uint64_t)fnum * (uint64_t)mult;
    if (block > 0) {
        num <<= (block - 1);
    } else {
        num >>= 1;
    }

    uint64_t inc = (num * 49716ULL * 1024ULL) / (uint64_t)chip->sample_rate;
    op->phase_step = (uint32_t)inc;
}

} // namespace

void hal_opl2_init(hal_opl2_chip_t* chip, uint32_t sample_rate)
{
    if (chip == NULL) {
        return;
    }
    init_sine_table();
    memset(chip, 0, sizeof(*chip));
    chip->sample_rate = (sample_rate > 0) ? sample_rate : 48000;

    for (size_t ch = 0; ch < HAL_OPL2_NUM_CHANNELS; ++ch) {
        chip->channels[ch].op1_idx = s_channel_to_op[ch][0];
        chip->channels[ch].op2_idx = s_channel_to_op[ch][1];
    }

    hal_opl2_reset(chip);
}

void hal_opl2_reset(hal_opl2_chip_t* chip)
{
    if (chip == NULL) {
        return;
    }
    memset(chip->registers, 0, sizeof(chip->registers));
    chip->waveform_select_enable = 0;
    chip->rhythm_mode = 0;
    chip->lfo_am_phase = 0;
    chip->lfo_pm_phase = 0;

    for (size_t i = 0; i < HAL_OPL2_NUM_OPERATORS; ++i) {
        chip->operators[i].phase = 0;
        chip->operators[i].phase_step = 0;
        chip->operators[i].eg_level = 0x3FF; // Off/silent
        chip->operators[i].eg_state = OPL2_EG_OFF;
        chip->operators[i].mult = 1;
        chip->operators[i].total_level = 0x3F; // Max attenuation
        chip->operators[i].feedback[0] = 0;
        chip->operators[i].feedback[1] = 0;
    }

    for (size_t i = 0; i < HAL_OPL2_NUM_CHANNELS; ++i) {
        chip->channels[i].fnum = 0;
        chip->channels[i].block = 0;
        chip->channels[i].key_on = 0;
        chip->channels[i].feedback = 0;
        chip->channels[i].connection = 0;
    }
}

void hal_opl2_write(hal_opl2_chip_t* chip, uint8_t reg, uint8_t val)
{
    if (chip == NULL) {
        return;
    }

    chip->registers[reg] = val;

    if (reg == 0x01) {
        chip->waveform_select_enable = (val & 0x20U) ? 1 : 0;
        return;
    }

    if (reg == 0xBD) {
        chip->rhythm_mode = (val & 0x20U) ? 1 : 0;
        return;
    }

    // Operator registers: 0x20..0x35, 0x40..0x55, 0x60..0x75, 0x80..0x95, 0xE0..0xF5
    if ((reg >= 0x20U && reg <= 0x95U) || (reg >= 0xE0U && reg <= 0xF5U)) {
        uint8_t reg_group = reg & 0xE0U;
        uint8_t reg_offset = reg & 0x1FU;

        int8_t op_idx = s_offset_to_op[reg_offset];
        if (op_idx >= 0 && (size_t)op_idx < HAL_OPL2_NUM_OPERATORS) {
            hal_opl2_operator_t* op = &chip->operators[(size_t)op_idx];

            switch (reg_group) {
            case 0x20: // AM / VIB / EG-TYP / KSR / MULT
                op->am = (val & 0x80U) ? 1 : 0;
                op->vib = (val & 0x40U) ? 1 : 0;
                op->eg_type = (val & 0x20U) ? 1 : 0;
                op->ksr = (val & 0x10U) ? 1 : 0;
                op->mult = val & 0x0FU;
                break;
            case 0x40: // KSL / Total Level
                op->ksl = (val >> 6) & 0x03U;
                op->total_level = val & 0x3FU;
                break;
            case 0x60: // Attack Rate / Decay Rate
                op->attack_rate = (val >> 4) & 0x0FU;
                op->decay_rate = val & 0x0FU;
                break;
            case 0x80: // Sustain Level / Release Rate
                op->sustain_level = (val >> 4) & 0x0FU;
                op->release_rate = val & 0x0FU;
                break;
            case 0xE0: // Waveform Select
                if (chip->waveform_select_enable) {
                    op->waveform = val & 0x03U;
                }
                break;
            default:
                break;
            }
            return;
        }
    }

    // Channel registers: 0xA0..0xA8, 0xB0..0xB8, 0xC0..0xC8
    if (reg >= 0xA0U && reg <= 0xC8U) {
        uint8_t ch_idx = reg & 0x0FU;
        if (ch_idx < HAL_OPL2_NUM_CHANNELS) {
            hal_opl2_channel_t* ch = &chip->channels[ch_idx];

            if ((reg & 0xF0U) == 0xA0U) {
                // Frequency Number Low 8 bits
                ch->fnum = (uint16_t)((ch->fnum & 0x0300U) | (uint32_t)val);
                update_phase_step(chip, ch_idx, ch->op1_idx);
                update_phase_step(chip, ch_idx, ch->op2_idx);
            } else if ((reg & 0xF0U) == 0xB0U) {
                // Key-on, Block (Octave), Fnum High 2 bits
                uint8_t old_key_on = ch->key_on;
                ch->fnum = (uint16_t)((ch->fnum & 0x00FFU) | ((uint32_t)(val & 0x03U) << 8U));
                ch->block = (val >> 2) & 0x07U;
                ch->key_on = (val & 0x20U) ? 1 : 0;

                update_phase_step(chip, ch_idx, ch->op1_idx);
                update_phase_step(chip, ch_idx, ch->op2_idx);

                // Key-on trigger
                if (!old_key_on && ch->key_on) {
                    chip->operators[ch->op1_idx].eg_state = OPL2_EG_ATTACK;
                    chip->operators[ch->op1_idx].phase = 0;
                    chip->operators[ch->op2_idx].eg_state = OPL2_EG_ATTACK;
                    chip->operators[ch->op2_idx].phase = 0;
                } else if (old_key_on && !ch->key_on) {
                    // Key-off trigger
                    chip->operators[ch->op1_idx].eg_state = OPL2_EG_RELEASE;
                    chip->operators[ch->op2_idx].eg_state = OPL2_EG_RELEASE;
                }
            } else if ((reg & 0xF0U) == 0xC0U) {
                // Feedback and Connection
                ch->feedback = (val >> 1) & 0x07U;
                ch->connection = val & 0x01U;
            }
        }
    }
}

uint8_t hal_opl2_read_status(const hal_opl2_chip_t* chip)
{
    (void)chip;
    return 0x00; // Timer flags not asserted
}

void hal_opl2_generate_stream(hal_opl2_chip_t* chip, int16_t* output_interleaved_stereo, size_t num_frames)
{
    if (chip == NULL || output_interleaved_stereo == NULL || num_frames == 0) {
        return;
    }

    for (size_t f = 0; f < num_frames; ++f) {
        int32_t mix_l = 0;
        int32_t mix_r = 0;

        for (size_t ch = 0; ch < HAL_OPL2_NUM_CHANNELS; ++ch) {
            hal_opl2_channel_t* channel = &chip->channels[ch];
            hal_opl2_operator_t* op1 = &chip->operators[channel->op1_idx];
            hal_opl2_operator_t* op2 = &chip->operators[channel->op2_idx];

            if (op1->eg_state == OPL2_EG_OFF && op2->eg_state == OPL2_EG_OFF) {
                continue;
            }

            // Envelope progression
            if (op1->eg_state == OPL2_EG_ATTACK) {
                uint32_t step = (uint32_t)(op1->attack_rate + 1) * 4U;
                if (op1->eg_level <= step) {
                    op1->eg_level = 0;
                    op1->eg_state = OPL2_EG_DECAY;
                } else {
                    op1->eg_level -= step;
                }
            } else if (op1->eg_state == OPL2_EG_DECAY) {
                uint32_t target = (uint32_t)op1->sustain_level * 64U;
                uint32_t step = (uint32_t)(op1->decay_rate + 1);
                if (op1->eg_level + step >= target) {
                    op1->eg_level = target;
                    op1->eg_state = op1->eg_type ? OPL2_EG_SUSTAIN : OPL2_EG_RELEASE;
                } else {
                    op1->eg_level += step;
                }
            } else if (op1->eg_state == OPL2_EG_RELEASE) {
                uint32_t step = (uint32_t)(op1->release_rate + 1);
                if (op1->eg_level + step >= 0x3FFU) {
                    op1->eg_level = 0x3FFU;
                    op1->eg_state = OPL2_EG_OFF;
                } else {
                    op1->eg_level += step;
                }
            }

            if (op2->eg_state == OPL2_EG_ATTACK) {
                uint32_t step = (uint32_t)(op2->attack_rate + 1) * 4U;
                if (op2->eg_level <= step) {
                    op2->eg_level = 0;
                    op2->eg_state = OPL2_EG_DECAY;
                } else {
                    op2->eg_level -= step;
                }
            } else if (op2->eg_state == OPL2_EG_DECAY) {
                uint32_t target = (uint32_t)op2->sustain_level * 64U;
                uint32_t step = (uint32_t)(op2->decay_rate + 1);
                if (op2->eg_level + step >= target) {
                    op2->eg_level = target;
                    op2->eg_state = op2->eg_type ? OPL2_EG_SUSTAIN : OPL2_EG_RELEASE;
                } else {
                    op2->eg_level += step;
                }
            } else if (op2->eg_state == OPL2_EG_RELEASE) {
                uint32_t step = (uint32_t)(op2->release_rate + 1);
                if (op2->eg_level + step >= 0x3FFU) {
                    op2->eg_level = 0x3FFU;
                    op2->eg_state = OPL2_EG_OFF;
                } else {
                    op2->eg_level += step;
                }
            }

            // Phase accumulation
            op1->phase += op1->phase_step;
            op2->phase += op2->phase_step;

            // Calculate op1 (modulator) output
            int32_t fb_mod = 0;
            if (channel->feedback > 0) {
                fb_mod = ((int32_t)op1->feedback[0] + (int32_t)op1->feedback[1]) >> (9 - channel->feedback);
            }

            uint32_t op1_phase_mod = (uint32_t)((int32_t)op1->phase + (fb_mod << 10));
            int16_t op1_raw = evaluate_wave(op1_phase_mod, op1->waveform);

            // Apply total level & envelope attenuation
            uint32_t op1_atten = op1->eg_level + ((uint32_t)op1->total_level * 16U);
            int32_t op1_out = 0;
            if (op1_atten < 0x3FFU) {
                op1_out = ((int32_t)op1_raw * (int32_t)(0x3FFU - op1_atten)) >> 10;
            }

            op1->feedback[1] = op1->feedback[0];
            op1->feedback[0] = (int16_t)op1_out;

            // Calculate op2 (carrier) output
            int32_t ch_out = 0;
            if (channel->connection == 0) {
                // Serial FM: carrier phase modulated by op1_out
                uint32_t op2_phase_mod = (uint32_t)((int32_t)op2->phase + (op1_out << 10));
                int16_t op2_raw = evaluate_wave(op2_phase_mod, op2->waveform);
                uint32_t op2_atten = op2->eg_level + ((uint32_t)op2->total_level * 16U);
                if (op2_atten < 0x3FFU) {
                    ch_out = ((int32_t)op2_raw * (int32_t)(0x3FFU - op2_atten)) >> 10;
                }
            } else {
                // Parallel AM: additive synthesis (op1 + op2)
                int16_t op2_raw = evaluate_wave(op2->phase, op2->waveform);
                uint32_t op2_atten = op2->eg_level + ((uint32_t)op2->total_level * 16U);
                int32_t op2_out = 0;
                if (op2_atten < 0x3FFU) {
                    op2_out = ((int32_t)op2_raw * (int32_t)(0x3FFU - op2_atten)) >> 10;
                }
                ch_out = op1_out + op2_out;
            }

            mix_l += ch_out;
            mix_r += ch_out;
        }

        // Clamp mixed samples to 16-bit range
        if (mix_l > 32767) {
            mix_l = 32767;
        } else if (mix_l < -32768) {
            mix_l = -32768;
        }

        if (mix_r > 32767) {
            mix_r = 32767;
        } else if (mix_r < -32768) {
            mix_r = -32768;
        }

        output_interleaved_stereo[f * 2 + 0] = (int16_t)mix_l;
        output_interleaved_stereo[f * 2 + 1] = (int16_t)mix_r;
    }
}
