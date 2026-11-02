#include "hal.h"

#include <SDL2/SDL.h>
#include <cstdint>

namespace {

struct PlatformRuntime {
    hal_platform_t platform { };
    hal_timer_t timer { };
    bool initialized { false };
    bool running { true };
};

PlatformRuntime g_runtime;

} // namespace

bool hal_init(const char* window_title, uint16_t initial_scale)
{
    if (g_runtime.initialized) {
        return true;
    }

    if (SDL_Init(0) != 0) {
        return false;
    }

    if (!hal_video_init(window_title, initial_scale)) {
        SDL_Quit();
        return false;
    }

    // Audio init failure is non-fatal: game can run muted
    (void)hal_audio_init(HAL_AUDIO_BACKEND_OPL2_SBLAST);

    if (!hal_input_init()) {
        hal_video_shutdown();
        SDL_Quit();
        return false;
    }

    hal_timer_init(&g_runtime.timer);

    g_runtime.platform.video = hal_video_get_driver();
    g_runtime.platform.audio = hal_audio_get_driver();
    g_runtime.platform.input = hal_input_get_driver();

    g_runtime.initialized = true;
    g_runtime.running = true;
    return true;
}

void hal_shutdown(void)
{
    if (!g_runtime.initialized) {
        return;
    }

    hal_input_shutdown();
    hal_audio_shutdown();
    hal_video_shutdown();

    SDL_Quit();
    g_runtime.initialized = false;
    g_runtime.running = false;
}

bool hal_pump_events(void)
{
    if (!g_runtime.initialized) {
        return false;
    }

    g_runtime.platform.input->poll_events();

    // Check if ESC or quit was requested
    if (g_runtime.platform.input->is_key_down(HAL_SCANCODE_ESC)) {
        g_runtime.running = false;
    }

    return g_runtime.running;
}

void hal_delay_frame(void)
{
    if (!g_runtime.initialized) {
        return;
    }
    hal_timer_delay_frame(&g_runtime.timer);
}

const hal_platform_t* hal_get(void)
{
    return &g_runtime.platform;
}
