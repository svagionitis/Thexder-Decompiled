#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Ghidra decompilation primitive types for 16-bit x86 Real Mode
typedef uint8_t undefined1;
typedef uint16_t undefined2;
typedef uint32_t undefined4;
typedef uint8_t byte;
typedef void (*code)(void);

/// @brief Ghidra SUB21 byte extraction macro: extracts byte at byte offset
#define SUB21(val, off) ((uint8_t)(((uint16_t)(val)) >> ((off) * 8)))

/// @brief Total size of emulated 16-bit Real Mode DGROUP segment space (64 KB)
#define DECOMP_DGROUP_SIZE 0x10000

/// @brief Maximum active dynamic entity slots in decompiled engine
#define DECOMP_MAX_ENTITIES 64

/// @brief Screen dimensions
#define DECOMP_SCREEN_WIDTH 320
#define DECOMP_SCREEN_HEIGHT 200

/// @brief Sub-pixel 12.4 fixed-point macros
#define DECOMP_FP_SHIFT 4
#define DECOMP_INT_TO_FP(v) ((int32_t)((int32_t)(v) << DECOMP_FP_SHIFT))
#define DECOMP_FP_TO_INT(v) ((int16_t)((v) >> DECOMP_FP_SHIFT))

/// @brief 2D sub-pixel vector
typedef struct decomp_vector2d {
    int32_t x;
    int32_t y;
} decomp_vector2d_t;

/// @brief 2D integer bounding box
typedef struct decomp_aabb {
    int16_t min_x;
    int16_t min_y;
    int16_t max_x;
    int16_t max_y;
} decomp_aabb_t;

/// @brief Player modes
typedef enum decomp_player_mode {
    DECOMP_MODE_ROBOT = 0,
    DECOMP_MODE_JET = 1,
    DECOMP_MODE_MORPH = 2
} decomp_player_mode_t;

/// @brief Standalone player state structure
typedef struct decomp_player {
    decomp_vector2d_t pos;
    decomp_vector2d_t vel;
    decomp_player_mode_t mode;
    uint8_t direction; ///< 0 = Left, 1 = Right, 2 = Up, 3 = Down
    uint8_t crouching;
    uint16_t energy;
    uint16_t max_energy;
    uint16_t shield_timer;
    uint16_t normal_missiles;
    uint16_t homing_missiles;
    uint32_t score;
} decomp_player_t;

/// @brief Standalone dynamic entity descriptor
typedef struct decomp_entity {
    uint8_t active;
    uint8_t type;
    decomp_vector2d_t pos;
    decomp_vector2d_t vel;
    decomp_aabb_t hitbox;
    uint16_t health;
    uint16_t timer;
    uint16_t flags;
} decomp_entity_t;

/// @brief Standalone tilemap layout
typedef struct decomp_tilemap {
    uint16_t width;
    uint16_t height;
    uint16_t pixel_width;
    uint16_t pixel_height;
    decomp_vector2d_t camera_pos;
    uint8_t tiles[65536];
    uint16_t tile_attributes[256];
} decomp_tilemap_t;

/// @brief Standalone master decompiled context
typedef struct decomp_context {
    uint8_t state;
    decomp_player_t player;
    decomp_entity_t entities[DECOMP_MAX_ENTITIES];
    decomp_tilemap_t tilemap;
    uint8_t framebuffer[DECOMP_SCREEN_WIDTH * DECOMP_SCREEN_HEIGHT];
    uint32_t frame_count;
} decomp_context_t;

/// @brief Retrieves the base pointer to the emulated 64 KB DGROUP segment
uint8_t* game_decomp_get_dgroup(void);

/// @brief Retrieves the standalone decompiled game context
decomp_context_t* game_decomp_get_context(void);

/// @brief Initializes emulated DGROUP memory and driver vector jump tables
void game_decomp_init_memory(void);

/// @brief Sets root directory for standalone asset file I/O
void game_decomp_set_asset_root(const char* root);

/// @brief Safe emulated 8-bit memory read/write
#define DGROUP_U8(addr) (*(uint8_t*)(game_decomp_get_dgroup() + ((uint16_t)(addr))))

/// @brief Safe emulated 16-bit memory read/write
#define DGROUP_U16(addr) (*(uint16_t*)(void*)(game_decomp_get_dgroup() + ((uint16_t)(addr))))

