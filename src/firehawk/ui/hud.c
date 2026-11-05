/// @file hud.c
/// @brief Cockpit HUD rendering: dynamic energy gauge, shield countdown, ammo, score, and messages.
/// @details Ghidra: FUN_1000_22c8 (1000:22c8)

#include "ui/hud.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "actor/player.h"
#include "render/font.h"
#include "ui/cockpit_data.h"

static char s_comm_message[128] = { 0 };
static size_t s_typewriter_pos = 0;
static uint8_t s_typewriter_clock = 0;

void hud_init(void)
{
    memset(s_comm_message, 0, sizeof(s_comm_message));
    s_typewriter_pos = 0;
    s_typewriter_clock = 0;
}

void hud_set_message(const char* msg)
{
    if (msg == NULL) {
        s_comm_message[0] = '\0';
        s_typewriter_pos = 0;
        return;
    }

    strncpy(s_comm_message, msg, sizeof(s_comm_message) - 1);
    s_comm_message[sizeof(s_comm_message) - 1] = '\0';
    s_typewriter_pos = 0;
    s_typewriter_clock = 0;
}

void hud_update(void)
{
    s_typewriter_clock++;
    if (s_typewriter_clock >= 3) { // 1 character every 3 ticks
        s_typewriter_clock = 0;
        if (s_typewriter_pos < strlen(s_comm_message)) {
            s_typewriter_pos++;
        }
    }
}

void hud_render_frame(uint8_t* fb, int16_t fb_w, int16_t fb_h)
{
    if (fb == NULL || fb_w < 320 || fb_h < 200) {
        return;
    }

    // 1. Top frame: rows 0..31
    size_t src_idx = 0;
    for (int16_t y = 0; y < 32; ++y) {
        uint8_t* row = fb + (size_t)y * (size_t)fb_w;
        for (int16_t x = 0; x < 320; x += 2) {
            uint8_t b = g_cockpit_top[src_idx++];
            row[x] = (uint8_t)(b >> 4);
            row[x + 1] = (uint8_t)(b & 0x0f);
        }
    }

    // 2. Bottom frame: rows 160..199
    src_idx = 0;
    for (int16_t y = 160; y < 200; ++y) {
        uint8_t* row = fb + (size_t)y * (size_t)fb_w;
        for (int16_t x = 0; x < 320; x += 2) {
            uint8_t b = g_cockpit_bottom[src_idx++];
            row[x] = (uint8_t)(b >> 4);
            row[x + 1] = (uint8_t)(b & 0x0f);
        }
    }

    // 3. Left frame: rows 32..159, cols 0..31
    src_idx = 0;
    for (int16_t y = 32; y < 160; ++y) {
        uint8_t* row = fb + (size_t)y * (size_t)fb_w;
        for (int16_t x = 0; x < 32; x += 2) {
            uint8_t b = g_cockpit_left[src_idx++];
            row[x] = (uint8_t)(b >> 4);
            row[x + 1] = (uint8_t)(b & 0x0f);
        }
    }

    // 4. Right frame: rows 32..159, cols 288..319
    src_idx = 0;
    for (int16_t y = 32; y < 160; ++y) {
        uint8_t* row = fb + (size_t)y * (size_t)fb_w;
        for (int16_t x = 288; x < 320; x += 2) {
            uint8_t b = g_cockpit_right[src_idx++];
            row[x] = (uint8_t)(b >> 4);
            row[x + 1] = (uint8_t)(b & 0x0f);
        }
    }
}

void hud_render(uint8_t* fb, int16_t fb_w, int16_t fb_h, const player_state_t* player, const uint8_t* font_data)
{
    if (fb == NULL || player == NULL || fb_w <= 0 || fb_h < 200) {
        return;
    }

    // Always draw authentic cockpit frame
    hud_render_frame(fb, fb_w, fb_h);

    // 1. Dynamic Energy Gauge (Bottom Cockpit HUD)
    uint16_t max_e = (player->max_energy > 0) ? player->max_energy : 5000;
    uint32_t e_ratio = ((uint32_t)player->energy * 76) / max_e;
    if (e_ratio > 76) {
        e_ratio = 76;
    }

    uint8_t e_col = 10; // Bright green
    if (player->energy < max_e / 4) {
        e_col = 12; // Bright red
    } else if (player->energy < max_e / 2) {
        e_col = 14; // Bright yellow
    }

    for (int16_t by = 179; by <= 186; ++by) {
        for (int16_t bx = 38; bx < (int16_t)(38 + e_ratio); ++bx) {
            fb[(size_t)by * (size_t)fb_w + (size_t)bx] = e_col;
        }
    }

    // 2. Shield / Power Indicator (Bottom HUD)
    if (player->shield_timer > 0) {
        int16_t s_len = (int16_t)((player->shield_timer * 72) / 180);
        if (s_len > 72) {
            s_len = 72;
        }
        for (int16_t by = 184; by <= 190; ++by) {
            for (int16_t bx = 148; bx < (int16_t)(148 + s_len); ++bx) {
                fb[(size_t)by * (size_t)fb_w + (size_t)bx] = 9; // Light blue shield bar
            }
        }
    }

    // 3. Ammunition Display
    char ammo_str[32];
    snprintf(ammo_str, sizeof(ammo_str), "N:%02u H:%02u", player->normal_missiles, player->homing_missiles);
    font_draw_string(fb, fb_w, fb_h, 230, 180, ammo_str, 15, font_data);

    // 4. Score Display (Top Left Cockpit)
    char score_str[32];
    snprintf(score_str, sizeof(score_str), "%07u", player->score);
    font_draw_string(fb, fb_w, fb_h, 34, 18, score_str, 14, font_data);

    // 5. COMMDATA Typewriter Message Line (Bottom Cockpit Terminal)
    if (s_typewriter_pos > 0) {
        char visible_msg[128];
        size_t len = s_typewriter_pos;
        if (len >= sizeof(visible_msg)) {
            len = sizeof(visible_msg) - 1;
        }
        memcpy(visible_msg, s_comm_message, len);
        visible_msg[len] = '\0';
        font_draw_string(fb, fb_w, fb_h, 34, 168, visible_msg, 11, font_data);
    }
}
