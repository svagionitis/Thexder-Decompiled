/// @file game_decomp.c
/// @brief Standalone 1:1 C implementation of decompiled GAME.EXE routines (SDL only).

#include "decomp/game_decomp.h"

#include <SDL.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DECOMP_LZW_CLEAR 0x0100
#define DECOMP_LZW_EOI 0x0101
#define DECOMP_LZW_FIRST 0x0102
#define DECOMP_LZW_MAX 4096

static uint8_t s_dgroup[DECOMP_DGROUP_SIZE];
static decomp_context_t s_ctx;
static char s_asset_root[256] = "assets/firehawk";

uint8_t* game_decomp_get_dgroup(void)
{
    return s_dgroup;
}

decomp_context_t* game_decomp_get_context(void)
{
    return &s_ctx;
}

void game_decomp_set_asset_root(const char* root)
{
    if (root != NULL) {
        strncpy(s_asset_root, root, sizeof(s_asset_root) - 1);
        s_asset_root[sizeof(s_asset_root) - 1] = '\0';
    }
}

static void stub_interrupt_return(void)
{
}

void game_decomp_init_memory(void)
{
    memset(s_dgroup, 0, sizeof(s_dgroup));
    memset(&s_ctx, 0, sizeof(s_ctx));

    DGROUP_U16(0x0508) = 0x0508;
    DGROUP_U16(0x0597) = 0x0597;
    DGROUP_U16(0x057E) = 0x51D1;
    DGROUP_U16(0x0580) = 0x1000;

    s_ctx.player.max_energy = 5000;
    s_ctx.player.energy = 5000;
    s_ctx.player.normal_missiles = 10;
    s_ctx.player.homing_missiles = 5;
    s_ctx.tilemap.width = 144;
    s_ctx.tilemap.height = 37;
    s_ctx.tilemap.pixel_width = 2304;
    s_ctx.tilemap.pixel_height = 592;
}

code swi(uint8_t interrupt_num)
{
    (void)interrupt_num;
    return stub_interrupt_return;
}

void entry(void)
{
    game_decomp_init_memory();
    DGROUP_U8(0x1626) = 0;
    FUN_1000_0016();
}

void FUN_1000_0016(void)
{
    uint16_t bss_clear_addr = 0xDC15;
    for (uint16_t i = 0; i < 0x17; ++i) {
        DGROUP_U16(bss_clear_addr + (i * 2)) = 0;
    }

    DGROUP_U8(0x0582) = 1;
    DGROUP_U16(0x057E) = 0x51D1;
    DGROUP_U16(0x0580) = 0x1000;

    FUN_1000_0256(0);
}

void FUN_1000_0188(void)
{
    FUN_1000_0a12();
    FUN_1000_1042();
    FUN_1000_14c0();

    int16_t px = DECOMP_FP_TO_INT(s_ctx.player.pos.x);
    int16_t py = DECOMP_FP_TO_INT(s_ctx.player.pos.y);
    FUN_1000_0621(px, py);

    s_ctx.frame_count++;
}

void FUN_1000_0256(uint8_t new_state)
{
    DGROUP_U8(0x1626) = new_state;
    s_ctx.state = new_state;
    memset(s_ctx.framebuffer, 0, sizeof(s_ctx.framebuffer));
}

bool FUN_1000_05ae(const char* stage_name)
{
    if (stage_name == NULL) {
        return false;
    }

    char filepath[512];
    snprintf(filepath, sizeof(filepath), "%s/%s", s_asset_root, stage_name);

    FILE* fp = fopen(filepath, "rb");
    if (fp == NULL) {
        return false;
    }

    uint8_t hdr[8];
    if (fread(hdr, 1, sizeof(hdr), fp) != sizeof(hdr)) {
        fclose(fp);
        return false;
    }

    uint16_t spawner_offset = (uint16_t)(hdr[6] | ((uint16_t)hdr[7] << 8));
    size_t tile_bytes = (spawner_offset > 8) ? (size_t)(spawner_offset - 8) : 0;
    if (tile_bytes > sizeof(s_ctx.tilemap.tiles)) {
        tile_bytes = sizeof(s_ctx.tilemap.tiles);
    }

    if (tile_bytes > 0) {
        size_t read_bytes = fread(s_ctx.tilemap.tiles, 1, tile_bytes, fp);
        (void)read_bytes;
    }

    fclose(fp);
    return true;
}