/// @brief Safe emulated 32-bit memory read/write
#define DGROUP_U32(addr) (*(uint32_t*)(void*)(game_decomp_get_dgroup() + ((uint16_t)(addr))))

/// @brief Software interrupt dispatcher shim (INT 10h, 16h, 1Ah, 21h)
code swi(uint8_t interrupt_num);

// ============================================================================
// 1:1 Decompiled Function Prototypes (Matching Ghidra Symbol Signatures)
// ============================================================================

/// @brief 1000:0000 - Entry point, segment initialization
void entry(void);

/// @brief 1000:0016 - CRT bootstrap and BSS zeroing
void FUN_1000_0016(void);

/// @brief 1000:0188 - Master 60Hz simulation loop step
void FUN_1000_0188(void);

/// @brief 1000:0256 - State machine transition handler
void FUN_1000_0256(uint8_t new_state);

/// @brief 1000:05ae - Binary stage and spawner parser (SS000..SS120)
bool FUN_1000_05ae(const char* stage_name);

/// @brief 1000:0621 - Viewport camera scrolling and boundary clamping
void FUN_1000_0621(int16_t player_x, int16_t player_y);

/// @brief 1000:0a12 - Player kinematics, 12.4 fixed-point velocity, crouch
void FUN_1000_0a12(void);

/// @brief 1000:0b84 - Robot <-> Jet transformation trigger and clearance check
void FUN_1000_0b84(void);

/// @brief 1000:1042 - Homing laser line-of-sight raycast targeting
void FUN_1000_1042(void);

/// @brief 1000:1218 - Missile weapon launch and velocity vector setup
void FUN_1000_1218(uint8_t missile_type);

/// @brief 1000:1350 - Barrier energy shield activation and 50-energy deduction
void FUN_1000_1350(void);

/// @brief 1000:14c0 - Active 64-slot entity pool traversal and AI dispatch
void FUN_1000_14c0(void);

/// @brief 1000:1688 - Constant-time entity slot allocator and spawner instance
int16_t FUN_1000_1688(uint8_t type, int16_t x, int16_t y);

/// @brief 1000:1890 - Swept AABB collision detection against 16x16 tile grid
bool FUN_1000_1890(int16_t* io_x, int16_t* io_y, int16_t vx, int16_t vy, int16_t w, int16_t h);

/// @brief 1000:1a04 - Entity-to-entity bounding box intersection test
bool FUN_1000_1a04(int16_t x1, int16_t y1, int16_t w1, int16_t h1, int16_t x2, int16_t y2, int16_t w2, int16_t h2);

/// @brief 1000:1cb0 - Blit 16x16 stage tile grid with sub-tile pixel offsets
void FUN_1000_1cb0(void);

/// @brief 1000:1e20 - Blit masked transparent sprite to backbuffer
void FUN_1000_1e20(int16_t x, int16_t y, const uint8_t* sprite_data, int16_t w, int16_t h);

/// @brief 1000:2014 - Rasterize vector homing laser beam segments
void FUN_1000_2014(int16_t start_x, int16_t start_y, int16_t target_x, int16_t target_y);

/// @brief 1000:2180 - Audio sound effect trigger and music cue dispatch
void FUN_1000_2180(uint16_t sfx_id);

/// @brief 1000:22c8 - Cockpit HUD rendering (energy bar, shield, score)
void FUN_1000_22c8(void);

/// @brief 1000:24a0 - Query RES*.IX index tables for resource chunk
bool FUN_1000_24a0(const char* chunk_name, uint8_t* volume_out, uint32_t* offset_out, uint32_t* len_out);

/// @brief 1000:252b - Variable-width (9-12 bit) LZW stream decompressor
bool FUN_1000_252b(const uint8_t* src, size_t src_size, uint8_t* dst, size_t dst_cap, size_t* out_size);

/// @brief 1000:2608 - Extract little-endian variable bit field from stream
int32_t FUN_1000_2608(const uint8_t* src, size_t src_size, size_t* bit_offset, uint8_t bit_len);

/// @brief 1000:27ab - Save state coordination and DGROUP variable sync
void FUN_1000_27ab(void);

/// @brief 1000:27e0 - Serialize SAVEGM.DAT and calculate 16-bit additive checksum
bool FUN_1000_27e0(const char* path);

/// @brief 1000:28a4 - Deserialize SAVEGM.DAT and validate 16-bit checksum
bool FUN_1000_28a4(const char* path);

#ifdef __cplusplus
}
#endif
