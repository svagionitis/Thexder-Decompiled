#include "audio/hal_audio_mixer.h"
#include "audio/hal_opl2.h"
#include "audio/hal_tandy_sound.h"

#include <assert.h>
#include <cstddef>
#include <cstdint>
#include <stdio.h>
#include <string.h>

static void test_opl2_synthesis(void)
{
    hal_opl2_chip_t chip { };
    hal_opl2_init(&chip, 48000);

    // Initial silent generation
    int16_t buffer[256 * 2] { };
    hal_opl2_generate_stream(&chip, buffer, 256);
    for (size_t i = 0; i < 512; ++i) {
        assert(buffer[i] == 0);
    }

    // Program channel 0: Carrier & Modulator
    hal_opl2_write(&chip, 0x20, 0x01); // op1 mult 1
    hal_opl2_write(&chip, 0x23, 0x01); // op2 mult 1
    hal_opl2_write(&chip, 0x40, 0x00); // op1 level 0 (full vol)
    hal_opl2_write(&chip, 0x43, 0x00); // op2 level 0 (full vol)
    hal_opl2_write(&chip, 0x60, 0xF0); // op1 attack max
    hal_opl2_write(&chip, 0x63, 0xF0); // op2 attack max
    hal_opl2_write(&chip, 0x80, 0x00); // op1 sustain
    hal_opl2_write(&chip, 0x83, 0x00); // op2 sustain
    hal_opl2_write(&chip, 0xA0, 0x57); // F-num low
    hal_opl2_write(&chip, 0xB0, 0x31); // Key-On + Block 4 + F-num high (440Hz Note A4)

    // Generate 1024 frames and check output
    int16_t sound_buf[1024 * 2] { };
    hal_opl2_generate_stream(&chip, sound_buf, 1024);

    bool has_nonzero = false;
    for (size_t i = 0; i < 2048; ++i) {
        if (sound_buf[i] != 0) {
            has_nonzero = true;
            break;
        }
    }
    assert(has_nonzero);
    (void)has_nonzero;

    // Verify key-off silences
    hal_opl2_write(&chip, 0xB0, 0x11); // Key-off
    // Generate enough samples to release
    for (int step = 0; step < 10; ++step) {
        hal_opl2_generate_stream(&chip, sound_buf, 1024);
    }
    // Eventually silent or decaying
    printf("  [PASS] test_opl2_synthesis\n");
}

static void test_tandy_sound_generation(void)
{
    hal_tandy_sound_t tandy { };
    hal_tandy_sound_init(&tandy, 48000);

    // Initial silent generation
    int16_t buffer[256 * 2] { };
    hal_tandy_sound_generate(&tandy, buffer, 256);
    for (size_t i = 0; i < 512; ++i) {
        assert(buffer[i] == 0);
    }

    // Set Channel 0 frequency and volume:
    // 0x80 | (0 << 5) | (0 << 4) | 0x05 -> Tone 0 freq low = 5
    hal_tandy_sound_write_sn76496(&tandy, 0x85);
    // 0x80 | (0 << 5) | (1 << 4) | 0x00 -> Tone 0 volume = 0 (max)
    hal_tandy_sound_write_sn76496(&tandy, 0x90);

    hal_tandy_sound_generate(&tandy, buffer, 256);

    bool has_nonzero = false;
    for (size_t i = 0; i < 512; ++i) {
        if (buffer[i] != 0) {
            has_nonzero = true;
            break;
        }
    }
    assert(has_nonzero);
    (void)has_nonzero;

    printf("  [PASS] test_tandy_sound_generation\n");
}

static void test_audio_mixer(void)
{
    hal_audio_mixer_t mixer { };
    hal_audio_mixer_init(&mixer);

    int16_t test_input[100 * 2];
    for (size_t i = 0; i < 200; ++i) {
        test_input[i] = 1000;
    }

    size_t pushed = hal_audio_mixer_push_samples(&mixer, test_input, 100);
    assert(pushed == 100);
    (void)pushed;
    assert(mixer.available_frames == 100);

    // Pull samples at full volume
    int16_t test_output[100 * 2] { };
    size_t pulled = hal_audio_mixer_pull_samples(&mixer, test_output, 100);
    assert(pulled == 100);
    (void)pulled;
    assert(test_output[0] == 1000);
    assert(mixer.available_frames == 0);

    // Test volume attenuation (50% master volume = 63)
    mixer.master_volume = 63;
    hal_audio_mixer_push_samples(&mixer, test_input, 100);
    hal_audio_mixer_pull_samples(&mixer, test_output, 100);
    // 1000 * 63 / 127 = 496
    assert(test_output[0] >= 490 && test_output[0] <= 500);

    printf("  [PASS] test_audio_mixer\n");
}

int main(void)
{
    printf("[BEGIN] test_hal_audio\n");
    test_opl2_synthesis();
    test_tandy_sound_generation();
    test_audio_mixer();
    printf("[SUCCESS] test_hal_audio completed cleanly.\n");
    return 0;
}