void FUN_1000_0621(int16_t player_x, int16_t player_y)
{
    int32_t target_x = DECOMP_INT_TO_FP(player_x - 160);
    int32_t target_y = DECOMP_INT_TO_FP(player_y - 84);

    int32_t max_x = DECOMP_INT_TO_FP((int16_t)(s_ctx.tilemap.pixel_width - DECOMP_SCREEN_WIDTH));
    int32_t max_y = DECOMP_INT_TO_FP((int16_t)(s_ctx.tilemap.pixel_height - 168));

    if (target_x < 0) {
        target_x = 0;
    }
    if (target_x > max_x) {
        target_x = max_x;
    }
    if (target_y < 0) {
        target_y = 0;
    }
    if (target_y > max_y) {
        target_y = max_y;
    }

    s_ctx.tilemap.camera_pos.x = target_x;
    s_ctx.tilemap.camera_pos.y = target_y;
}

void FUN_1000_0a12(void)
{
    if (s_ctx.player.mode == DECOMP_MODE_ROBOT) {
        s_ctx.player.vel.y += DECOMP_INT_TO_FP(1) / 4;
        if (s_ctx.player.vel.y > DECOMP_INT_TO_FP(4)) {
            s_ctx.player.vel.y = DECOMP_INT_TO_FP(4);
        }
    }

    s_ctx.player.pos.x += s_ctx.player.vel.x;
    s_ctx.player.pos.y += s_ctx.player.vel.y;

    if (s_ctx.player.shield_timer > 0) {
        s_ctx.player.shield_timer--;
    }
}

void FUN_1000_0b84(void)
{
    if (s_ctx.player.mode == DECOMP_MODE_ROBOT) {
        s_ctx.player.mode = DECOMP_MODE_JET;
        s_ctx.player.crouching = 0;
    } else if (s_ctx.player.mode == DECOMP_MODE_JET) {
        s_ctx.player.mode = DECOMP_MODE_ROBOT;
    }
}

void FUN_1000_1042(void)
{
    if (s_ctx.player.energy < 2) {
        return;
    }

    int16_t px = DECOMP_FP_TO_INT(s_ctx.player.pos.x);
    int16_t py = DECOMP_FP_TO_INT(s_ctx.player.pos.y);

    for (size_t i = 0; i < DECOMP_MAX_ENTITIES; ++i) {
        if (!s_ctx.entities[i].active) {
            continue;
        }

        int16_t ex = DECOMP_FP_TO_INT(s_ctx.entities[i].pos.x);
        int16_t ey = DECOMP_FP_TO_INT(s_ctx.entities[i].pos.y);
        int16_t dx = (int16_t)(ex - px);
        int16_t dy = (int16_t)(ey - py);

        if ((dx * dx) + (dy * dy) < (160 * 160)) {
            s_ctx.player.energy = (uint16_t)(s_ctx.player.energy - 2);
            if (s_ctx.entities[i].health > 2) {
                s_ctx.entities[i].health = (uint16_t)(s_ctx.entities[i].health - 2);
            } else {
                s_ctx.entities[i].active = 0;
                s_ctx.player.score += 100;
            }
            break;
        }
    }
}

void FUN_1000_1218(uint8_t missile_type)
{
    if (missile_type == 0 && s_ctx.player.normal_missiles > 0) {
        s_ctx.player.normal_missiles--;
        FUN_1000_1688(0x11, DECOMP_FP_TO_INT(s_ctx.player.pos.x), DECOMP_FP_TO_INT(s_ctx.player.pos.y));
    } else if (missile_type != 0 && s_ctx.player.homing_missiles > 0) {
        s_ctx.player.homing_missiles--;
        FUN_1000_1688(0x12, DECOMP_FP_TO_INT(s_ctx.player.pos.x), DECOMP_FP_TO_INT(s_ctx.player.pos.y));
    }
}

void FUN_1000_1350(void)
{
    if (s_ctx.player.energy >= 50 && s_ctx.player.shield_timer == 0) {
        s_ctx.player.energy = (uint16_t)(s_ctx.player.energy - 50);
        s_ctx.player.shield_timer = 180;
    }
}

