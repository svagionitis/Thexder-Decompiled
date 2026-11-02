#include "hal_mock.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

static hal_mock_state_t* s_active_mock = NULL;

static bool mock_video_init(uint16_t width, uint16_t height, uint8_t bpp)
{
    (void)width;
    (void)height;
    (void)bpp;
    return true;
}

static void mock_video_shutdown(void)
{
}

static void mock_video_set_palette(const uint8_t* dac_triplets, uint16_t start_index, uint16_t count)
{
    if (s_active_mock == NULL || dac_triplets == NULL) {
        return;
    }
    size_t copy_bytes = (size_t)count * 3;
    if ((size_t)start_index * 3 + copy_bytes <= sizeof(s_active_mock->palette_dac)) {
        memcpy(&s_active_mock->palette_dac[(size_t)start_index * 3], dac_triplets, copy_bytes);
    }
}

static void mock_video_get_palette(uint8_t* out_dac_triplets, uint16_t start_index, uint16_t count)
{
    if (s_active_mock == NULL || out_dac_triplets == NULL) {
        return;
    }
    size_t copy_bytes = (size_t)count * 3;
    if ((size_t)start_index * 3 + copy_bytes <= sizeof(s_active_mock->palette_dac)) {
        memcpy(out_dac_triplets, &s_active_mock->palette_dac[(size_t)start_index * 3], copy_bytes);
    }
}

static void mock_video_draw_sprite(int16_t x, int16_t y, const uint8_t* sprite_data, int16_t width, int16_t height)
{
    (void)x;
    (void)y;
    (void)sprite_data;
    (void)width;
    (void)height;
}

static void mock_video_draw_masked_sprite(
    int16_t x, int16_t y, const uint8_t* sprite_data, const uint8_t* mask_data, int16_t width, int16_t height)
{
    (void)x;
    (void)y;
    (void)sprite_data;
    (void)mask_data;
    (void)width;
    (void)height;
}

static void mock_video_fill_rect(int16_t x, int16_t y, int16_t width, int16_t height, uint8_t color_index)
{
    (void)x;
    (void)y;
    (void)width;
    (void)height;
    (void)color_index;
}

static void mock_video_copy_rect(
    int16_t src_x, int16_t src_y, int16_t dst_x, int16_t dst_y, int16_t width, int16_t height)
{
    (void)src_x;
    (void)src_y;
    (void)dst_x;
    (void)dst_y;
    (void)width;
    (void)height;
}

static void mock_video_scroll_screen(int16_t dx, int16_t dy, uint8_t fill_color)
{
    (void)dx;
    (void)dy;
    (void)fill_color;
}

static void mock_video_vsync_wait(void)
{
    if (s_active_mock != NULL) {
        s_active_mock->vsync_wait_count++;
    }
}

static void mock_video_flip_page(void)
{
    if (s_active_mock != NULL) {
        s_active_mock->flip_page_count++;
    }
}

static void mock_video_set_clip_rect(int16_t left, int16_t top, int16_t right, int16_t bottom)
{
    (void)left;
    (void)top;
    (void)right;
    (void)bottom;
}

static void mock_video_clear_screen(uint8_t color_index)
{
    if (s_active_mock != NULL) {
        memset(s_active_mock->framebuffer, color_index, sizeof(s_active_mock->framebuffer));
    }
}

static uint8_t* mock_video_get_framebuffer(void)
{
    return s_active_mock ? s_active_mock->framebuffer : NULL;
}

static bool mock_audio_init(uint32_t sample_rate)
{
    (void)sample_rate;
    return true;
}

static void mock_audio_shutdown(void)
{
}

static void mock_audio_play_music(uint16_t track_id, bool loop)
{
    if (s_active_mock != NULL) {
        s_active_mock->last_music_track = track_id;
        s_active_mock->music_playing = true;
        s_active_mock->music_looping = loop;
    }
}

static void mock_audio_stop_music(void)
{
    if (s_active_mock != NULL) {
        s_active_mock->music_playing = false;
    }
}

static void mock_audio_pause_music(void)
{
    if (s_active_mock != NULL) {
        s_active_mock->music_playing = false;
    }
}

static void mock_audio_resume_music(void)
{
    if (s_active_mock != NULL) {
        s_active_mock->music_playing = true;
    }
}

static void mock_audio_play_sfx(uint16_t sfx_id, uint8_t priority)
{
    if (s_active_mock != NULL) {
        s_active_mock->last_sfx_id = sfx_id;
        s_active_mock->last_sfx_priority = priority;
    }
}

static void mock_audio_stop_sfx(uint16_t sfx_id)
{
    (void)sfx_id;
}

static void mock_audio_set_master_volume(uint8_t volume)
{
    if (s_active_mock != NULL) {
        s_active_mock->master_volume = volume;
    }
}

