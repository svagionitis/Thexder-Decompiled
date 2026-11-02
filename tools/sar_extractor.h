#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/// @brief Represents a single resource entry from a Sierra/Game Arts .IX file.
typedef struct sar_entry {
    char tag[9]; ///< 8-character resource tag plus null terminator.
    uint16_t flags; ///< Resource type/flags.
    uint16_t subtype; ///< Resource subtype identifier.
    uint16_t data_size; ///< Length of data payload in bytes.
    uint32_t sar_offset; ///< Byte offset of data payload in .SAR archive.
} sar_entry_t;

/// @brief Represents an in-memory parsed Sierra Archive Resource.
typedef struct sar_archive {
    sar_entry_t* entries; ///< Array of directory records parsed from .IX.
    size_t entry_count; ///< Total number of directory records.
    uint8_t* sar_data; ///< Mapped/loaded raw bytes of .SAR volume.
    size_t sar_size; ///< Total byte size of .SAR volume.
} sar_archive_t;

/// @brief Loads and parses a paired .IX index and .SAR volume file.
/// @param[in] ix_path Path to the .IX index file.
/// @param[in] sar_path Path to the companion .SAR archive volume file.
/// @param[out] out_archive Pointer to archive structure to populate.
/// @return true on success, false on failure.
bool sar_load(const char* ix_path, const char* sar_path, sar_archive_t* out_archive);

/// @brief Frees all allocated memory associated with a loaded archive.
/// @param[in,out] archive Pointer to archive structure.
void sar_free(sar_archive_t* archive);

/// @brief Extracts all contained resource records to files in output_dir.
/// @param[in] archive Pointer to loaded archive.
/// @param[in] output_dir Directory path where extracted files will be written.
/// @return true if all entries were extracted successfully, false on error.
bool sar_extract_all(const sar_archive_t* archive, const char* output_dir);

/// @brief Searches archive for an entry matching the 8-character tag.
/// @param[in] archive Pointer to loaded archive.
/// @param[in] tag Resource tag string to find (e.g. "KA00").
/// @return Pointer to matching entry, or NULL if not found.
const sar_entry_t* sar_find_entry(const sar_archive_t* archive, const char* tag);
