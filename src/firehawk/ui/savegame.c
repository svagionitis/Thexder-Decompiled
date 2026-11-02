/// @file savegame.c
/// @brief SAVEGM.DAT binary serialization, deserialization, and 16-bit checksum validation.
/// @details Ghidra: FUN_1000_27e0 (write) and FUN_1000_28a4 (read)

#include "ui/savegame.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static inline void write_le16(uint8_t* p, uint16_t v)
{
    p[0] = (uint8_t)(v & 0xFF);
    p[1] = (uint8_t)((v >> 8) & 0xFF);
}

static inline void write_le32(uint8_t* p, uint32_t v)
{
    p[0] = (uint8_t)(v & 0xFF);
    p[1] = (uint8_t)((v >> 8) & 0xFF);
    p[2] = (uint8_t)((v >> 16) & 0xFF);
    p[3] = (uint8_t)((v >> 24) & 0xFF);
}

static inline uint16_t read_le16(const uint8_t* p)
{
    return (uint16_t)((uint16_t)p[0] | ((uint16_t)p[1] << 8));
}

static inline uint32_t read_le32(const uint8_t* p)
{
    return (uint32_t)((uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24));
}

uint16_t savegame_compute_checksum(const uint8_t* buf, size_t len)
{
    if (buf == NULL) {
        return 0;
    }

    uint16_t sum = 0;
    for (size_t i = 0; i < len; ++i) {
        sum = (uint16_t)(sum + buf[i]);
    }
    return sum;
}

bool savegame_serialize(const savegame_state_t* in_state, uint8_t* out_buf, size_t buf_size)
{
    if (in_state == NULL || out_buf == NULL || buf_size < SAVEGAME_FILE_SIZE) {
        return false;
    }

    memset(out_buf, 0, SAVEGAME_FILE_SIZE);

    write_le16(out_buf + 0, in_state->stage_reached);
    write_le32(out_buf + 2, in_state->high_score);
    write_le16(out_buf + 6, in_state->energy_capacity);
    write_le16(out_buf + 8, in_state->normal_missiles);
    write_le16(out_buf + 10, in_state->homing_missiles);
    memcpy(out_buf + 12, in_state->reserved, sizeof(in_state->reserved));

    uint16_t sum = savegame_compute_checksum(out_buf, 62);
    write_le16(out_buf + 62, sum);

    return true;
}

bool savegame_deserialize(const uint8_t* in_buf, size_t buf_size, savegame_state_t* out_state)
{
    if (in_buf == NULL || out_state == NULL || buf_size < SAVEGAME_FILE_SIZE) {
        return false;
    }

    uint16_t expected_sum = read_le16(in_buf + 62);
    uint16_t computed_sum = savegame_compute_checksum(in_buf, 62);

    if (computed_sum != expected_sum) {
        return false; // Checksum validation failed (corrupted save file)
    }

    memset(out_state, 0, sizeof(savegame_state_t));
    out_state->stage_reached = read_le16(in_buf + 0);
    out_state->high_score = read_le32(in_buf + 2);
    out_state->energy_capacity = read_le16(in_buf + 6);
    out_state->normal_missiles = read_le16(in_buf + 8);
    out_state->homing_missiles = read_le16(in_buf + 10);
    memcpy(out_state->reserved, in_buf + 12, sizeof(out_state->reserved));
    out_state->checksum = expected_sum;

    return true;
}

bool savegame_write(const char* path, const savegame_state_t* state)
{
    if (path == NULL || state == NULL) {
        return false;
    }

    uint8_t buffer[SAVEGAME_FILE_SIZE];
    if (!savegame_serialize(state, buffer, sizeof(buffer))) {
        return false;
    }

    FILE* fp = fopen(path, "wb");
    if (fp == NULL) {
        return false;
    }

    size_t written = fwrite(buffer, 1, sizeof(buffer), fp);
    fclose(fp);

    return (written == sizeof(buffer));
}

bool savegame_read(const char* path, savegame_state_t* state)
{
    if (path == NULL || state == NULL) {
        return false;
    }

    FILE* fp = fopen(path, "rb");
    if (fp == NULL) {
        return false;
    }

    uint8_t buffer[SAVEGAME_FILE_SIZE];
    size_t read_bytes = fread(buffer, 1, sizeof(buffer), fp);
    fclose(fp);

    if (read_bytes != sizeof(buffer)) {
        return false;
    }

    return savegame_deserialize(buffer, sizeof(buffer), state);
}
