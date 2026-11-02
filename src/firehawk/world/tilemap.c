/// @file tilemap.c
/// @brief Tilemap geometry queries, attribute checking, and camera tracking.
/// @details Ghidra: FUN_1000_0621 (1000:0621)

#include "world/tilemap.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "types.h"

void tilemap_init(stage_tilemap_t* tilemap, uint16_t stage_id, uint16_t width, uint16_t height, uint8_t* tile_buf,
    uint16_t* attr_table)
{
    if (tilemap == NULL) {
        return;
    }

    tilemap->stage_id = stage_id;
    tilemap->width = width;
    tilemap->height = height;
    tilemap->pixel_width = (uint16_t)(width * TILE_SIZE);
    tilemap->pixel_height = (uint16_t)(height * TILE_SIZE);
    tilemap->tile_indices = tile_buf;
    tilemap->tile_attributes = attr_table;
    tilemap->camera_pos.x = 0;
    tilemap->camera_pos.y = 0;
    tilemap->spawn_pos.x = INT_TO_FP12_4(32);
    tilemap->spawn_pos.y = INT_TO_FP12_4(32);
}

uint8_t tilemap_get_tile(const stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y)
{
    if (tilemap == NULL || tilemap->tile_indices == NULL) {
        return 0;
    }
    if (tile_x < 0 || tile_x >= (int16_t)tilemap->width || tile_y < 0 || tile_y >= (int16_t)tilemap->height) {
        return 0;
    }

    size_t index = (size_t)tile_y * (size_t)tilemap->width + (size_t)tile_x;
    return tilemap->tile_indices[index];
}

void tilemap_set_tile(stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y, uint8_t tile_id)
{
    if (tilemap == NULL || tilemap->tile_indices == NULL) {
        return;
    }
    if (tile_x < 0 || tile_x >= (int16_t)tilemap->width || tile_y < 0 || tile_y >= (int16_t)tilemap->height) {
        return;
    }

    size_t index = (size_t)tile_y * (size_t)tilemap->width + (size_t)tile_x;
    tilemap->tile_indices[index] = tile_id;
}

uint16_t tilemap_get_flags(const stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y)
{
    if (tilemap == NULL) {
        return TILE_FLAG_SOLID;
    }
    if (tile_x < 0 || tile_x >= (int16_t)tilemap->width || tile_y < 0 || tile_y >= (int16_t)tilemap->height) {
        return TILE_FLAG_SOLID;
    }

    uint8_t tile_id = tilemap_get_tile(tilemap, tile_x, tile_y);
    if (tilemap->tile_attributes != NULL) {
        return tilemap->tile_attributes[tile_id];
    }

    // Default heuristic if attribute table not provided: tile 0 is empty, non-zero is solid
    return (tile_id == 0) ? TILE_FLAG_EMPTY : TILE_FLAG_SOLID;
}

bool tilemap_is_solid(const stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y)
{
    uint16_t flags = tilemap_get_flags(tilemap, tile_x, tile_y);
    return (flags & (uint16_t)TILE_FLAG_SOLID) != 0;
}

bool tilemap_is_hazard(const stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y)
{
    uint16_t flags = tilemap_get_flags(tilemap, tile_x, tile_y);
    return (flags & ((uint16_t)TILE_FLAG_LAVA_HAZARD | (uint16_t)TILE_FLAG_ELECTRIC)) != 0;
}

bool tilemap_is_breakable(const stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y)
{
    uint16_t flags = tilemap_get_flags(tilemap, tile_x, tile_y);
    return (flags & (uint16_t)TILE_FLAG_BREAKABLE) != 0;
}

void tilemap_update_cam(stage_tilemap_t* tilemap, vector2d_t target_pos, int16_t viewport_w, int16_t viewport_h)
{
    if (tilemap == NULL) {
        return;
    }

    int16_t px = FP12_4_TO_INT(target_pos.x);
    int16_t py = FP12_4_TO_INT(target_pos.y);
    int16_t cam_x = FP12_4_TO_INT(tilemap->camera_pos.x);
    int16_t cam_y = FP12_4_TO_INT(tilemap->camera_pos.y);

    // Deadzone tracking: [120, 200] in X, [60, 108] in Y
    const int16_t DEADZONE_MIN_X = 120;
    const int16_t DEADZONE_MAX_X = 200;
    const int16_t DEADZONE_MIN_Y = 60;
    const int16_t DEADZONE_MAX_Y = 108;

    int16_t rel_x = (int16_t)(px - cam_x);
    int16_t rel_y = (int16_t)(py - cam_y);

    if (rel_x < DEADZONE_MIN_X) {
        cam_x = (int16_t)(px - DEADZONE_MIN_X);
    } else if (rel_x > DEADZONE_MAX_X) {
        cam_x = (int16_t)(px - DEADZONE_MAX_X);
    }

    if (rel_y < DEADZONE_MIN_Y) {
        cam_y = (int16_t)(py - DEADZONE_MIN_Y);
    } else if (rel_y > DEADZONE_MAX_Y) {
        cam_y = (int16_t)(py - DEADZONE_MAX_Y);
    }

    // Clamp to map bounds
    int16_t max_cam_x
        = (int16_t)((tilemap->pixel_width > (uint16_t)viewport_w) ? (tilemap->pixel_width - (uint16_t)viewport_w) : 0);
    int16_t max_cam_y
        = (int16_t)((tilemap->pixel_height > (uint16_t)viewport_h) ? (tilemap->pixel_height - (uint16_t)viewport_h)
                                                                   : 0);

    if (cam_x < 0) {
        cam_x = 0;
    } else if (cam_x > max_cam_x) {
        cam_x = max_cam_x;
    }

    if (cam_y < 0) {
        cam_y = 0;
    } else if (cam_y > max_cam_y) {
        cam_y = max_cam_y;
    }

    tilemap->camera_pos.x = INT_TO_FP12_4(cam_x);
    tilemap->camera_pos.y = INT_TO_FP12_4(cam_y);
}