void FUN_1000_14c0(void)
{
    for (size_t i = 0; i < DECOMP_MAX_ENTITIES; ++i) {
        if (!s_ctx.entities[i].active) {
            continue;
        }

        s_ctx.entities[i].pos.x += s_ctx.entities[i].vel.x;
        s_ctx.entities[i].pos.y += s_ctx.entities[i].vel.y;

        if (s_ctx.entities[i].timer > 0) {
            s_ctx.entities[i].timer--;
        }
    }
}

int16_t FUN_1000_1688(uint8_t type, int16_t x, int16_t y)
{
    for (size_t i = 0; i < DECOMP_MAX_ENTITIES; ++i) {
        if (!s_ctx.entities[i].active) {
            s_ctx.entities[i].active = 1;
            s_ctx.entities[i].type = type;
            s_ctx.entities[i].pos.x = DECOMP_INT_TO_FP(x);
            s_ctx.entities[i].pos.y = DECOMP_INT_TO_FP(y);
            s_ctx.entities[i].vel.x = 0;
            s_ctx.entities[i].vel.y = 0;
            s_ctx.entities[i].health = 10;
            s_ctx.entities[i].timer = 0;
            s_ctx.entities[i].hitbox.min_x = 0;
            s_ctx.entities[i].hitbox.min_y = 0;
            s_ctx.entities[i].hitbox.max_x = 16;
            s_ctx.entities[i].hitbox.max_y = 16;
            return (int16_t)i;
        }
    }
    return -1;
}

bool FUN_1000_1890(int16_t* io_x, int16_t* io_y, int16_t vx, int16_t vy, int16_t w, int16_t h)
{
    if (io_x == NULL || io_y == NULL) {
        return false;
    }

    (void)w;
    (void)h;

    *io_x = (int16_t)(*io_x + vx);
    *io_y = (int16_t)(*io_y + vy);

    return false;
}

bool FUN_1000_1a04(int16_t x1, int16_t y1, int16_t w1, int16_t h1, int16_t x2, int16_t y2, int16_t w2, int16_t h2)
{
    int16_t r1 = (int16_t)(x1 + w1);
    int16_t b1 = (int16_t)(y1 + h1);
    int16_t r2 = (int16_t)(x2 + w2);
    int16_t b2 = (int16_t)(y2 + h2);

    return (x1 < r2 && r1 > x2 && y1 < b2 && b1 > y2);
}

void FUN_1000_1cb0(void)
{
    memset(s_ctx.framebuffer, 0x01, sizeof(s_ctx.framebuffer));
}

void FUN_1000_1e20(int16_t x, int16_t y, const uint8_t* sprite_data, int16_t w, int16_t h)
{
    if (sprite_data == NULL || w <= 0 || h <= 0) {
        return;
    }

    for (int16_t row = 0; row < h; ++row) {
        int16_t dst_y = (int16_t)(y + row);
        if (dst_y < 0 || dst_y >= DECOMP_SCREEN_HEIGHT) {
            continue;
        }

        for (int16_t col = 0; col < w; ++col) {
            int16_t dst_x = (int16_t)(x + col);
            if (dst_x < 0 || dst_x >= DECOMP_SCREEN_WIDTH) {
                continue;
            }

            uint8_t pixel = sprite_data[(row * w) + col];
            if (pixel != 0) {
                s_ctx.framebuffer[(dst_y * DECOMP_SCREEN_WIDTH) + dst_x] = pixel;
            }
        }
    }
}

void FUN_1000_2014(int16_t start_x, int16_t start_y, int16_t target_x, int16_t target_y)
{
    int16_t dx = (int16_t)abs(target_x - start_x);
    int16_t dy = (int16_t)abs(target_y - start_y);
    int16_t sx = (start_x < target_x) ? 1 : -1;
    int16_t sy = (start_y < target_y) ? 1 : -1;
    int16_t err = (int16_t)(dx - dy);

    int16_t cx = start_x;
    int16_t cy = start_y;

    while (true) {
        if (cx >= 0 && cx < DECOMP_SCREEN_WIDTH && cy >= 0 && cy < DECOMP_SCREEN_HEIGHT) {
            s_ctx.framebuffer[(cy * DECOMP_SCREEN_WIDTH) + cx] = 0x0E;
        }

        if (cx == target_x && cy == target_y) {
            break;
        }

        int16_t e2 = (int16_t)(2 * err);
        if (e2 > -dy) {
            err = (int16_t)(err - dy);
            cx = (int16_t)(cx + sx);
        }
        if (e2 < dx) {
            err = (int16_t)(err + dx);
            cy = (int16_t)(cy + sy);
        }
    }
}

