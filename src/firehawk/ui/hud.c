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

void hud_render(uint8_t* fb, int16_t fb_w, int16_t fb_h, const player_state_t* player, const uint8_t* font_data)
{
    if (fb == NULL || player == NULL || fb_w <= 0 || fb_h < 200) {
        return;
    }

    const int16_t HUD_Y = 168;

    // Draw HUD background panel (dark blue/gray color 1)
    for (int16_t y = HUD_Y; y < fb_h; ++y) {
        memset(fb + (size_t)y * (size_t)fb_w, 1, (size_t)fb_w);
    }

    // Top separator border line (light gray color 7)
    memset(fb + (size_t)HUD_Y * (size_t)fb_w, 7, (size_t)fb_w);

    // 1. Energy Gauge
    font_draw_string(fb, fb_w, fb_h, 4, 172, "E:", 15, font_data);

    uint16_t max_e = (player->max_energy > 0) ? player->max_energy : 5000;
    uint32_t e_ratio = ((uint32_t)player->energy * 80) / max_e;
    if (e_ratio > 80)
        e_ratio = 80;

    // Color: Green > 50%, Yellow 25-50%, Red < 25%
    uint8_t e_col = 10; // Bright green
    if (player->energy < max_e / 4) {
        e_col = 12; // Bright red
    } else if (player->energy < max_e / 2) {
        e_col = 14; // Bright yellow
    }

    // Draw energy bar fill
    for (int16_t by = 172; by <= 178; ++by) {
        for (int16_t bx = 22; bx < (int16_t)(22 + e_ratio); ++bx) {
            fb[(size_t)by * (size_t)fb_w + (size_t)bx] = e_col;
        }
    }

    // 2. Shield Indicator
    font_draw_string(fb, fb_w, fb_h, 4, 181, "S:", 15, font_data);
    if (player->shield_timer > 0) {
        int16_t s_len = (int16_t)((player->shield_timer * 80) / 180);
        if (s_len > 80)
            s_len = 80;
        for (int16_t by = 181; by <= 187; ++by) {
            for (int16_t bx = 22; bx < (int16_t)(22 + s_len); ++bx) {
                fb[(size_t)by * (size_t)fb_w + (size_t)bx] = 9; // Light blue shield bar
            }
        }
    }

    // 3. Ammunition Display
    char ammo_str[32];
    snprintf(ammo_str, sizeof(ammo_str), "N:%02u H:%02u", player->normal_missiles, player->homing_missiles);
    font_draw_string(fb, fb_w, fb_h, 120, 172, ammo_str, 15, font_data);

    // 4. Score Display
    char score_str[32];
    snprintf(score_str, sizeof(score_str), "SCORE:%07u", player->score);
    font_draw_string(fb, fb_w, fb_h, 210, 172, score_str, 14, font_data);

    // 5. COMMDATA Typewriter Message Line
    if (s_typewriter_pos > 0) {
        char visible_msg[128];
        size_t len = s_typewriter_pos;
        if (len >= sizeof(visible_msg)) {
            len = sizeof(visible_msg) - 1;
        }
        memcpy(visible_msg, s_comm_message, len);
        visible_msg[len] = '\0';
        font_draw_string(fb, fb_w, fb_h, 120, 182, visible_msg, 11, font_data);
    }
}
