#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "world/tilemap.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Header structure deserialized from binary stage file (SS000..SS120)
/// @details Ghidra: FUN_1000_05ae (1000:05ae)
typedef struct stage_header {
    uint16_t checksum_or_id; ///< Checksum or magic header identifier (e.g. 0x82A5)
    uint16_t flags; ///< Stage flags (e.g. 0x0000)
    uint16_t map_param_x; ///< Map parameter X (typically 2304)
    uint16_t map_param_y; ///< Map parameter Y (typically 6145)
    uint16_t tile_bank_id; ///< Visual tile bank descriptor ID
    uint16_t spawner_offset; ///< Byte offset within file where enemy spawners begin
} stage_header_t;

/// @brief Enemy spawner record deserialized from stage file
typedef struct stage_spawner {
    uint16_t x; ///< World X spawn position
    uint16_t y; ///< World Y spawn position
    uint8_t enemy_type; ///< Entity type identifier
    uint8_t flags; ///< Spawner / entity state flags
    uint8_t spawn_trigger; ///< Trigger distance / activation parameter
    uint8_t extra; ///< Variant or behavior parameter
} stage_spawner_t;

/// @brief Parse stage header from in-memory byte buffer
/// @param data Pointer to raw stage file bytes
/// @param size Total length of byte buffer in bytes
/// @param out_header Pointer to receive parsed stage_header_t
/// @return true if header successfully parsed, false if buffer is too small
bool stage_loader_parse_header(const uint8_t* data, size_t size, stage_header_t* out_header);

/// @brief Parse spawner array from in-memory stage buffer
/// @param data Pointer to raw stage file bytes
/// @param size Total length of byte buffer
/// @param spawner_offset Byte offset where spawners begin
/// @param out_spawners Destination array for spawners
/// @param max_spawners Capacity of destination array
/// @param out_spawner_count Pointer to receive number of spawners parsed
/// @return true on success, false on invalid parameters
bool stage_loader_parse_spawners(const uint8_t* data, size_t size, uint16_t spawner_offset,
    stage_spawner_t* out_spawners, size_t max_spawners, size_t* out_spawner_count);

/// @brief Load and parse a stage file by relative asset path
/// @param filename File name (e.g., "SS000" or "SS010")
/// @param out_header Pointer to receive parsed header
/// @param out_tile_data Buffer to receive extracted tilemap data (or NULL)
/// @param max_tile_data Capacity of out_tile_data buffer
/// @param out_tile_len Pointer to receive length of extracted tile data
/// @param out_spawners Array to receive parsed spawners (or NULL)
/// @param max_spawners Capacity of out_spawners array
/// @param out_spawner_count Pointer to receive number of parsed spawners
/// @return true if loaded successfully, false on error
bool stage_loader_load_file(const char* filename, stage_header_t* out_header, uint8_t* out_tile_data,
    size_t max_tile_data, size_t* out_tile_len, stage_spawner_t* out_spawners, size_t max_spawners,
    size_t* out_spawner_count);

/// @brief Load a stage by number and sub-stage into a stage_tilemap_t
/// @param stage_num Main stage number (0 to 12)
/// @param sub_stage Sub-stage index (0, 1, or 2)
/// @param out_tilemap Tilemap structure to initialize
/// @param out_header Pointer to receive parsed header (or NULL)
/// @param out_spawners Array to receive spawners (or NULL)
/// @param max_spawners Capacity of out_spawners array
/// @param out_spawner_count Pointer to receive number of parsed spawners
/// @param tile_buf Persistent buffer for tile indices
/// @param tile_buf_size Size of tile_buf in bytes
/// @return true on success, false on error
bool stage_loader_load_stage(uint8_t stage_num, uint8_t sub_stage, stage_tilemap_t* out_tilemap,
    stage_header_t* out_header, stage_spawner_t* out_spawners, size_t max_spawners, size_t* out_spawner_count,
    uint8_t* tile_buf, size_t tile_buf_size);

#ifdef __cplusplus
}
#endif