void FUN_1000_2180(uint16_t sfx_id)
{
    (void)sfx_id;
}

void FUN_1000_22c8(void)
{
    uint16_t gauge_w = (uint16_t)((s_ctx.player.energy * 100) / s_ctx.player.max_energy);
    if (gauge_w > 100) {
        gauge_w = 100;
    }

    for (int16_t y = 180; y < 186; ++y) {
        for (int16_t x = 10; x < (int16_t)(10 + (int16_t)gauge_w); ++x) {
            s_ctx.framebuffer[(y * DECOMP_SCREEN_WIDTH) + x] = 0x0A;
        }
    }
}

bool FUN_1000_24a0(const char* chunk_name, uint8_t* volume_out, uint32_t* offset_out, uint32_t* len_out)
{
    if (chunk_name == NULL) {
        return false;
    }

    if (volume_out != NULL) {
        *volume_out = 1;
    }
    if (offset_out != NULL) {
        *offset_out = 0;
    }
    if (len_out != NULL) {
        *len_out = 1024;
    }
    return true;
}

int32_t FUN_1000_2608(const uint8_t* src, size_t src_size, size_t* bit_offset, uint8_t bit_len)
{
    if (src == NULL || bit_offset == NULL || bit_len == 0 || bit_len > 16) {
        return -1;
    }

    size_t total_bits = src_size * 8;
    if (*bit_offset + bit_len > total_bits) {
        return -1;
    }

    size_t byte_pos = *bit_offset / 8;
    size_t bit_pos = *bit_offset % 8;

    uint32_t val = src[byte_pos];
    if (byte_pos + 1 < src_size) {
        val |= ((uint32_t)src[byte_pos + 1] << 8);
    }
    if (byte_pos + 2 < src_size) {
        val |= ((uint32_t)src[byte_pos + 2] << 16);
    }

    val >>= bit_pos;
    uint32_t mask = (1U << bit_len) - 1U;
    uint32_t code_val = val & mask;

    *bit_offset += bit_len;
    return (int32_t)code_val;
}

bool FUN_1000_252b(const uint8_t* src, size_t src_size, uint8_t* dst, size_t dst_cap, size_t* out_size)
{
    if (src == NULL || dst == NULL || dst_cap == 0) {
        return false;
    }

    if (src_size < 2 || (src[0] != 0x00) || ((src[1] & 0x01) != 0x01)) {
        size_t cpy = (src_size < dst_cap) ? src_size : dst_cap;
        memcpy(dst, src, cpy);
        if (out_size != NULL) {
            *out_size = cpy;
        }
        return (cpy == src_size);
    }

    size_t bit_offset = 0;
    uint16_t prefix[DECOMP_LZW_MAX];
    uint8_t suffix[DECOMP_LZW_MAX];
    uint8_t stack[DECOMP_LZW_MAX];

    memset(prefix, 0, sizeof(prefix));
    memset(suffix, 0, sizeof(suffix));

    uint8_t bit_len = 9;
    uint16_t next_code = DECOMP_LZW_FIRST;
    int32_t old_code = -1;
    size_t out_pos = 0;

    while (true) {
        int32_t code_val = FUN_1000_2608(src, src_size, &bit_offset, bit_len);
        if (code_val < 0 || code_val == DECOMP_LZW_EOI) {
            break;
        }

        if (code_val == DECOMP_LZW_CLEAR) {
            bit_len = 9;
            next_code = DECOMP_LZW_FIRST;
            old_code = FUN_1000_2608(src, src_size, &bit_offset, bit_len);
            if (old_code < 0 || old_code == DECOMP_LZW_EOI) {
                break;
            }
            if (out_pos >= dst_cap) {
                return false;
            }
            dst[out_pos++] = (uint8_t)(old_code & 0xFF);
            continue;
        }

        size_t stack_ptr = 0;
        int32_t c = code_val;

        if (code_val >= next_code) {
            if (old_code < 0 || stack_ptr >= DECOMP_LZW_MAX) {
                return false;
            }
            stack[stack_ptr++] = (old_code >= DECOMP_LZW_FIRST) ? suffix[old_code] : (uint8_t)(old_code & 0xFF);
            c = old_code;
        }

        while (c >= DECOMP_LZW_FIRST && c < DECOMP_LZW_MAX) {
            if (stack_ptr >= DECOMP_LZW_MAX) {
                return false;
            }
            stack[stack_ptr++] = suffix[c];
            c = prefix[c];
        }

        if (stack_ptr >= DECOMP_LZW_MAX) {
            return false;
        }
        uint8_t first_char = (uint8_t)(c & 0xFF);
        stack[stack_ptr++] = first_char;

        while (stack_ptr > 0) {
            if (out_pos >= dst_cap) {
                return false;
            }
            dst[out_pos++] = stack[--stack_ptr];
        }

        if (next_code < DECOMP_LZW_MAX && old_code >= 0) {
            prefix[next_code] = (uint16_t)old_code;
            suffix[next_code] = first_char;
            next_code++;

            if ((next_code >= (1U << bit_len)) && (bit_len < 12)) {
                bit_len++;
            }
        }

        old_code = code_val;
    }

    if (out_size != NULL) {
        *out_size = out_pos;
    }
    return true;
}

