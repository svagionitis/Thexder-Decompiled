/// @file test_savegame.c
/// @brief Automated verification test for Firehawk SAVEGM.DAT binary serialization and checksums.

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ui/savegame.h"

#define TEST_ASSERT(cond)                                                                                              \
    do {                                                                                                               \
        if (!(cond)) {                                                                                                 \
            fprintf(stderr, "[FAIL] Assertion failed: %s (%s:%d)\n", #cond, __FILE__, __LINE__);                       \
            exit(1);                                                                                                   \
        }                                                                                                              \
    } while (0)

int main(void)
{
    printf("=== Test: Firehawk Save State Serialization & Checksum (M4.6) ===\n");

    // 1. Populate sample save record
    savegame_state_t original = { 0 };
    original.stage_reached = 5;
    original.high_score = 125400;
    original.energy_capacity = 4500;
    original.normal_missiles = 18;
    original.homing_missiles = 7;
    for (int i = 0; i < 50; ++i) {
        original.reserved[i] = (uint8_t)(i * 3 + 1);
    }

    // 2. Serialize to 64-byte buffer
    uint8_t save_buf[SAVEGAME_FILE_SIZE];
    bool ser_ok = savegame_serialize(&original, save_buf, sizeof(save_buf));
    TEST_ASSERT(ser_ok);

    // Verify checksum is non-zero and placed at offsets 62..63
    uint16_t checksum = (uint16_t)((uint16_t)save_buf[62] | ((uint16_t)save_buf[63] << 8));
    TEST_ASSERT(checksum > 0);
    printf("[PASS] Serialized 64-byte save record with valid 16-bit checksum: 0x%04X\n", checksum);

    // 3. Deserialize buffer and verify exact round-trip fidelity
    savegame_state_t loaded = { 0 };
    bool deser_ok = savegame_deserialize(save_buf, sizeof(save_buf), &loaded);
    TEST_ASSERT(deser_ok);
    TEST_ASSERT(loaded.stage_reached == 5);
    TEST_ASSERT(loaded.high_score == 125400);
    TEST_ASSERT(loaded.energy_capacity == 4500);
    TEST_ASSERT(loaded.normal_missiles == 18);
    TEST_ASSERT(loaded.homing_missiles == 7);
    TEST_ASSERT(memcmp(original.reserved, loaded.reserved, sizeof(original.reserved)) == 0);
    TEST_ASSERT(loaded.checksum == checksum);
    printf("[PASS] Deserialized record matches all original fields with 100%% fidelity\n");

    // 4. Mutation / Corruption detection test
    // Flip 1 bit in high_score (offset 3)
    save_buf[3] ^= 0x01;
    savegame_state_t corrupted = { 0 };
    bool corrupt_rejected = !savegame_deserialize(save_buf, sizeof(save_buf), &corrupted);
    TEST_ASSERT(corrupt_rejected);
    printf("[PASS] Checksum mismatch successfully detected 1-bit corruption and rejected load\n");

    // 5. Test round-trip disk write & read
    const char* temp_save_path = "tests_temp_savegm.dat";
    save_buf[3] ^= 0x01; // Restore bit
    TEST_ASSERT(savegame_deserialize(save_buf, sizeof(save_buf), &loaded));

    bool write_ok = savegame_write(temp_save_path, &loaded);
    TEST_ASSERT(write_ok);

    savegame_state_t disk_read = { 0 };
    bool read_ok = savegame_read(temp_save_path, &disk_read);
    TEST_ASSERT(read_ok);
    TEST_ASSERT(disk_read.high_score == 125400);
    remove(temp_save_path);
    printf("[PASS] Disk save file read/write roundtrip verified\n");

    printf("=== All M4.6 SaveGame Tests PASSED ===\n");
    return 0;
}
