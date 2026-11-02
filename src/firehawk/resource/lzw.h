#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Checks if a binary data buffer begins with the Firehawk LZW clear code (0x100)
/// @param[in] data Pointer to raw input bytes
/// @param[in] size Size of input buffer in bytes
/// @return true if data is an LZW-compressed stream, false otherwise
bool lzw_is_compressed(const uint8_t* data, size_t size);

/// @brief Decompresses a Firehawk 9-to-12 bit variable-width LZW compressed stream
/// @details Reverse-engineered directly from GAME.EXE routine 1000:252b (FUN_1000_252b).
/// @param[in] src Pointer to compressed bitstream
/// @param[in] src_size Size of compressed bitstream in bytes
/// @param[out] dst Output buffer to receive decompressed bytes
/// @param[in] dst_capacity Maximum capacity of output buffer in bytes
/// @param[out] out_decompressed_size Optional pointer to receive actual decompressed size
/// @return true on successful decompression, false on corrupted bitstream or buffer overflow
bool lzw_decompress(
    const uint8_t* src, size_t src_size, uint8_t* dst, size_t dst_capacity, size_t* out_decompressed_size);

#ifdef __cplusplus
}
#endif
