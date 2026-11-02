#include "hal_audio.h"
#include "hal_audio_mixer.h"
#include "hal_mt32.h"
#include "hal_opl2.h"
#include "hal_tandy_sound.h"

#include <SDL2/SDL.h>
#include <cstddef>
#include <cstdint>

namespace {

struct AudioState {
    SDL_AudioDeviceID device_id { 0 };
    hal_audio_backend_t backend { HAL_AUDIO_BACKEND_OPL2_SBLAST };
    hal_opl2_chip_t opl2 { };
    hal_mt32_t mt32 { };
    hal_tandy_sound_t tandy { };
    hal_audio_mixer_t mixer { };
    int16_t synth_buffer[HAL_AUDIO_BUFFER_SAMPLES * 2] { };
    bool initialized { false };
    bool music_playing { false };
    bool music_looping { false };
    uint16_t current_track { 0 };
};

AudioState g_audio;

void SDLCALL sdl_audio_callback(void* userdata, Uint8* stream, int len)
{
    (void)userdata;
    int requested_frames = len / (int)(2 * sizeof(int16_t));

    // Synthesize pending frames depending on active backend
    if (g_audio.backend == HAL_AUDIO_BACKEND_OPL2_ADLIB || g_audio.backend == HAL_AUDIO_BACKEND_OPL2_SBLAST) {
        hal_opl2_generate_stream(&g_audio.opl2, g_audio.synth_buffer, (size_t)requested_frames);
    } else if (g_audio.backend == HAL_AUDIO_BACKEND_TANDY || g_audio.backend == HAL_AUDIO_BACKEND_PC_SPEAKER) {
        hal_tandy_sound_generate(&g_audio.tandy, g_audio.synth_buffer, (size_t)requested_frames);
    } else {
        memset(g_audio.synth_buffer, 0, (size_t)requested_frames * 2 * sizeof(int16_t));
    }

    hal_audio_mixer_push_samples(&g_audio.mixer, g_audio.synth_buffer, (size_t)requested_frames);
    hal_audio_mixer_pull_samples(&g_audio.mixer, (int16_t*)(void*)stream, (size_t)requested_frames);
}

bool audio_driver_init(uint32_t sample_rate)
{
    (void)sample_rate;
    hal_opl2_init(&g_audio.opl2, HAL_AUDIO_SAMPLE_RATE);
    hal_mt32_init(&g_audio.mt32);
    hal_tandy_sound_init(&g_audio.tandy, HAL_AUDIO_SAMPLE_RATE);
    hal_audio_mixer_init(&g_audio.mixer);
    return true;
}

void audio_driver_shutdown(void)
{
    hal_opl2_reset(&g_audio.opl2);
    hal_mt32_reset(&g_audio.mt32);
    hal_tandy_sound_reset(&g_audio.tandy);
    hal_audio_mixer_reset(&g_audio.mixer);
}

void audio_driver_play_music(uint16_t track_id, bool loop)
{
    g_audio.current_track = track_id;
    g_audio.music_playing = true;
    g_audio.music_looping = loop;

    // Trigger test OPL2 carrier/modulator chord on channel 0 for verification
    // 0x20: op1 mult 1, 0x23: op2 mult 1
    hal_opl2_write(&g_audio.opl2, 0x20, 0x01);
    hal_opl2_write(&g_audio.opl2, 0x23, 0x01);
    // 0x40: op1 level 0, 0x43: op2 level 0
    hal_opl2_write(&g_audio.opl2, 0x40, 0x00);
    hal_opl2_write(&g_audio.opl2, 0x43, 0x00);
    // 0x60: op1 attack 0xF, decay 0x2, 0x63: op2 attack 0xF, decay 0x2
    hal_opl2_write(&g_audio.opl2, 0x60, 0xF2);
    hal_opl2_write(&g_audio.opl2, 0x63, 0xF2);
    // 0x80: op1 sustain 0x7, release 0x4, 0x83: op2 sustain 0x7, release 0x4
    hal_opl2_write(&g_audio.opl2, 0x80, 0x74);
    hal_opl2_write(&g_audio.opl2, 0x83, 0x74);
    // Fnum low = 0x57, Key-On + Block 4 + Fnum high = 0x31 (Note A4 440Hz)
    hal_opl2_write(&g_audio.opl2, 0xA0, 0x57);
    hal_opl2_write(&g_audio.opl2, 0xB0, 0x31);
}

void audio_driver_stop_music(void)
{
    g_audio.music_playing = false;
    // Release key-on across all 9 OPL2 channels
    for (uint8_t ch = 0; ch < 9; ++ch) {
        hal_opl2_write(&g_audio.opl2, (uint8_t)(0xB0U + ch), 0x00);
    }
}

void audio_driver_pause_music(void)
{
    g_audio.music_playing = false;
}

void audio_driver_resume_music(void)
{
    g_audio.music_playing = true;
}

void audio_driver_play_sfx(uint16_t sfx_id, uint8_t priority)
{
    (void)priority;
    // Sound effects trigger channel 8 (SFX channel)
    hal_opl2_write(&g_audio.opl2, 0x32, 0x01);
    hal_opl2_write(&g_audio.opl2, 0x35, 0x02);
    hal_opl2_write(&g_audio.opl2, 0x72, 0xF0);
    hal_opl2_write(&g_audio.opl2, 0x75, 0xF0);
    hal_opl2_write(&g_audio.opl2, 0x92, 0x0F);
    hal_opl2_write(&g_audio.opl2, 0x95, 0x0F);
    hal_opl2_write(&g_audio.opl2, 0xA8, (uint8_t)(sfx_id & 0xFFU));
    hal_opl2_write(&g_audio.opl2, 0xB8, 0x30); // Key on
}

void audio_driver_stop_sfx(uint16_t sfx_id)
{
    (void)sfx_id;
    hal_opl2_write(&g_audio.opl2, 0xB8, 0x00); // Key off
}

void audio_driver_set_master_volume(uint8_t volume)
{
    g_audio.mixer.master_volume = (volume > 127) ? 127 : volume;
}

void audio_driver_set_music_volume(uint8_t volume)
{
    g_audio.mixer.music_volume = (volume > 127) ? 127 : volume;
}

void audio_driver_set_sfx_volume(uint8_t volume)
{
    g_audio.mixer.sfx_volume = (volume > 127) ? 127 : volume;
}

void audio_driver_update(void)
{
    // Sequencer tick callback
}

const hal_audio_driver_t s_audio_driver = { audio_driver_init, audio_driver_shutdown, audio_driver_play_music,
    audio_driver_stop_music, audio_driver_pause_music, audio_driver_resume_music, audio_driver_play_sfx,
    audio_driver_stop_sfx, audio_driver_set_master_volume, audio_driver_set_music_volume, audio_driver_set_sfx_volume,
    audio_driver_update };

} // namespace

