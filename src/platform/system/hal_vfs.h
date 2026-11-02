#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_MAX_PATH_LEN 512

/// @brief Configures root assets directory (default: "assets/firehawk")
void hal_vfs_set_asset_root(const char* root_dir);

/// @brief Returns the active asset root path
const char* hal_vfs_get_asset_root(void);

/// @brief Resolves case-insensitive DOS path to physical host path
/// @param[in] dos_path DOS relative path (e.g. "RES1.SAR", "ss010", "commdata")
/// @param[out] out_resolved_path Buffer to receive resolved host path
/// @param[in] max_len Size of out_resolved_path buffer
/// @return true if file resolved and exists, false otherwise
bool hal_vfs_resolve_path(const char* dos_path, char* out_resolved_path, size_t max_len);

/// @brief Checks whether a file exists in the virtual filesystem
bool hal_vfs_file_exists(const char* dos_path);

/// @brief Opens file in VFS with mode ("rb", "r")
FILE* hal_vfs_open(const char* dos_path, const char* mode);

/// @brief Reads entire file into newly allocated memory buffer (caller must free with hal_vfs_free)
uint8_t* hal_vfs_read_file(const char* dos_path, size_t* out_size);

/// @brief Frees memory buffer returned by hal_vfs_read_file
void hal_vfs_free(void* buffer);

#ifdef __cplusplus
}
#endif
