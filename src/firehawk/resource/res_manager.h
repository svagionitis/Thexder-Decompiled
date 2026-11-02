#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define RES_MAX_ARCHIVES 4
#define RES_MAX_TAG_LEN 8

/// @brief Represents an individual resource entry record parsed from an .IX catalog
typedef struct res_entry {
    char tag[RES_MAX_TAG_LEN + 1]; ///< 8-character ASCII tag, null-terminated
    uint16_t flags; ///< Resource flags/type
    uint16_t subtype; ///< Subtype identifier
    uint16_t data_size; ///< Compressed byte length in .SAR
    uint32_t sar_offset; ///< Byte offset in companion .SAR volume
    uint8_t archive_idx; ///< Archive volume index (0 = RES1, 1 = RES2, etc.)
} res_entry_t;

/// @brief Initializes resource manager and loads directory indexes (RES1.IX, RES2.IX, RES3.IX)
/// @return true on success, false if required archives could not be loaded
bool res_manager_init(void);

/// @brief Shuts down resource manager and frees all loaded archive buffers and tables
void res_manager_shutdown(void);

/// @brief Searches all loaded index catalogs for an 8-character tag
/// @param[in] tag Resource identifier string (e.g. "SHIP", "ITEM", "KA00", "COMMDATA")
/// @return Pointer to entry metadata, or NULL if not found
const res_entry_t* res_manager_find(const char* tag);

/// @brief Loads a resource chunk by tag, optionally decompressing with LZW
/// @param[in] tag Resource identifier
/// @param[out] out_buffer Target buffer to receive payload
/// @param[in] dst_capacity Capacity of destination buffer in bytes
/// @param[out] out_size Pointer to receive actual bytes loaded/decompressed
/// @param[in] decompress If true, executes LZW decompression if stream is compressed
/// @return true on success, false on failure (not found, capacity exceeded, decompression error)
bool res_manager_load_chunk(
    const char* tag, uint8_t* out_buffer, size_t dst_capacity, size_t* out_size, bool decompress);

/// @brief Reads and optionally decompresses a standalone file from VFS (e.g. "REGFONT", "SS000")
/// @param[in] filename Relative file name in assets directory
/// @param[out] out_buffer Destination buffer
/// @param[in] dst_capacity Buffer capacity in bytes
/// @param[out] out_size Pointer to receive actual output byte count
/// @param[in] decompress If true, decompresses if LZW header is detected
/// @return true on success, false on error
bool res_manager_load_file(
    const char* filename, uint8_t* out_buffer, size_t dst_capacity, size_t* out_size, bool decompress);

#ifdef __cplusplus
}
#endif
