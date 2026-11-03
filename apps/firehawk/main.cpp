#include "actor/player.h"
#include "game_loop.h"
#include "game_main.h"
#include "hal.h"
#include "system/hal_vfs.h"
#include "types.h"

#include <SDL2/SDL.h>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

namespace {

const char* resolve_default_assets(void)
{
    static const char* candidates[]
        = { "assets/firehawk", "../assets/firehawk", "../../assets/firehawk", "../../../assets/firehawk" };

    for (const char* path : candidates) {
        hal_vfs_set_asset_root(path);
        if (hal_vfs_file_exists("RES1.SAR") && hal_vfs_file_exists("RES1.IX")) {
            return path;
        }
    }
    return "assets/firehawk";
}

uint16_t poll_game_inputs(const hal_platform_t* hal)
{
    uint16_t inputs = (uint16_t)INPUT_NONE;

    if (!hal || !hal->input) {
        return inputs;
    }

    // Directional inputs: Arrow keys or WASD
    if (hal->input->is_key_down(HAL_SCANCODE_LEFT) || hal->input->is_key_down(HAL_SCANCODE_A)) {
        inputs |= (uint16_t)INPUT_LEFT;
    }
    if (hal->input->is_key_down(HAL_SCANCODE_RIGHT) || hal->input->is_key_down(HAL_SCANCODE_D)) {
        inputs |= (uint16_t)INPUT_RIGHT;
    }
    if (hal->input->is_key_down(HAL_SCANCODE_UP) || hal->input->is_key_down(HAL_SCANCODE_W)) {
        inputs |= (uint16_t)INPUT_UP;
    }
    if (hal->input->is_key_down(HAL_SCANCODE_DOWN) || hal->input->is_key_down(HAL_SCANCODE_S)) {
        inputs |= (uint16_t)INPUT_DOWN;
    }

    // Weapon & action keys:
    // Homing Laser: Space or Z
    if (hal->input->is_key_down(HAL_SCANCODE_SPACE) || hal->input->is_key_down(HAL_SCANCODE_Z)) {
        inputs |= (uint16_t)INPUT_FIRE_LASER;
    }
    // Missile: X
    if (hal->input->is_key_down(HAL_SCANCODE_X)) {
        inputs |= (uint16_t)INPUT_FIRE_MISSILE;
    }
    // Jump: C or J
    if (hal->input->is_key_down(HAL_SCANCODE_C) || hal->input->is_key_down(HAL_SCANCODE_J)) {
        inputs |= (uint16_t)INPUT_JUMP;
    }
    // Transform (Robot <-> Jet): Tab or Left Shift
    if (hal->input->is_key_down(HAL_SCANCODE_TAB) || hal->input->is_key_down(HAL_SCANCODE_LSHIFT)) {
        inputs |= (uint16_t)INPUT_TRANSFORM;
    }
    // Shield Barrier: E or B
    if (hal->input->is_key_down(HAL_SCANCODE_E) || hal->input->is_key_down(HAL_SCANCODE_B)) {
        inputs |= (uint16_t)INPUT_SHIELD;
    }

    // Gamepad controller inputs
    int16_t jx = 0;
    int16_t jy = 0;
    uint8_t jbtn = 0;
    hal->input->get_joystick_state(&jx, &jy, &jbtn);

    if (jx < -16000) {
        inputs |= (uint16_t)INPUT_LEFT;
    } else if (jx > 16000) {
        inputs |= (uint16_t)INPUT_RIGHT;
    }
    if (jy < -16000) {
        inputs |= (uint16_t)INPUT_UP;
    } else if (jy > 16000) {
        inputs |= (uint16_t)INPUT_DOWN;
    }

    if ((jbtn & HAL_JOY_BUTTON_1) != 0) {
        inputs |= (uint16_t)INPUT_FIRE_LASER;
    }
    if ((jbtn & HAL_JOY_BUTTON_2) != 0) {
        inputs |= (uint16_t)INPUT_FIRE_MISSILE;
    }
    if ((jbtn & HAL_JOY_BUTTON_3) != 0) {
        inputs |= (uint16_t)INPUT_SHIELD;
    }
    if ((jbtn & HAL_JOY_BUTTON_4) != 0) {
        inputs |= (uint16_t)INPUT_TRANSFORM;
    }

    return inputs;
}

} // namespace

