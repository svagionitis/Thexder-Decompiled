#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_OPL2_NUM_CHANNELS 9
#define HAL_OPL2_NUM_OPERATORS 18

typedef enum hal_opl2_eg_state {
    OPL2_EG_OFF = 0,
    OPL2_EG_ATTACK,
    OPL2_EG_DECAY,
    OPL2_EG_SUSTAIN,
    OPL2_EG_RELEASE
} hal_opl2_eg_state_t;

typedef struct hal_opl2_operator {
    uint32_t phase; ///< 20-bit phase accumulator
    uint32_t phase_step; ///< Phase increment per sample
    uint32_t eg_level; ///< Envelope level (0 = full volume, 0x3FF = silent)
    uint8_t eg_state; ///< hal_opl2_eg_state_t
    uint8_t mult; ///< Frequency multiplier (0..15)
    uint8_t ksr; ///< Key scale rate
    uint8_t eg_type; ///< 0 = decaying, 1 = sustained
    uint8_t vib; ///< Vibrato enable
    uint8_t am; ///< Amplitude modulation enable
    uint8_t total_level; ///< Total attenuation (0..63)
    uint8_t ksl; ///< Key scale level (0..3)
    uint8_t attack_rate; ///< Attack rate (0..15)
    uint8_t decay_rate; ///< Decay rate (0..15)
    uint8_t sustain_level; ///< Sustain level (0..15)
    uint8_t release_rate; ///< Release rate (0..15)
    uint8_t waveform; ///< Waveform index (0..3)
    int16_t feedback[2]; ///< Operator feedback delay pipeline
} hal_opl2_operator_t;

typedef struct hal_opl2_channel {
    uint16_t fnum; ///< Frequency number (10 bits)
    uint8_t block; ///< Octave block (0..7)
    uint8_t key_on; ///< Note active flag
    uint8_t feedback; ///< Operator 1 feedback strength (0..7)
    uint8_t connection; ///< 0 = FM (serial), 1 = AM (parallel additive)
    uint8_t op1_idx; ///< Modulator operator index
    uint8_t op2_idx; ///< Carrier operator index
} hal_opl2_channel_t;

typedef struct hal_opl2_chip {
    hal_opl2_operator_t operators[HAL_OPL2_NUM_OPERATORS];
    hal_opl2_channel_t channels[HAL_OPL2_NUM_CHANNELS];
    uint8_t registers[256];
    uint32_t sample_rate;
    uint8_t waveform_select_enable;
    uint8_t rhythm_mode;
    uint32_t lfo_am_phase;
    uint32_t lfo_pm_phase;
} hal_opl2_chip_t;

/// @brief Initializes OPL2 emulator chip at specified sample rate
void hal_opl2_init(hal_opl2_chip_t* chip, uint32_t sample_rate);

/// @brief Resets OPL2 chip to silent initial state
void hal_opl2_reset(hal_opl2_chip_t* chip);

/// @brief Writes byte to OPL2 hardware register
void hal_opl2_write(hal_opl2_chip_t* chip, uint8_t reg, uint8_t val);

/// @brief Reads byte from OPL2 status register
uint8_t hal_opl2_read_status(const hal_opl2_chip_t* chip);

/// @brief Generates 16-bit signed interleaved stereo PCM samples
void hal_opl2_generate_stream(hal_opl2_chip_t* chip, int16_t* output_interleaved_stereo, size_t num_frames);

#ifdef __cplusplus
}
#endif
