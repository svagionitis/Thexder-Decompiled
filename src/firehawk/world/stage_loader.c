/// @file stage_loader.c
/// @brief Binary stage format loader (SS000 through SS120) and spawner deserializer.
/// @details Ghidra: FUN_1000_05ae (1000:05ae)

#include "world/stage_loader.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "system/hal_vfs.h"
#include "world/tilemap.h"

/// @brief Explicit little-endian 16-bit unsigned read helper
static inline uint16_t read_le16(const uint8_t* p)
{
    return (uint16_t)((uint16_t)p[0] | ((uint16_t)p[1] << 8));
}

bool stage_loader_parse_header(const uint8_t* data, size_t size, stage_header_t* out_header)
{
    if (data == NULL || out_header == NULL || size < 12) {
        return false;
    }

    out_header->checksum_or_id = read_le16(data + 0);
    out_header->flags = read_le16(data + 2);
    out_header->map_param_x = read_le16(data + 4);
    out_header->map_param_y = read_le16(data + 6);
    out_header->tile_bank_id = read_le16(data + 8);
    out_header->spawner_offset = read_le16(data + 10);

    return true;
}

bool stage_loader_parse_spawners(const uint8_t* data, size_t size, uint16_t spawner_offset,
    stage_spawner_t* out_spawners, size_t max_spawners, size_t* out_spawner_count)
{
    if (data == NULL || out_spawners == NULL || out_spawner_count == NULL) {
        return false;
    }

    *out_spawner_count = 0;

    // Check if spawner offset is within valid range
    if (spawner_offset == 0 || (size_t)spawner_offset >= size) {
        return true; // No spawners in this stage
    }

    size_t available = size - (size_t)spawner_offset;
    const size_t SPAWNER_RECORD_SIZE = 8;
    size_t total_records = available / SPAWNER_RECORD_SIZE;
    if (total_records > max_spawners) {
        total_records = max_spawners;
    }

    const uint8_t* ptr = data + spawner_offset;
    for (size_t i = 0; i < total_records; ++i) {
        out_spawners[i].x = read_le16(ptr);
        out_spawners[i].y = read_le16(ptr + 2);
        out_spawners[i].enemy_type = ptr[4];
        out_spawners[i].flags = ptr[5];
        out_spawners[i].spawn_trigger = ptr[6];
        out_spawners[i].extra = ptr[7];
        ptr += SPAWNER_RECORD_SIZE;
    }

    *out_spawner_count = total_records;
    return true;
}

bool stage_loader_load_file(const char* filename, stage_header_t* out_header, uint8_t* out_tile_data,
    size_t max_tile_data, size_t* out_tile_len, stage_spawner_t* out_spawners, size_t max_spawners,
    size_t* out_spawner_count)
{
    if (filename == NULL || out_header == NULL) {
        return false;
    }

    size_t bytes_read = 0;
    uint8_t* stage_buffer = hal_vfs_read_file(filename, &bytes_read);
    if (stage_buffer == NULL) {
        return false;
    }

    if (!stage_loader_parse_header(stage_buffer, bytes_read, out_header)) {
        hal_vfs_free(stage_buffer);
        return false;
    }

    // Parse spawners if requested
    if (out_spawners != NULL && out_spawner_count != NULL) {
        stage_loader_parse_spawners(
            stage_buffer, bytes_read, out_header->spawner_offset, out_spawners, max_spawners, out_spawner_count);
    }

    // Extract tile data between header (12 bytes) and spawner offset (or end of file)
    size_t tile_start = 12;
    size_t tile_end = bytes_read;
    if (out_header->spawner_offset > tile_start && (size_t)out_header->spawner_offset < bytes_read) {
        tile_end = (size_t)out_header->spawner_offset;
    }

    size_t tile_len = tile_end - tile_start;
    if (out_tile_len != NULL) {
        *out_tile_len = tile_len;
    }

    if (out_tile_data != NULL && max_tile_data > 0) {
        size_t copy_len = (tile_len < max_tile_data) ? tile_len : max_tile_data;
        memcpy(out_tile_data, stage_buffer + tile_start, copy_len);
    }

    hal_vfs_free(stage_buffer);
    return true;
}

bool stage_loader_load_stage(uint8_t stage_num, uint8_t sub_stage, stage_tilemap_t* out_tilemap,
    stage_header_t* out_header, stage_spawner_t* out_spawners, size_t max_spawners, size_t* out_spawner_count,
    uint8_t* tile_buf, size_t tile_buf_size)
{
    if (out_tilemap == NULL || tile_buf == NULL || tile_buf_size == 0) {
        return false;
    }

    char filename[16];
    snprintf(filename, sizeof(filename), "SS%02u%u", stage_num, sub_stage);

    stage_header_t hdr = { 0 };
    size_t tile_len = 0;

    if (!stage_loader_load_file(
            filename, &hdr, tile_buf, tile_buf_size, &tile_len, out_spawners, max_spawners, out_spawner_count)) {
        return false;
    }

    if (out_header != NULL) {
        *out_header = hdr;
    }

    // Compute dimensions: map_param_x / 16 gives horizontal tile count
    uint16_t width = (hdr.map_param_x > 0) ? (uint16_t)(hdr.map_param_x / TILE_SIZE) : 144;
    if (width == 0) {
        width = 144;
    }

    uint16_t height = (uint16_t)((tile_len + width - 1) / width);
    if (height == 0) {
        height = 32;
    }

    tilemap_init(out_tilemap, stage_num, width, height, tile_buf, NULL);
    return true;
}