int main(int argc, char* argv[])
{
    SDL_SetMainReady();

    uint16_t scale = 3;
    const char* asset_root = nullptr;
    int start_stage = -1;
    int start_sub_stage = 0;
    bool auto_exit = false;
    int max_frames = 0;

    for (int i = 1; i < argc; ++i) {
        if (strcmp(argv[i], "--scale") == 0 && i + 1 < argc) {
            scale = (uint16_t)atoi(argv[++i]);
        } else if (strcmp(argv[i], "--asset-root") == 0 && i + 1 < argc) {
            asset_root = argv[++i];
        } else if (strcmp(argv[i], "--stage") == 0 && i + 1 < argc) {
            start_stage = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--sub-stage") == 0 && i + 1 < argc) {
            start_sub_stage = atoi(argv[++i]);
        } else if (strcmp(argv[i], "--auto-exit") == 0) {
            auto_exit = true;
        } else if (strcmp(argv[i], "--frames") == 0 && i + 1 < argc) {
            max_frames = atoi(argv[++i]);
            auto_exit = true;
        } else if (strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0) {
            printf("Firehawk: Thexder II Native Port\n");
            printf("Usage: firehawk [options]\n");
            printf("Options:\n");
            printf("  --scale <factor>     Integer scaling factor (1 to 5, default: 3)\n");
            printf("  --asset-root <path>  Path to game assets directory (default: assets/firehawk)\n");
            printf("  --stage <0-12>       Directly launch specific stage (default: title screen)\n");
            printf("  --sub-stage <0-2>    Stage sector sub-index\n");
            printf("  --auto-exit          Exit automatically after running specified frames\n");
            printf("  --frames <N>         Number of frames to simulate before auto-exiting\n");
            return 0;
        }
    }

    if (!asset_root) {
        asset_root = resolve_default_assets();
    }

    printf("============================================================\n");
    printf(" Firehawk: Thexder II (DOS 1990 Recompiled)\n");
    printf(" Asset Root: %s\n", asset_root);
    printf(
        " Video Scale: %ux (%ux%u)\n", scale, (unsigned)HAL_SCREEN_WIDTH * scale, (unsigned)HAL_SCREEN_HEIGHT * scale);
    printf(" Controls:\n");
    printf("   Arrows / WASD : Move & Aim\n");
    printf("   Space / Z     : Homing Laser\n");
    printf("   X             : Missiles\n");
    printf("   C             : Jump\n");
    printf("   Tab / LShift  : Transform (Robot <-> Jet)\n");
    printf("   E / B         : Energy Barrier Shield\n");
    printf("   Esc           : Exit\n");
    printf("============================================================\n");

    if (!hal_init("Firehawk: Thexder II", scale)) {
        fprintf(stderr, "[ERROR] Failed to initialize platform HAL.\n");
        return 1;
    }

    if (!game_main_init(asset_root)) {
        fprintf(stderr, "[ERROR] Failed to initialize Firehawk game engine. Check asset files.\n");
        hal_shutdown();
        return 1;
    }

    const hal_platform_t* hal = hal_get();
    if (!hal || !hal->video || !hal->input) {
        fprintf(stderr, "[ERROR] HAL platform pointers not properly initialized.\n");
        game_main_shutdown();
        hal_shutdown();
        return 1;
    }

    uint8_t* fb = hal->video->get_framebuffer();
    if (!fb) {
        fprintf(stderr, "[ERROR] Unable to access linear framebuffer.\n");
        game_main_shutdown();
        hal_shutdown();
        return 1;
    }

    static game_context_t ctx;
    memset(&ctx, 0, sizeof(ctx));

    if (start_stage >= 0) {
        if (!game_loop_init_stage(&ctx, (uint8_t)start_stage, (uint8_t)start_sub_stage)) {
            fprintf(stderr, "[ERROR] Failed to load requested stage %d-%d.\n", start_stage, start_sub_stage);
            game_set_state(&ctx, STATE_TITLE);
        }
    } else {
        game_set_state(&ctx, STATE_TITLE);
    }

    bool running = true;
    int frame_count = 0;

    while (running && hal_pump_events()) {
        if (hal->input->is_key_down(HAL_SCANCODE_ESC)) {
            if (ctx.state == STATE_TITLE) {
                running = false;
                break;
            }
        }

        uint16_t inputs = poll_game_inputs(hal);

        game_main_step(&ctx, inputs, fb);

        hal->video->flip_page();

        hal_delay_frame();

        frame_count++;
        if (auto_exit && max_frames > 0 && frame_count >= max_frames) {
            break;
        }
    }

    printf("[Firehawk] Shutting down game engine...\n");
    game_main_shutdown();
    hal_shutdown();
    printf("[Firehawk] Terminated cleanly.\n");

    return 0;
}
