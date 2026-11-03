#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "game_loop.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Magic bytes for Firehawk replay vector file
#define REPLAY_MAGIC "FHKR"

/// @brief Recorded input state for a single 60Hz simulation frame
typedef struct replay_frame {
    uint32_t frame_index; ///< Monotonic simulation frame index
    uint16_t scancode_mask; ///< Active input button mask (INPUT_FLAG_*)
    uint8_t action_flags; ///< Transformation, fire laser, missile, shield
    uint8_t reserved; ///< Alignment padding
} replay_frame_t;

/// @brief Header for deterministic input recording file (.rec)
typedef struct replay_header {
    char magic[4]; ///< "FHKR"
    uint16_t version; ///< Format version (0x0100)
    uint8_t starting_stage; ///< Initial stage (0 to 12)
    uint8_t starting_substage; ///< Initial sub-stage (0 to 2)
    uint32_t total_frames; ///< Total simulation ticks recorded
    uint32_t initial_seed; ///< PRNG initial seed
    uint32_t final_state_hash; ///< Expected CRC32 state hash at completion
} replay_header_t;

/// @brief Authoritative simulation state snapshot for diffing
typedef struct state_snapshot {
    uint32_t frame_number;
    int32_t player_x;
    int32_t player_y;
    int32_t player_vx;
    int32_t player_vy;
    uint16_t player_energy;
    uint16_t player_shield;
    uint8_t player_mode;
    uint8_t active_entity_count;
    uint32_t score;
    uint32_t hash;
} state_snapshot_t;

/// @brief Compute CRC32 hash of a data buffer
static inline uint32_t replay_crc32(uint32_t crc, const uint8_t* buf, size_t len)
{
    crc = ~crc;
    for (size_t i = 0; i < len; ++i) {
        crc ^= buf[i];
        for (int k = 0; k < 8; ++k) {
            crc = (crc >> 1) ^ (0xEDB88320U & -(crc & 1U));
        }
    }
    return ~crc;
}

/// @brief Compute authoritative CRC32 hash of current game state
static inline uint32_t replay_calculate_state_hash(const game_context_t* ctx)
{
    if (ctx == NULL) {
        return 0;
    }

    uint32_t hash = 0;

    // Hash player kinematic state
    hash = replay_crc32(hash, (const uint8_t*)&ctx->player.position, sizeof(ctx->player.position));
    hash = replay_crc32(hash, (const uint8_t*)&ctx->player.velocity, sizeof(ctx->player.velocity));
    hash = replay_crc32(hash, (const uint8_t*)&ctx->player.energy, sizeof(ctx->player.energy));
    hash = replay_crc32(hash, (const uint8_t*)&ctx->player.shield_timer, sizeof(ctx->player.shield_timer));
    hash = replay_crc32(hash, (const uint8_t*)&ctx->player.mode, sizeof(ctx->player.mode));
    hash = replay_crc32(hash, (const uint8_t*)&ctx->player.facing, sizeof(ctx->player.facing));
    hash = replay_crc32(hash, (const uint8_t*)&ctx->player.grounded, sizeof(ctx->player.grounded));
    hash = replay_crc32(hash, (const uint8_t*)&ctx->player.crouching, sizeof(ctx->player.crouching));

    // Hash active entity count and positions
    uint8_t active_count = 0;
    for (size_t i = 0; i < MAX_ENTITIES; ++i) {
        const entity_t* ent = &ctx->pool.slots[i];
        if (ent->active != 0) {
            active_count++;
            hash = replay_crc32(hash, (const uint8_t*)&ent->type, sizeof(ent->type));
            hash = replay_crc32(hash, (const uint8_t*)&ent->position, sizeof(ent->position));
            hash = replay_crc32(hash, (const uint8_t*)&ent->health, sizeof(ent->health));
        }
    }
    hash = replay_crc32(hash, (const uint8_t*)&active_count, sizeof(active_count));

    // Hash camera position and frame counter
    hash = replay_crc32(hash, (const uint8_t*)&ctx->tilemap.camera_pos, sizeof(ctx->tilemap.camera_pos));
    hash = replay_crc32(hash, (const uint8_t*)&ctx->frame_counter, sizeof(ctx->frame_counter));

    return hash;
}

/// @brief Capture an authoritative state snapshot
static inline state_snapshot_t replay_capture_snapshot(const game_context_t* ctx)
{
    state_snapshot_t snap = { 0 };
    if (ctx == NULL) {
        return snap;
    }

    snap.frame_number = ctx->frame_counter;
    snap.player_x = ctx->player.position.x;
    snap.player_y = ctx->player.position.y;
    snap.player_vx = ctx->player.velocity.x;
    snap.player_vy = ctx->player.velocity.y;
    snap.player_energy = ctx->player.energy;
    snap.player_shield = ctx->player.shield_timer;
    snap.player_mode = (uint8_t)ctx->player.mode;
    snap.active_entity_count = (uint8_t)ctx->pool.active_count;
    snap.score = ctx->player.score;
    snap.hash = replay_calculate_state_hash(ctx);

    return snap;
}

#ifdef __cplusplus
}
#endif
