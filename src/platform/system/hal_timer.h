#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_TIMER_TARGET_FPS 60
#define HAL_TIMER_TICK_MICROS 16666ULL // 1,000,000 / 60 = 16,666 microseconds

typedef struct hal_timer {
    uint64_t perf_frequency;
    uint64_t last_counter;
    uint64_t accumulated_micros;
    uint32_t total_ticks;
    double target_delta_seconds;
} hal_timer_t;

/// @brief Initializes 60Hz simulation timer
void hal_timer_init(hal_timer_t* timer);

/// @brief Updates accumulator and returns number of fixed 60Hz simulation ticks to run
uint32_t hal_timer_update(hal_timer_t* timer);

/// @brief Delays execution until next 60Hz frame deadline to prevent CPU burn
void hal_timer_delay_frame(hal_timer_t* timer);

/// @brief Returns current monotonic time in microseconds
uint64_t hal_timer_get_micros(void);

#ifdef __cplusplus
}
#endif
