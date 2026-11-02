#include "resource/res_manager.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "resource/lzw.h"
#include "system/hal_vfs.h"

#define SAR_RECORD_SIZE 18
#define SAR_MAGIC "$$$$$"
#define SAR_MAGIC_LEN 5

typedef struct archive_volume {
    char name[16];
    uint8_t* sar_data;
    size_t sar_size;
    res_entry_t* entries;
    size_t entry_count;
    bool loaded;
} archive_volume_t;

static archive_volume_t s_archives[RES_MAX_ARCHIVES];
static size_t s_num_archives = 0;
static bool s_initialized = false;

static inline uint16_t read_u16_le(const uint8_t* p)
{
    return (uint16_t)(p[0] | ((uint16_t)p[1] << 8));
}

static inline uint32_t read_u32_le(const uint8_t* p)
{
    return (uint32_t)(p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24));
}

static bool load_archive(uint8_t archive_idx, const char* base_name)
{
    char ix_name[32];
    char sar_name[32];
    snprintf(ix_name, sizeof(ix_name), "%s.IX", base_name);
    snprintf(sar_name, sizeof(sar_name), "%s.SAR", base_name);

    size_t ix_size = 0;
    uint8_t* ix_data = hal_vfs_read_file(ix_name, &ix_size);
    if (ix_data == NULL) {
        return false;
    }

    if (ix_size == 0 || (ix_size % SAR_RECORD_SIZE) != 0) {
        hal_vfs_free(ix_data);
        return false;
    }

    size_t sar_size = 0;
    uint8_t* sar_data = hal_vfs_read_file(sar_name, &sar_size);
    if (sar_data == NULL) {
        hal_vfs_free(ix_data);
        return false;
    }

    if (sar_size < SAR_MAGIC_LEN || memcmp(sar_data, SAR_MAGIC, SAR_MAGIC_LEN) != 0) {
        hal_vfs_free(ix_data);
        hal_vfs_free(sar_data);
        return false;
    }

    size_t count = ix_size / SAR_RECORD_SIZE;
    res_entry_t* entries = (res_entry_t*)calloc(count, sizeof(res_entry_t));
    if (entries == NULL) {
        hal_vfs_free(ix_data);
        hal_vfs_free(sar_data);
        return false;
    }

    for (size_t i = 0; i < count; ++i) {
        const uint8_t* rec = ix_data + (i * SAR_RECORD_SIZE);
        res_entry_t* e = &entries[i];

        memcpy(e->tag, rec, 8);
        e->tag[8] = '\0';
        for (int c = 7; c >= 0; --c) {
            if (e->tag[c] == ' ') {
                e->tag[c] = '\0';
            } else {
                break;
            }
        }

        e->flags = read_u16_le(rec + 8);
        e->subtype = read_u16_le(rec + 10);
        e->data_size = read_u16_le(rec + 12);
        e->sar_offset = read_u32_le(rec + 14);
        e->archive_idx = archive_idx;
    }

    hal_vfs_free(ix_data);

    archive_volume_t* vol = &s_archives[archive_idx];
    snprintf(vol->name, sizeof(vol->name), "%s", base_name);
    vol->sar_data = sar_data;
    vol->sar_size = sar_size;
    vol->entries = entries;
    vol->entry_count = count;
    vol->loaded = true;

    return true;
}

bool res_manager_init(void)
{
    if (s_initialized) {
        return true;
    }

    memset(s_archives, 0, sizeof(s_archives));
    s_num_archives = 0;

    const char* default_volumes[] = { "RES1", "RES2", "RES3" };
    size_t loaded_count = 0;

    for (size_t i = 0; i < 3; ++i) {
        if (load_archive((uint8_t)i, default_volumes[i])) {
            loaded_count++;
        }
    }

    s_num_archives = 3;
    s_initialized = (loaded_count > 0);
    return s_initialized;
}

void res_manager_shutdown(void)
{
    for (size_t i = 0; i < RES_MAX_ARCHIVES; ++i) {
        archive_volume_t* vol = &s_archives[i];
        if (vol->loaded) {
            if (vol->sar_data != NULL) {
                hal_vfs_free(vol->sar_data);
                vol->sar_data = NULL;
            }
            if (vol->entries != NULL) {
                free(vol->entries);
                vol->entries = NULL;
            }
            vol->loaded = false;
        }
    }

    s_num_archives = 0;
    s_initialized = false;
}

const res_entry_t* res_manager_find(const char* tag)
{
    if (!s_initialized || tag == NULL) {
        return NULL;
    }

    for (size_t a = 0; a < s_num_archives; ++a) {
        const archive_volume_t* vol = &s_archives[a];
        if (!vol->loaded) {
            continue;
        }

        for (size_t i = 0; i < vol->entry_count; ++i) {
            if (strcmp(vol->entries[i].tag, tag) == 0) {
                return &vol->entries[i];
            }
        }
    }

    return NULL;
}

bool res_manager_load_chunk(
    const char* tag, uint8_t* out_buffer, size_t dst_capacity, size_t* out_size, bool decompress)
{
    const res_entry_t* entry = res_manager_find(tag);
    if (entry == NULL) {
        return false;
    }

    const archive_volume_t* vol = &s_archives[entry->archive_idx];
    if (!vol->loaded || vol->sar_data == NULL) {
        return false;
    }

    if ((size_t)entry->sar_offset + (size_t)entry->data_size > vol->sar_size) {
        return false;
    }

    const uint8_t* raw_chunk = vol->sar_data + entry->sar_offset;
    size_t chunk_len = entry->data_size;

    if (decompress && lzw_is_compressed(raw_chunk, chunk_len)) {
        return lzw_decompress(raw_chunk, chunk_len, out_buffer, dst_capacity, out_size);
    }

    if (chunk_len > dst_capacity) {
        return false;
    }

    memcpy(out_buffer, raw_chunk, chunk_len);
    if (out_size != NULL) {
        *out_size = chunk_len;
    }
    return true;
}

bool res_manager_load_file(
    const char* filename, uint8_t* out_buffer, size_t dst_capacity, size_t* out_size, bool decompress)
{
    if (filename == NULL || out_buffer == NULL || dst_capacity == 0) {
        return false;
    }

    size_t file_size = 0;
    uint8_t* file_data = hal_vfs_read_file(filename, &file_size);
    if (file_data == NULL) {
        return false;
    }

    bool success = false;
    if (decompress) {
        if (lzw_is_compressed(file_data, file_size)) {
            success = lzw_decompress(file_data, file_size, out_buffer, dst_capacity, out_size);
        } else if (file_size > 4 && lzw_is_compressed(file_data + 4, file_size - 4)) {
            // Accounts for files like REGFONT which have a 4-byte header before the LZW stream
            success = lzw_decompress(file_data + 4, file_size - 4, out_buffer, dst_capacity, out_size);
        } else {
            if (file_size <= dst_capacity) {
                memcpy(out_buffer, file_data, file_size);
                if (out_size != NULL) {
                    *out_size = file_size;
                }
                success = true;
            }
        }
    } else {
        if (file_size <= dst_capacity) {
            memcpy(out_buffer, file_data, file_size);
            if (out_size != NULL) {
                *out_size = file_size;
            }
            success = true;
        }
    }

    hal_vfs_free(file_data);
    return success;
}
