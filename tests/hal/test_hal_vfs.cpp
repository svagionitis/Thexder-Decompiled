#include "system/hal_savegame.h"
#include "system/hal_vfs.h"

#include <assert.h>
#include <cstddef>
#include <cstdint>
#include <stdio.h>
#include <string.h>

static void test_vfs_path_resolution(void)
{
    hal_vfs_set_asset_root("assets/firehawk");

    // Case-insensitive checks for assets in assets/firehawk
    assert(hal_vfs_file_exists("RES1.SAR"));
    assert(hal_vfs_file_exists("res1.sar"));
    assert(hal_vfs_file_exists("Res1.Sar"));
    assert(hal_vfs_file_exists("GAME.EXE"));
    assert(hal_vfs_file_exists("game.exe"));
    assert(hal_vfs_file_exists("SS010"));
    assert(hal_vfs_file_exists("ss010"));

    // Traversal check should be rejected
    char resolved[HAL_MAX_PATH_LEN] { };
    bool ok = hal_vfs_resolve_path("../CMakeLists.txt", resolved, sizeof(resolved));
    assert(!ok);
    (void)ok;

    // Non-existent file
    ok = hal_vfs_resolve_path("DOES_NOT_EXIST.FOO", resolved, sizeof(resolved));
    assert(!ok);
    (void)ok;

    printf("  [PASS] test_vfs_path_resolution\n");
}

static void test_vfs_file_reading(void)
{
    hal_vfs_set_asset_root("assets/firehawk");

    size_t size = 0;
    uint8_t* data = hal_vfs_read_file("RES1.IX", &size);
    assert(data != NULL);
    assert(size > 0);
    (void)data;
    (void)size;

    // First tag in RES1.IX is "KA00    "
    assert(memcmp(data, "KA00", 4) == 0);

    hal_vfs_free(data);
    printf("  [PASS] test_vfs_file_reading\n");
}

static void test_savegame_roundtrip(void)
{
    const char* test_path = "test_savegm.dat";

    hal_savegame_data_t save_in { };
    save_in.magic = HAL_SAVEGAME_MAGIC;
    save_in.stage_number = 3;
    save_in.energy = 2500;
    save_in.max_energy = 3000;
    save_in.normal_missiles = 40;
    save_in.homing_missiles = 25;
    save_in.score = 125000;
    save_in.checksum = hal_savegame_calculate_checksum(&save_in);

    bool saved = hal_savegame_save(test_path, &save_in);
    assert(saved);
    (void)saved;

    hal_savegame_data_t save_out { };
    bool loaded = hal_savegame_load(test_path, &save_out);
    assert(loaded);
    (void)loaded;

    assert(save_out.magic == HAL_SAVEGAME_MAGIC);
    assert(save_out.stage_number == 3);
    assert(save_out.energy == 2500);
    assert(save_out.max_energy == 3000);
    assert(save_out.normal_missiles == 40);
    assert(save_out.homing_missiles == 25);
    assert(save_out.score == 125000);
    assert(save_out.checksum == hal_savegame_calculate_checksum(&save_out));

    // Clean up test file
    remove(test_path);

    printf("  [PASS] test_savegame_roundtrip\n");
}

int main(void)
{
    printf("[BEGIN] test_hal_vfs\n");
    test_vfs_path_resolution();
    test_vfs_file_reading();
    test_savegame_roundtrip();
    printf("[SUCCESS] test_hal_vfs completed cleanly.\n");
    return 0;
}
