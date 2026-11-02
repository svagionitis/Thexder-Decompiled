#include "hal.h"
#include <SDL2/SDL.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    SDL_SetMainReady();
    printf("[HAL Smoke Test] Starting Phase 3 Platform Abstraction Layer Smoke Test...\n");

    bool auto_exit = false;
    int max_frames = 120; // 2 seconds at 60Hz if in automated mode

    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "--auto-exit") == 0) {
            auto_exit = true;
        } else if (strcmp(argv[i], "--frames") == 0 && i + 1 < argc) {
            max_frames = atoi(argv[++i]);
            auto_exit = true;
        }
    }

    if (!hal_init("Firehawk: Thexder II - HAL Smoke Test (Phase 3)", 3)) {
        fprintf(stderr, "[HAL Smoke Test] Failed to initialize HAL platform.\n");
        return 1;
    }

    const hal_platform_t* hal = hal_get();
    if (!hal || !hal->video || !hal->audio || !hal->input) {
        fprintf(stderr, "[HAL Smoke Test] HAL drivers not properly populated.\n");
        hal_shutdown();
        return 1;
    }

    printf("[HAL Smoke Test] Initialized successfully. Press ESC or close window to exit.\n");

    // Play test OPL2 FM chime
    hal->audio->play_music(1, false);

    int16_t sprite_x = 144;
    int16_t sprite_y = 80;
    int frame_count = 0;

    // Define 16x16 test pattern sprite
    uint8_t test_sprite[16 * 16];
    for (int y = 0; y < 16; ++y) {
        for (int x = 0; x < 16; ++x) {
            if (x == 0 || x == 15 || y == 0 || y == 15) {
                test_sprite[y * 16 + x] = 15; // Bright white border
            } else if (x == y || (15 - x) == y) {
                test_sprite[y * 16 + x] = 12; // Bright red cross
            } else {
                test_sprite[y * 16 + x] = 9;  // Bright blue center
            }
        }
    }

    while (hal_pump_events()) {
        // Handle keyboard movement
        if (hal->input->is_key_down(HAL_SCANCODE_LEFT)) {
            sprite_x -= 2;
        }
        if (hal->input->is_key_down(HAL_SCANCODE_RIGHT)) {
            sprite_x += 2;
        }
        if (hal->input->is_key_down(HAL_SCANCODE_UP)) {
            sprite_y -= 2;
        }
        if (hal->input->is_key_down(HAL_SCANCODE_DOWN)) {
            sprite_y += 2;
        }

        // Handle joystick movement
        int16_t jx = 0, jy = 0;
        uint8_t jbtn = 0;
        hal->input->get_joystick_state(&jx, &jy, &jbtn);
        if (jx < -16000) sprite_x -= 2;
        if (jx > 16000) sprite_x += 2;
        if (jy < -16000) sprite_y -= 2;
        if (jy > 16000) sprite_y += 2;

        // Keep sprite bounded inside screen
        if (sprite_x < 0) sprite_x = 0;
        if (sprite_x > HAL_SCREEN_WIDTH - 16) sprite_x = HAL_SCREEN_WIDTH - 16;
        if (sprite_y < 0) sprite_y = 0;
        if (sprite_y > HAL_SCREEN_HEIGHT - 16) sprite_y = HAL_SCREEN_HEIGHT - 16;

        // Draw background test color bars (16 EGA color stripes)
        for (int c = 0; c < 16; ++c) {
            hal->video->fill_rect((int16_t)(c * 20), 0, 20, HAL_SCREEN_HEIGHT, (uint8_t)c);
        }

        // Draw decorative center window
        hal->video->fill_rect(40, 30, 240, 140, 0x00); // Black window

        // Draw moving test sprite
        hal->video->draw_sprite(sprite_x, sprite_y, test_sprite, 16, 16);

        // Present to screen (4:3 aspect integer scaler)
        hal->video->flip_page();

        frame_count++;
        if (auto_exit && frame_count >= max_frames) {
            printf("[HAL Smoke Test] Auto-exit limit (%d frames) reached.\n", max_frames);
            break;
        }

        hal_delay_frame();
    }

    printf("[HAL Smoke Test] Shutting down HAL platform...\n");
    hal_shutdown();
    printf("[HAL Smoke Test] Completed successfully.\n");
    return 0;
}