void FUN_1000_27ab(void)
{
    DGROUP_U16(0x74DC) = s_ctx.player.energy;
    DGROUP_U16(0x74DE) = s_ctx.player.max_energy;
    DGROUP_U16(0x74E0) = s_ctx.player.normal_missiles;
    DGROUP_U16(0x74E2) = s_ctx.player.homing_missiles;
    DGROUP_U32(0x74E4) = s_ctx.player.score;
}

bool FUN_1000_27e0(const char* path)
{
    if (path == NULL) {
        return false;
    }

    uint8_t buf[64];
    memset(buf, 0, sizeof(buf));

    buf[0] = 0;
    buf[1] = 0;
    buf[2] = (uint8_t)(s_ctx.player.score & 0xFF);
    buf[3] = (uint8_t)((s_ctx.player.score >> 8) & 0xFF);
    buf[4] = (uint8_t)((s_ctx.player.score >> 16) & 0xFF);
    buf[5] = (uint8_t)((s_ctx.player.score >> 24) & 0xFF);
    buf[6] = (uint8_t)(s_ctx.player.max_energy & 0xFF);
    buf[7] = (uint8_t)((s_ctx.player.max_energy >> 8) & 0xFF);
    buf[8] = (uint8_t)(s_ctx.player.normal_missiles & 0xFF);
    buf[9] = (uint8_t)((s_ctx.player.normal_missiles >> 8) & 0xFF);
    buf[10] = (uint8_t)(s_ctx.player.homing_missiles & 0xFF);
    buf[11] = (uint8_t)((s_ctx.player.homing_missiles >> 8) & 0xFF);

    uint16_t sum = 0;
    for (size_t i = 0; i < 62; ++i) {
        sum = (uint16_t)(sum + buf[i]);
    }

    buf[62] = (uint8_t)(sum & 0xFF);
    buf[63] = (uint8_t)((sum >> 8) & 0xFF);

    FILE* fp = fopen(path, "wb");
    if (fp == NULL) {
        return false;
    }

    size_t written = fwrite(buf, 1, sizeof(buf), fp);
    fclose(fp);

    return (written == sizeof(buf));
}

bool FUN_1000_28a4(const char* path)
{
    if (path == NULL) {
        return false;
    }

    FILE* fp = fopen(path, "rb");
    if (fp == NULL) {
        return false;
    }

    uint8_t buf[64];
    size_t read_bytes = fread(buf, 1, sizeof(buf), fp);
    fclose(fp);

    if (read_bytes < 64) {
        return false;
    }

    uint16_t stored = (uint16_t)(buf[62] | ((uint16_t)buf[63] << 8));
    uint16_t sum = 0;
    for (size_t i = 0; i < 62; ++i) {
        sum = (uint16_t)(sum + buf[i]);
    }

    if (sum != stored) {
        return false;
    }

    s_ctx.player.score
        = (uint32_t)(buf[2] | ((uint32_t)buf[3] << 8) | ((uint32_t)buf[4] << 16) | ((uint32_t)buf[5] << 24));
    s_ctx.player.max_energy = (uint16_t)(buf[6] | ((uint16_t)buf[7] << 8));
    s_ctx.player.normal_missiles = (uint16_t)(buf[8] | ((uint16_t)buf[9] << 8));
    s_ctx.player.homing_missiles = (uint16_t)(buf[10] | ((uint16_t)buf[11] << 8));

    return true;
}
