#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_MIDI_QUEUE_CAPACITY 256

typedef struct hal_midi_event {
    uint8_t status;
    uint8_t data1;
    uint8_t data2;
    uint8_t pad;
} hal_midi_event_t;

typedef struct hal_mt32 {
    hal_midi_event_t queue[HAL_MIDI_QUEUE_CAPACITY];
    size_t head;
    size_t tail;
    size_t count;
    uint8_t master_volume;
} hal_mt32_t;

/// @brief Initializes Roland MT-32 MIDI pipeline
void hal_mt32_init(hal_mt32_t* mt32);

/// @brief Resets MT-32 state and sends All-Notes-Off
void hal_mt32_reset(hal_mt32_t* mt32);

/// @brief Enqueues a 3-byte standard MIDI message
bool hal_mt32_enqueue_message(hal_mt32_t* mt32, uint8_t status, uint8_t data1, uint8_t data2);

/// @brief Dequeues next pending MIDI message
bool hal_mt32_dequeue_message(hal_mt32_t* mt32, hal_midi_event_t* out_event);

#ifdef __cplusplus
}
#endif
