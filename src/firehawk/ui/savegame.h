#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define SAVEGAME_FILE_SIZE 64

/// @brief 64-byte persistent savegame record (SAVEGM.DAT)
/// @details Ghidra: FUN_1000_27e0 (write) and FUN_1000_28a4 (read)
typedef struct savegame_state {
    uint16_t stage_reached; ///< Highest unlocked stage number (0 to 12)
    uint32_t high_score; ///< High score record
    uint16_t energy_capacity; ///< Upgraded max energy reservoir
    uint16_t normal_missiles; ///< Saved normal missile stock
    uint16_t homing_missiles; ///< Saved homing missile stock
    uint8_t reserved[50]; ///< Reserved extension bytes
    uint16_t checksum; ///< 16-bit validation checksum
} savegame_state_t;

/// @brief Compute 16-bit additive validation checksum over save buffer
/// @param buf Pointer to 62 data bytes
/// @param len Number of bytes to sum (typically 62)
/// @return Computed 16-bit checksum
uint16_t savegame_compute_checksum(const uint8_t* buf, size_t len);

/// @brief Serialize savegame state into binary 64-byte buffer with computed checksum
/// @param in_state Pointer to save state struct
/// @param out_buf Destination buffer (at least 64 bytes)
/// @param buf_size Capacity of destination buffer
/// @return true on success, false if buffer is too small
bool savegame_serialize(const savegame_state_t* in_state, uint8_t* out_buf, size_t buf_size);

/// @brief Deserialize savegame buffer, strictly validating checksum
/// @param in_buf Pointer to 64-byte input buffer
/// @param buf_size Size of input buffer
/// @param out_state Pointer to receive deserialized state
/// @return true if valid and checksum matches, false if corrupted
bool savegame_deserialize(const uint8_t* in_buf, size_t buf_size, savegame_state_t* out_state);

/// @brief Write save record to disk file with checksum
/// @param path Destination filepath
/// @param state Pointer to save state to write
/// @return true on success, false on I/O error
bool savegame_write(const char* path, const savegame_state_t* state);

/// @brief Read and validate save record from disk file
/// @param path Source filepath
/// @param state Pointer to receive validated save state
/// @return true on success, false on I/O error or checksum failure
bool savegame_read(const char* path, savegame_state_t* state);

#ifdef __cplusplus
}
#endif
