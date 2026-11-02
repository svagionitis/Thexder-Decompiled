#include "hal_savegame.h"

#include <cstddef>
#include <cstdint>
#include <stdio.h>
#include <string.h>

uint16_t hal_savegame_calculate_checksum(const hal_savegame_data_t* save)
{
    if (save == NULL) {
        return 0;
    }

    const uint8_t* bytes = (const uint8_t*)save;
    // Sum all bytes excluding the 2-byte checksum at the end
    size_t payload_len = sizeof(hal_savegame_data_t) - sizeof(uint16_t);
    uint32_t sum = 0;

    for (size_t i = 0; i < payload_len; ++i) {
        sum += bytes[i];
    }

    return (uint16_t)(sum & 0xFFFFU);
}

bool hal_savegame_validate(const hal_savegame_data_t* save)
{
    if (save == NULL) {
        return false;
    }
    if (save->magic != HAL_SAVEGAME_MAGIC) {
        return false;
    }
    if (save->stage_number > 12) {
        return false;
    }
    return (save->checksum == hal_savegame_calculate_checksum(save));
}

bool hal_savegame_load(const char* filepath, hal_savegame_data_t* out_save)
{
    if (filepath == NULL || out_save == NULL) {
        return false;
    }

    FILE* f = fopen(filepath, "rb");
    if (f == NULL) {
        return false;
    }

    hal_savegame_data_t temp { };
    size_t read_bytes = fread(&temp, 1, sizeof(temp), f);
    fclose(f);

    if (read_bytes != sizeof(temp)) {
        return false;
    }

    if (!hal_savegame_validate(&temp)) {
        return false;
    }

    *out_save = temp;
    return true;
}

bool hal_savegame_save(const char* filepath, const hal_savegame_data_t* in_save)
{
    if (filepath == NULL || in_save == NULL) {
        return false;
    }

    hal_savegame_data_t temp { };
    memcpy(&temp, in_save, sizeof(temp));
    temp.magic = HAL_SAVEGAME_MAGIC;
    temp.checksum = hal_savegame_calculate_checksum(&temp);

    FILE* f = fopen(filepath, "wb");
    if (f == NULL) {
        return false;
    }

    size_t written = fwrite(&temp, 1, sizeof(temp), f);
    fclose(f);

    return (written == sizeof(temp));
}
