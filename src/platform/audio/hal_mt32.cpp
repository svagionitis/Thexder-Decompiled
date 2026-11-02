#include "hal_mt32.h"

#include <cstddef>
#include <cstdint>
#include <string.h>

void hal_mt32_init(hal_mt32_t* mt32)
{
    if (mt32 == NULL) {
        return;
    }
    memset(mt32, 0, sizeof(*mt32));
    mt32->master_volume = 127;
}

void hal_mt32_reset(hal_mt32_t* mt32)
{
    if (mt32 == NULL) {
        return;
    }
    mt32->head = 0;
    mt32->tail = 0;
    mt32->count = 0;

    // Send All Notes Off (CC 123) and Reset All Controllers (CC 121) across channels 0..15
    for (uint8_t ch = 0; ch < 16; ++ch) {
        (void)hal_mt32_enqueue_message(mt32, (uint8_t)(0xB0U | ch), 123, 0);
        (void)hal_mt32_enqueue_message(mt32, (uint8_t)(0xB0U | ch), 121, 0);
    }
}

bool hal_mt32_enqueue_message(hal_mt32_t* mt32, uint8_t status, uint8_t data1, uint8_t data2)
{
    if (mt32 == NULL || mt32->count >= HAL_MIDI_QUEUE_CAPACITY) {
        return false;
    }

    hal_midi_event_t* ev = &mt32->queue[mt32->tail];
    ev->status = status;
    ev->data1 = data1;
    ev->data2 = data2;
    ev->pad = 0;

    mt32->tail = (mt32->tail + 1) % HAL_MIDI_QUEUE_CAPACITY;
    mt32->count++;
    return true;
}

bool hal_mt32_dequeue_message(hal_mt32_t* mt32, hal_midi_event_t* out_event)
{
    if (mt32 == NULL || out_event == NULL || mt32->count == 0) {
        return false;
    }

    *out_event = mt32->queue[mt32->head];
    mt32->head = (mt32->head + 1) % HAL_MIDI_QUEUE_CAPACITY;
    mt32->count--;
    return true;
}
