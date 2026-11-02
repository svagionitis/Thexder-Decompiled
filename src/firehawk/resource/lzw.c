#include "resource/lzw.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#define LZW_CLEAR_CODE 0x0100
#define LZW_EOI_CODE 0x0101
#define LZW_FIRST_CODE 0x0102
#define LZW_MAX_CODES 4096

bool lzw_is_compressed(const uint8_t* data, size_t size)
{
    if (data == NULL || size < 2) {
        return false;
    }
    uint16_t first_9 = (uint16_t)(data[0] | ((uint16_t)(data[1] & 0x01) << 8));
    return (first_9 == LZW_CLEAR_CODE);
}

static int32_t read_code(const uint8_t* data, size_t size, size_t* bit_offset, uint8_t bit_len)
{
    size_t total_bits = size * 8;
    if (*bit_offset + bit_len > total_bits) {
        return -1;
    }

    size_t byte_pos = *bit_offset / 8;
    size_t bit_pos = *bit_offset % 8;

    uint32_t val = data[byte_pos];
    if (byte_pos + 1 < size) {
        val |= ((uint32_t)data[byte_pos + 1] << 8);
    }
    if (byte_pos + 2 < size) {
        val |= ((uint32_t)data[byte_pos + 2] << 16);
    }

    val >>= bit_pos;
    uint32_t mask = (1U << bit_len) - 1U;
    uint32_t code = val & mask;

    *bit_offset += bit_len;
    return (int32_t)code;
}

bool lzw_decompress(
    const uint8_t* src, size_t src_size, uint8_t* dst, size_t dst_capacity, size_t* out_decompressed_size)
{
    if (src == NULL || dst == NULL || dst_capacity == 0) {
        return false;
    }

    if (out_decompressed_size != NULL) {
        *out_decompressed_size = 0;
    }

    if (!lzw_is_compressed(src, src_size)) {
        size_t copy_len = (src_size < dst_capacity) ? src_size : dst_capacity;
        memcpy(dst, src, copy_len);
        if (out_decompressed_size != NULL) {
            *out_decompressed_size = copy_len;
        }
        return (copy_len == src_size);
    }

    size_t bit_offset = 0;
    uint16_t prefix[LZW_MAX_CODES];
    uint8_t suffix[LZW_MAX_CODES];
    uint8_t stack[LZW_MAX_CODES];

    memset(prefix, 0, sizeof(prefix));
    memset(suffix, 0, sizeof(suffix));

    uint8_t bit_len = 9;
    uint16_t next_code = LZW_FIRST_CODE;
    int32_t old_code = -1;
    size_t out_pos = 0;

    while (true) {
        int32_t code = read_code(src, src_size, &bit_offset, bit_len);
        if (code < 0 || code == LZW_EOI_CODE) {
            break;
        }

        if (code == LZW_CLEAR_CODE) {
            bit_len = 9;
            next_code = LZW_FIRST_CODE;
            old_code = read_code(src, src_size, &bit_offset, bit_len);
            if (old_code < 0 || old_code == LZW_EOI_CODE) {
                break;
            }
            if (out_pos >= dst_capacity) {
                return false;
            }
            dst[out_pos++] = (uint8_t)(old_code & 0xFF);
            continue;
        }

        size_t stack_ptr = 0;
        int32_t c = code;

        if (code >= next_code) {
            if (old_code < 0 || stack_ptr >= LZW_MAX_CODES) {
                return false;
            }
            stack[stack_ptr++] = (old_code >= LZW_FIRST_CODE) ? suffix[old_code] : (uint8_t)(old_code & 0xFF);
            c = old_code;
        }

        while (c >= LZW_FIRST_CODE && c < LZW_MAX_CODES) {
            if (stack_ptr >= LZW_MAX_CODES) {
                return false;
            }
            stack[stack_ptr++] = suffix[c];
            c = prefix[c];
        }

        if (stack_ptr >= LZW_MAX_CODES) {
            return false;
        }
        stack[stack_ptr++] = (uint8_t)(c & 0xFF);
        uint8_t first_char = (uint8_t)(c & 0xFF);

        if (code >= next_code) {
            stack[0] = first_char;
        }

        while (stack_ptr > 0) {
            if (out_pos >= dst_capacity) {
                return false;
            }
            dst[out_pos++] = stack[--stack_ptr];
        }

        if (next_code < LZW_MAX_CODES && old_code >= 0) {
            prefix[next_code] = (uint16_t)old_code;
            suffix[next_code] = first_char;
            next_code++;
            if (next_code >= (1U << bit_len) && bit_len < 12) {
                bit_len++;
            }
        }

        old_code = code;
    }

    if (out_decompressed_size != NULL) {
        *out_decompressed_size = out_pos;
    }

    return true;
}
