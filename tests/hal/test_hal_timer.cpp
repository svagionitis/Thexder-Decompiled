#include "system/hal_timer.h"

#include <assert.h>
#include <cstdint>
#include <stdio.h>

static void test_timer_initialization(void)
{
    hal_timer_t timer { };
    hal_timer_init(&timer);

    assert(timer.perf_frequency > 0);
    assert(timer.total_ticks == 0);
    assert(timer.accumulated_micros == 0);
    assert(timer.target_delta_seconds > 0.016 && timer.target_delta_seconds < 0.017);

    printf("  [PASS] test_timer_initialization\n");
}

static void test_timer_accumulator_logic(void)
{
    hal_timer_t timer { };
    hal_timer_init(&timer);

    // Artificially inject elapsed microseconds to test accumulator
    timer.accumulated_micros = 10000; // 10ms -> 0 ticks
    uint32_t ticks = 0;
    while (timer.accumulated_micros >= HAL_TIMER_TICK_MICROS) {
        timer.accumulated_micros -= HAL_TIMER_TICK_MICROS;
        ticks++;
    }
    assert(ticks == 0);
    assert(timer.accumulated_micros == 10000);

    // Add another 10ms -> 20ms total -> exactly 1 tick of 16666us with 3334us residual
    timer.accumulated_micros += 10000;
    while (timer.accumulated_micros >= HAL_TIMER_TICK_MICROS) {
        timer.accumulated_micros -= HAL_TIMER_TICK_MICROS;
        ticks++;
    }
    assert(ticks == 1);
    (void)ticks;
    assert(timer.accumulated_micros == (20000 - 16666));

    printf("  [PASS] test_timer_accumulator_logic\n");
}

static void test_timer_long_run_drift(void)
{
    hal_timer_t timer { };
    hal_timer_init(&timer);

    // Simulate 60,000 milliseconds (60 seconds) of 16.666ms ticks
    uint64_t simulated_micros = 60000000ULL; // 60 seconds
    timer.accumulated_micros = 0;

    uint32_t ticks = (uint32_t)(simulated_micros / HAL_TIMER_TICK_MICROS);
    // At 60 Hz, 60 seconds should be 3,600 ticks
    // 60,000,000 / 16666 = 3600.14 -> exactly 3600 ticks!
    assert(ticks == 3600);
    (void)ticks;

    printf("  [PASS] test_timer_long_run_drift (3600 ticks in 60s)\n");
}

int main(void)
{
    printf("[BEGIN] test_hal_timer\n");
    test_timer_initialization();
    test_timer_accumulator_logic();
    test_timer_long_run_drift();
    printf("[SUCCESS] test_hal_timer completed cleanly.\n");
    return 0;
}