static void mock_audio_set_music_volume(uint8_t volume)
{
    if (s_active_mock != NULL) {
        s_active_mock->music_volume = volume;
    }
}

static void mock_audio_set_sfx_volume(uint8_t volume)
{
    if (s_active_mock != NULL) {
        s_active_mock->sfx_volume = volume;
    }
}

static void mock_audio_update(void)
{
}

static bool mock_input_init(void)
{
    return true;
}

static void mock_input_shutdown(void)
{
}

static void mock_input_poll_events(void)
{
}

static bool mock_input_is_key_down(uint8_t dos_scancode)
{
    return s_active_mock ? s_active_mock->key_down[dos_scancode & 0x7FU] : false;
}

static bool mock_input_get_next_scancode(uint8_t* out_scancode, bool* out_is_pressed)
{
    if (s_active_mock == NULL || out_scancode == NULL || out_is_pressed == NULL || s_active_mock->queue_count == 0) {
        return false;
    }

    *out_scancode = s_active_mock->queued_scancodes[s_active_mock->queue_head];
    *out_is_pressed = s_active_mock->queued_pressed[s_active_mock->queue_head];
    s_active_mock->queue_head = (s_active_mock->queue_head + 1) % 32;
    s_active_mock->queue_count--;
    return true;
}

static void mock_input_clear_key_buffer(void)
{
    if (s_active_mock != NULL) {
        s_active_mock->queue_head = 0;
        s_active_mock->queue_tail = 0;
        s_active_mock->queue_count = 0;
    }
}

static void mock_input_get_joystick_state(int16_t* out_x, int16_t* out_y, uint8_t* out_buttons)
{
    if (out_x != NULL) {
        *out_x = s_active_mock ? s_active_mock->joy_x : (int16_t)0;
    }
    if (out_y != NULL) {
        *out_y = s_active_mock ? s_active_mock->joy_y : (int16_t)0;
    }
    if (out_buttons != NULL) {
        *out_buttons = s_active_mock ? s_active_mock->joy_buttons : (uint8_t)0;
    }
}

void hal_mock_init(hal_mock_state_t* mock)
{
    if (mock == NULL) {
        return;
    }
    memset(mock, 0, sizeof(*mock));
    mock->master_volume = 127;
    mock->music_volume = 127;
    mock->sfx_volume = 127;
    s_active_mock = mock;
}

void hal_mock_inject_key(hal_mock_state_t* mock, uint8_t dos_scancode, bool pressed)
{
    if (mock == NULL || mock->queue_count >= 32) {
        return;
    }
    mock->key_down[dos_scancode & 0x7FU] = pressed;
    uint8_t raw_code = pressed ? dos_scancode : (uint8_t)(dos_scancode | 0x80U);

    mock->queued_scancodes[mock->queue_tail] = raw_code;
    mock->queued_pressed[mock->queue_tail] = pressed;
    mock->queue_tail = (mock->queue_tail + 1) % 32;
    mock->queue_count++;
}

void hal_mock_set_joystick(hal_mock_state_t* mock, int16_t x, int16_t y, uint8_t buttons)
{
    if (mock == NULL) {
        return;
    }
    mock->joy_x = x;
    mock->joy_y = y;
    mock->joy_buttons = buttons;
}

hal_video_driver_t hal_mock_get_video_driver(hal_mock_state_t* mock)
{
    s_active_mock = mock;
    hal_video_driver_t d = { mock_video_init, mock_video_shutdown, mock_video_set_palette, mock_video_get_palette,
        mock_video_draw_sprite, mock_video_draw_masked_sprite, mock_video_fill_rect, mock_video_copy_rect,
        mock_video_scroll_screen, mock_video_vsync_wait, mock_video_flip_page, mock_video_set_clip_rect,
        mock_video_clear_screen, mock_video_get_framebuffer };
    return d;
}

hal_audio_driver_t hal_mock_get_audio_driver(hal_mock_state_t* mock)
{
    s_active_mock = mock;
    hal_audio_driver_t d = { mock_audio_init, mock_audio_shutdown, mock_audio_play_music, mock_audio_stop_music,
        mock_audio_pause_music, mock_audio_resume_music, mock_audio_play_sfx, mock_audio_stop_sfx,
        mock_audio_set_master_volume, mock_audio_set_music_volume, mock_audio_set_sfx_volume, mock_audio_update };
    return d;
}

hal_input_driver_t hal_mock_get_input_driver(hal_mock_state_t* mock)
{
    s_active_mock = mock;
    hal_input_driver_t d = { mock_input_init, mock_input_shutdown, mock_input_poll_events, mock_input_is_key_down,
        mock_input_get_next_scancode, mock_input_clear_key_buffer, mock_input_get_joystick_state };
    return d;
}
