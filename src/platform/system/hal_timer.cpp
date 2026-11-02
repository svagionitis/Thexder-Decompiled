#include "hal_timer.h"

#include <SDL2/SDL.h>
#include <cstdint>
#include <string.h>

void hal_timer_init(hal_timer_t* timer)
{
    if (timer == NULL) {
        return;
    }
    memset(timer, 0, sizeof(*timer));
    timer->perf_frequency = SDL_GetPerformanceFrequency();
    timer->last_counter = SDL_GetPerformanceCounter();
    timer->accumulated_micros = 0;
    timer->total_ticks = 0;
    timer->target_delta_seconds = 1.0 / (double)HAL_TIMER_TARGET_FPS;
}

uint32_t hal_timer_update(hal_timer_t* timer)
{
    if (timer == NULL || timer->perf_frequency == 0) {
        return 1;
    }

    uint64_t current = SDL_GetPerformanceCounter();
    uint64_t elapsed_ticks = (current >= timer->last_counter) ? (current - timer->last_counter) : 0;
    timer->last_counter = current;

    uint64_t elapsed_micros = (elapsed_ticks * 1000000ULL) / timer->perf_frequency;

    // Spiral-of-death clamp: prevent accumulated lag spikes from exceeding 100ms (~6 ticks)
    if (elapsed_micros > 100000ULL) {
        elapsed_micros = 100000ULL;
    }

    timer->accumulated_micros += elapsed_micros;

    uint32_t num_ticks = 0;
    while (timer->accumulated_micros >= HAL_TIMER_TICK_MICROS) {
        timer->accumulated_micros -= HAL_TIMER_TICK_MICROS;
        num_ticks++;
        timer->total_ticks++;
    }

    return num_ticks;
}

void hal_timer_delay_frame(hal_timer_t* timer)
{
    if (timer == NULL || timer->perf_frequency == 0) {
        SDL_Delay(1);
        return;
    }

    uint64_t current = SDL_GetPerformanceCounter();
    uint64_t elapsed_ticks = (current >= timer->last_counter) ? (current - timer->last_counter) : 0;
    uint64_t elapsed_micros = (elapsed_ticks * 1000000ULL) / timer->perf_frequency;

    if (elapsed_micros < HAL_TIMER_TICK_MICROS) {
        uint64_t remaining_micros = HAL_TIMER_TICK_MICROS - elapsed_micros;
        uint32_t delay_ms = (uint32_t)(remaining_micros / 1000ULL);
        if (delay_ms > 0) {
            SDL_Delay(delay_ms);
        }
    }
}

uint64_t hal_timer_get_micros(void)
{
    uint64_t freq = SDL_GetPerformanceFrequency();
    if (freq == 0) {
        return 0;
    }
    return (SDL_GetPerformanceCounter() * 1000000ULL) / freq;
}
