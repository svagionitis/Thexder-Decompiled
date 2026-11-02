#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "types.h"
#include "world/tilemap.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Test if two 2D axis-aligned bounding boxes intersect (exclusive of max boundary)
/// @details Ghidra: FUN_1000_1a04 (1000:1a04)
/// @param a First bounding box
/// @param b Second bounding box
/// @return true if overlapping, false otherwise
bool collision_aabb_intersects(const aabb_t* a, const aabb_t* b);

/// @brief Check if an AABB intersects any tiles matching the attribute bitmask
/// @details Ghidra: FUN_1000_1890 (1000:1890)
/// @param tilemap Active stage tilemap
/// @param box Bounding box in integer pixel coordinates
/// @param mask Tile attribute bitmask to test against (e.g. TILE_FLAG_SOLID)
/// @return true if collision detected with matching tile, false otherwise
bool collision_check_tile_aabb(const stage_tilemap_t* tilemap, const aabb_t* box, uint16_t mask);

/// @brief Swept collision resolution along horizontal axis against solid tiles
/// @param tilemap Active stage tilemap
/// @param box Pointer to bounding box; will be updated with actual moved position
/// @param dx Intended displacement along X axis in pixels
/// @param out_actual_dx Pointer to receive actual allowed displacement before contact
/// @return true if movement was blocked/collided, false if free movement
bool collision_swept_move_x(const stage_tilemap_t* tilemap, aabb_t* box, int16_t dx, int16_t* out_actual_dx);

/// @brief Swept collision resolution along vertical axis against solid tiles
/// @param tilemap Active stage tilemap
/// @param box Pointer to bounding box; will be updated with actual moved position
/// @param dy Intended displacement along Y axis in pixels
/// @param out_actual_dy Pointer to receive actual allowed displacement before contact
/// @return true if movement was blocked/collided (e.g. landed on floor or hit ceiling)
bool collision_swept_move_y(const stage_tilemap_t* tilemap, aabb_t* box, int16_t dy, int16_t* out_actual_dy);

/// @brief Line-of-sight raycast testing whether a 2D line segment is blocked by solid tiles
/// @details Ghidra: FUN_1000_1042 targeting raycast
/// @param tilemap Active stage tilemap
/// @param x0 Line start X in pixels
/// @param y0 Line start Y in pixels
/// @param x1 Line end X in pixels
/// @param y1 Line end Y in pixels
/// @param mask Tile flags that block the ray (typically TILE_FLAG_SOLID)
/// @return true if ray is obstructed by a blocking tile, false if clear line of sight
bool collision_line_obstructed(
    const stage_tilemap_t* tilemap, int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t mask);

#ifdef __cplusplus
}
#endif
