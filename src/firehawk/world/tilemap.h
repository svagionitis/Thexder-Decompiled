#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Tile collision, interaction, and environmental flags
typedef enum tile_flags {
    TILE_FLAG_EMPTY = 0x0000, ///< Passable empty space
    TILE_FLAG_SOLID = 0x0001, ///< Solid blocking terrain
    TILE_FLAG_BREAKABLE = 0x0002, ///< Destructible with weapons
    TILE_FLAG_LAVA_HAZARD = 0x0004, ///< Instant or rapid energy drain hazard
    TILE_FLAG_ELECTRIC = 0x0008, ///< High-voltage shock hazard
    TILE_FLAG_WATER = 0x0010, ///< Fluid drag zone
    TILE_FLAG_RECHARGE = 0x0020, ///< Energy recovery station
    TILE_FLAG_CONVEYOR_L = 0x0040, ///< Leftward conveyor movement
    TILE_FLAG_CONVEYOR_R = 0x0080 ///< Rightward conveyor movement
} tile_flags_t;

/// @brief Tile pixel dimension (16x16 pixels per tile)
#define TILE_SIZE 16
#define TILE_SHIFT 4

/// @brief Active stage geometry grid and tile attribute cache
/// @details Ghidra: DGROUP:C000_DBFF tile cache
typedef struct stage_tilemap {
    uint16_t stage_id; ///< Numeric stage identifier (0 to 12)
    uint16_t width; ///< Grid width in 16x16 tiles
    uint16_t height; ///< Grid height in 16x16 tiles
    uint16_t pixel_width; ///< Total width in pixels (width * 16)
    uint16_t pixel_height; ///< Total height in pixels (height * 16)
    uint8_t* tile_indices; ///< Pointer to tile index buffer (width * height)
    uint16_t* tile_attributes; ///< 256-entry attribute lookup table mapping tile ID -> flags
    vector2d_t camera_pos; ///< Top-left camera world position (12.4 fixed-point)
    vector2d_t spawn_pos; ///< Initial player spawn coordinates (12.4 fixed-point)
} stage_tilemap_t;

/// @brief Initialize a tilemap structure with grid dimensions and buffers
/// @param tilemap Pointer to stage_tilemap_t to initialize
/// @param stage_id Stage index number
/// @param width Grid width in tiles
/// @param height Grid height in tiles
/// @param tile_buf Buffer of size (width * height) holding tile indices
/// @param attr_table 256-element array of tile attribute flags (or NULL for default)
void tilemap_init(stage_tilemap_t* tilemap, uint16_t stage_id, uint16_t width, uint16_t height, uint8_t* tile_buf,
    uint16_t* attr_table);

/// @brief Retrieve tile ID at grid coordinates (with boundary clamping/check)
/// @param tilemap Pointer to stage tilemap
/// @param tile_x Horizontal tile index
/// @param tile_y Vertical tile index
/// @return Tile ID (0..255), or 0 if out of bounds
uint8_t tilemap_get_tile(const stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y);

/// @brief Set tile ID at grid coordinates
/// @param tilemap Pointer to stage tilemap
/// @param tile_x Horizontal tile index
/// @param tile_y Vertical tile index
/// @param tile_id New tile ID
void tilemap_set_tile(stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y, uint8_t tile_id);

/// @brief Query attribute bitmask for a tile at grid coordinates
/// @param tilemap Pointer to stage tilemap
/// @param tile_x Horizontal tile index
/// @param tile_y Vertical tile index
/// @return Bitmask of tile_flags_t, or TILE_FLAG_SOLID if out of bounds
uint16_t tilemap_get_flags(const stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y);

/// @brief Check whether a grid tile is solid to movement
/// @param tilemap Pointer to stage tilemap
/// @param tile_x Horizontal tile index
/// @param tile_y Vertical tile index
/// @return true if solid, false if passable
bool tilemap_is_solid(const stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y);

/// @brief Check whether a grid tile is an environmental hazard (lava, electricity)
/// @param tilemap Pointer to stage tilemap
/// @param tile_x Horizontal tile index
/// @param tile_y Vertical tile index
/// @return true if hazard, false otherwise
bool tilemap_is_hazard(const stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y);

/// @brief Check whether a grid tile is breakable
/// @param tilemap Pointer to stage tilemap
/// @param tile_x Horizontal tile index
/// @param tile_y Vertical tile index
/// @return true if breakable, false otherwise
bool tilemap_is_breakable(const stage_tilemap_t* tilemap, int16_t tile_x, int16_t tile_y);

/// @brief Update viewport camera tracking with deadzone and boundary clamping
/// @details Ghidra: FUN_1000_0621 (1000:0621)
/// @param tilemap Pointer to stage tilemap
/// @param target_pos Player center or target world position (12.4 fixed-point)
/// @param viewport_w Viewport display width in pixels (e.g. 320)
/// @param viewport_h Viewport display height in pixels (e.g. 168)
void tilemap_update_cam(stage_tilemap_t* tilemap, vector2d_t target_pos, int16_t viewport_w, int16_t viewport_h);

#ifdef __cplusplus
}
#endif