bool hal_audio_init(hal_audio_backend_t backend)
{
    if (g_audio.initialized) {
        return true;
    }

    g_audio.backend = backend;
    audio_driver_init(HAL_AUDIO_SAMPLE_RATE);

    if (SDL_InitSubSystem(SDL_INIT_AUDIO) != 0) {
        // Audio device init failure is non-fatal: game can run with audio muted
        return false;
    }

    SDL_AudioSpec wanted { };
    wanted.freq = HAL_AUDIO_SAMPLE_RATE;
    wanted.format = AUDIO_S16SYS;
    wanted.channels = 2;
    wanted.samples = HAL_AUDIO_BUFFER_SAMPLES;
    wanted.callback = sdl_audio_callback;
    wanted.userdata = nullptr;

    SDL_AudioSpec obtained { };
    g_audio.device_id = SDL_OpenAudioDevice(nullptr, 0, &wanted, &obtained, 0);
    if (g_audio.device_id == 0) {
        return false;
    }

    // Start audio playback
    SDL_PauseAudioDevice(g_audio.device_id, 0);

    g_audio.initialized = true;
    return true;
}

void hal_audio_shutdown(void)
{
    if (!g_audio.initialized) {
        return;
    }

    if (g_audio.device_id != 0) {
        SDL_CloseAudioDevice(g_audio.device_id);
        g_audio.device_id = 0;
    }

    audio_driver_shutdown();
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
    g_audio.initialized = false;
}

void hal_audio_set_backend(hal_audio_backend_t backend)
{
    g_audio.backend = backend;
}

const hal_audio_driver_t* hal_audio_get_driver(void)
{
    return &s_audio_driver;
}
