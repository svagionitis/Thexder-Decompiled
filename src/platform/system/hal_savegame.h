#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_SAVEGAME_MAGIC 0x46485341 // "FHSA" Firehawk Save Archive

#pragma pack(push, 1)
typedef struct hal_savegame_data {
    uint32_t magic;
    uint16_t stage_number; ///< Current mission stage (0..12)
    uint16_t energy; ///< Current player energy
    uint16_t max_energy; ///< Maximum unlocked energy capacity
    uint16_t normal_missiles; ///< Ammo count
    uint16_t homing_missiles; ///< Ammo count
    uint32_t score; ///< Accumulated score
    uint16_t checksum; ///< 16-bit additive checksum
} hal_savegame_data_t;
#pragma pack(pop)

/// @brief Calculates 16-bit checksum of save game payload
uint16_t hal_savegame_calculate_checksum(const hal_savegame_data_t* save);

/// @brief Validates save game structure integrity and checksum
bool hal_savegame_validate(const hal_savegame_data_t* save);

/// @brief Loads save game data from disk (default: "SAVEGM.DAT")
bool hal_savegame_load(const char* filepath, hal_savegame_data_t* out_save);

/// @brief Saves game data to disk with valid checksum
bool hal_savegame_save(const char* filepath, const hal_savegame_data_t* in_save);

#ifdef __cplusplus
}
#endif
