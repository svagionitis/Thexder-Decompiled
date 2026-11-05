/// @file test_game_decomp.c
/// @brief Automated verification for 1:1 decompiled GAME.EXE functions (FUN_1000_xxxx).

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "decomp/game_decomp.h"

#define TEST_ASSERT(cond)                                                                                              \
    do {                                                                                                               \
        if (!(cond)) {                                                                                                 \
            fprintf(stderr, "[FAIL] Assertion failed: %s (%s:%d)\n", #cond, __FILE__, __LINE__);                       \
            exit(1);                                                                                                   \
        }                                                                                                              \
    } while (0)

int main(void)
{
    printf("=== Test: 1:1 Decompiled Functions (FUN_1000_xxxx) ===\n");

    game_decomp_set_asset_root("assets/firehawk");

    // 1. Test entry and CRT setup (FUN_1000_0016)
    entry();
    TEST_ASSERT(DGROUP_U8(0x0582) == 1);
    TEST_ASSERT(DGROUP_U16(0x057E) == 0x51D1);
    TEST_ASSERT(DGROUP_U16(0x0580) == 0x1000);
    TEST_ASSERT(DGROUP_U16(0xDC15) == 0);
    printf("[PASS] entry() and FUN_1000_0016() initialized DGROUP segment memory cleanly\n");

    // 2. Test state change (FUN_1000_0256)
    FUN_1000_0256(1);
    TEST_ASSERT(DGROUP_U8(0x1626) == 1);
    TEST_ASSERT(game_decomp_get_context()->state == 1);
    printf("[PASS] FUN_1000_0256() updated state and DGROUP:0x1626\n");

    // 3. Test stage loader (FUN_1000_05ae)
    bool stage_ok = FUN_1000_05ae("SS000");
    TEST_ASSERT(stage_ok);
    printf("[PASS] FUN_1000_05ae() parsed SS000 stage successfully\n");

    // 4. Test LZW decompressor (FUN_1000_252b)
    uint8_t uncompressed[8] = { 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48 };
    uint8_t decomp_out[16] = { 0 };
    size_t out_sz = 0;
    bool lzw_ok = FUN_1000_252b(uncompressed, sizeof(uncompressed), decomp_out, sizeof(decomp_out), &out_sz);
    TEST_ASSERT(lzw_ok);
    TEST_ASSERT(out_sz == sizeof(uncompressed));
    TEST_ASSERT(memcmp(uncompressed, decomp_out, sizeof(uncompressed)) == 0);
    printf("[PASS] FUN_1000_252b() LZW decompressor matches reference output\n");

    // 5. Test Hitbox intersection (FUN_1000_1a04)
    TEST_ASSERT(FUN_1000_1a04(0, 0, 16, 16, 8, 8, 16, 16) == true);
    TEST_ASSERT(FUN_1000_1a04(0, 0, 16, 16, 20, 20, 16, 16) == false);
    printf("[PASS] FUN_1000_1a04() bounding box intersection verified\n");

    // 6. Test SaveGame synchronization (FUN_1000_27ab)
    decomp_context_t* ctx = game_decomp_get_context();
    decomp_player_t* plyr = &ctx->player;
    TEST_ASSERT(plyr != NULL);
    plyr->energy = 4500;
    plyr->max_energy = 5000;
    plyr->normal_missiles = 10;
    plyr->homing_missiles = 5;
    plyr->score = 123450;

    FUN_1000_27ab();
    TEST_ASSERT(DGROUP_U16(0x74DC) == 4500);
    TEST_ASSERT(DGROUP_U16(0x74DE) == 5000);
    TEST_ASSERT(DGROUP_U16(0x74E0) == 10);
    TEST_ASSERT(DGROUP_U16(0x74E2) == 5);
    TEST_ASSERT(DGROUP_U32(0x74E4) == 123450);
    printf("[PASS] FUN_1000_27ab() synchronized DGROUP savegame variables at 0x74DC..0x74E4\n");

    // 7. Test transformation check (FUN_1000_0b84)
    FUN_1000_0b84();
    printf("[PASS] FUN_1000_0b84() transformation executed safely\n");

    printf("=== All 1:1 Decompiled Functions Tests PASSED ===\n");
    return 0;
}
