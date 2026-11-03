/// @file test_golden_replay.c
/// @brief Automated verification test for Firehawk deterministic replay & state checksums (M5.2).

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "actor/player.h"
#include "game_loop.h"
#include "system/hal_vfs.h"
#include "test_replay.h"
#include "types.h"

#define TEST_ASSERT(cond)                                                                                              \
    do {                                                                                                               \
        if (!(cond)) {                                                                                                 \
            fprintf(stderr, "[FAIL] Assertion failed: %s (%s:%d)\n", #cond, __FILE__, __LINE__);                       \
            exit(1);                                                                                                   \
        }                                                                                                              \
    } while (0)

#define TOTAL_FRAMES 300
#define CHECKPOINT_INTERVAL 60
#define NUM_CHECKPOINTS (TOTAL_FRAMES / CHECKPOINT_INTERVAL)

static void generate_input_sequence(uint16_t* inputs, size_t count)
{
    for (size_t f = 0; f < count; ++f) {
        uint16_t inp = INPUT_NONE;

        if (f >= 20 && f < 80) {
            // Walking right
            inp |= INPUT_RIGHT;
        } else if (f >= 80 && f < 100) {
            // Jump right
            inp |= (INPUT_RIGHT | INPUT_JUMP);
        } else if (f >= 100 && f < 140) {
            // Fire laser while continuing forward
            inp |= (INPUT_RIGHT | INPUT_FIRE_LASER);
        } else if (f >= 140 && f < 160) {
            // Raise barrier shield
            inp |= INPUT_SHIELD;
        } else if (f >= 160 && f < 200) {
            // Transform to Jet
            inp |= INPUT_TRANSFORM;
        } else if (f >= 200 && f < 260) {
            // Jet flight forward and slightly upward
            inp |= (INPUT_RIGHT | INPUT_UP);
        } else if (f >= 260 && f < 280) {
            // Launch missile
            inp |= (INPUT_RIGHT | INPUT_FIRE_MISSILE);
        } else if (f >= 280 && f < 300) {
            // Descend
            inp |= (INPUT_RIGHT | INPUT_DOWN);
        }

        inputs[f] = inp;
    }
}

static void setup_test_arena(game_context_t* ctx)
{
    // Clear open flight and walking corridor (x: 0..60, y: 0..9)
    for (int16_t y = 0; y < 10; ++y) {
        for (int16_t x = 0; x < 60; ++x) {
            tilemap_set_tile(&ctx->tilemap, x, y, 0);
        }
    }
    // Floor at row 10 (y = 160)
    for (int16_t x = 0; x < 60; ++x) {
        tilemap_set_tile(&ctx->tilemap, x, 10, 1);
    }
    ctx->tile_attributes[0] = TILE_FLAG_EMPTY;
    ctx->tile_attributes[1] = TILE_FLAG_SOLID;
    ctx->tilemap.tile_attributes = ctx->tile_attributes;
}

int main(void)
{
    printf("=== Test: Firehawk Deterministic Replay & State Checksums (M5.2) ===\n");

    hal_vfs_set_asset_root("assets/firehawk");

    static uint16_t script[TOTAL_FRAMES];
    generate_input_sequence(script, TOTAL_FRAMES);

    // -------------------------------------------------------------
    // Run 1: Authoritative Reference Execution
    // -------------------------------------------------------------
    printf("  Running Reference Simulation (Run 1: %d frames)...\n", TOTAL_FRAMES);
    static game_context_t ctx1;
    bool ok = game_loop_init_stage(&ctx1, 0, 0);
    TEST_ASSERT(ok);
    setup_test_arena(&ctx1);

    uint32_t checkpoints_run1[NUM_CHECKPOINTS];
    for (size_t f = 0; f < TOTAL_FRAMES; ++f) {
        game_loop_tick(&ctx1, script[f], NULL);

        if ((f + 1) % CHECKPOINT_INTERVAL == 0) {
            size_t cp_idx = (f + 1) / CHECKPOINT_INTERVAL - 1;
            checkpoints_run1[cp_idx] = replay_calculate_state_hash(&ctx1);
            printf("    Checkpoint %zu (Frame %3zu): State Hash = 0x%08X (pos: %d, %d)\n", cp_idx + 1, f + 1,
                checkpoints_run1[cp_idx], FP12_4_TO_INT(ctx1.player.position.x), FP12_4_TO_INT(ctx1.player.position.y));
        }
    }

    // -------------------------------------------------------------
    // Run 2: Exact Duplicate Execution (Determinism Verification)
    // -------------------------------------------------------------
    printf("  Running Duplicate Simulation (Run 2: %d frames)...\n", TOTAL_FRAMES);
    static game_context_t ctx2;
    ok = game_loop_init_stage(&ctx2, 0, 0);
    TEST_ASSERT(ok);
    setup_test_arena(&ctx2);

    for (size_t f = 0; f < TOTAL_FRAMES; ++f) {
        game_loop_tick(&ctx2, script[f], NULL);

        if ((f + 1) % CHECKPOINT_INTERVAL == 0) {
            size_t cp_idx = (f + 1) / CHECKPOINT_INTERVAL - 1;
            uint32_t hash2 = replay_calculate_state_hash(&ctx2);
            TEST_ASSERT(hash2 == checkpoints_run1[cp_idx]);
        }
    }

    state_snapshot_t snap1 = replay_capture_snapshot(&ctx1);
    state_snapshot_t snap2 = replay_capture_snapshot(&ctx2);

    TEST_ASSERT(snap1.player_x == snap2.player_x);
    TEST_ASSERT(snap1.player_y == snap2.player_y);
    TEST_ASSERT(snap1.player_vx == snap2.player_vx);
    TEST_ASSERT(snap1.player_vy == snap2.player_vy);
    TEST_ASSERT(snap1.player_energy == snap2.player_energy);
    TEST_ASSERT(snap1.player_shield == snap2.player_shield);
    TEST_ASSERT(snap1.player_mode == snap2.player_mode);
    TEST_ASSERT(snap1.hash == snap2.hash);

    printf("  --> 100%% Deterministic State Hash Match across all %d frames!\n", TOTAL_FRAMES);

    // -------------------------------------------------------------
    // Run 3: Perturbation Sensitivity Check
    // -------------------------------------------------------------
    printf("  Running Perturbation Simulation (Run 3: 1-bit input flip at frame 50)...\n");
    static uint16_t script_perturbed[TOTAL_FRAMES];
    memcpy(script_perturbed, script, sizeof(script));
    // Perturb frame 50: instead of INPUT_RIGHT, inject INPUT_LEFT
    script_perturbed[50] = INPUT_LEFT;

    static game_context_t ctx3;
    ok = game_loop_init_stage(&ctx3, 0, 0);
    TEST_ASSERT(ok);
    setup_test_arena(&ctx3);

    for (size_t f = 0; f < TOTAL_FRAMES; ++f) {
        game_loop_tick(&ctx3, script_perturbed[f], NULL);
    }

    state_snapshot_t snap3 = replay_capture_snapshot(&ctx3);
    // Hash MUST diverge because of altered trajectory
    TEST_ASSERT(snap3.hash != snap1.hash);
    printf("  --> Divergence correctly detected (Perturbed Hash 0x%08X != Ref 0x%08X)\n", snap3.hash, snap1.hash);

    printf("=== All M5.2 Deterministic Replay Tests PASSED ===\n");
    return 0;
}
