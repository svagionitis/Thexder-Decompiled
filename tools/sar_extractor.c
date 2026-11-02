/// @file sar_extractor.c
/// @brief Sierra Archive Resource (.SAR / .IX) parser and extractor.

#include "sar_extractor.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(_WIN32)
#include <direct.h>
#define MAKE_DIR(d) _mkdir(d)
#else
#include <sys/stat.h>
#define MAKE_DIR(d) mkdir(d, 0755)
#endif

static void make_dir_recursive(const char* dir)
{
    char tmp[512] = { 0 };
    strncpy(tmp, dir, sizeof(tmp) - 1);
    size_t len = strlen(tmp);

    for (size_t i = 1; i < len; ++i) {
        if (tmp[i] == '/' || tmp[i] == '\\') {
            tmp[i] = '\0';
            MAKE_DIR(tmp);
            tmp[i] = '/';
        }
    }
    MAKE_DIR(tmp);
}

#define SAR_RECORD_SIZE 18
#define SAR_MAGIC_LEN 5

static inline uint16_t read_u16_le(const uint8_t* p)
{
    return (uint16_t)(p[0] | ((uint16_t)p[1] << 8));
}

static inline uint32_t read_u32_le(const uint8_t* p)
{
    return (uint32_t)(p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24));
}

static uint8_t* read_file_bytes(const char* path, size_t* out_size)
{
    FILE* fp = fopen(path, "rb");
    if (!fp) {
        return NULL;
    }

    if (fseek(fp, 0, SEEK_END) != 0) {
        fclose(fp);
        return NULL;
    }

    long len = ftell(fp);
    if (len < 0) {
        fclose(fp);
        return NULL;
    }

    if (fseek(fp, 0, SEEK_SET) != 0) {
        fclose(fp);
        return NULL;
    }

    uint8_t* buffer = (uint8_t*)malloc((size_t)len);
    if (!buffer) {
        fclose(fp);
        return NULL;
    }

    size_t read_len = fread(buffer, 1, (size_t)len, fp);
    fclose(fp);

    if (read_len != (size_t)len) {
        free(buffer);
        return NULL;
    }

    *out_size = (size_t)len;
    return buffer;
}

bool sar_load(const char* ix_path, const char* sar_path, sar_archive_t* out_archive)
{
    if (!ix_path || !sar_path || !out_archive) {
        return false;
    }

    memset(out_archive, 0, sizeof(*out_archive));

    size_t ix_size = 0;
    uint8_t* ix_data = read_file_bytes(ix_path, &ix_size);
    if (!ix_data) {
        fprintf(stderr, "sar_extractor: Failed to open index file: %s\n", ix_path);
        return false;
    }

    if (ix_size == 0 || (ix_size % SAR_RECORD_SIZE) != 0) {
        fprintf(stderr, "sar_extractor: Invalid index file size (%zu bytes, not multiple of %d): %s\n", ix_size,
            SAR_RECORD_SIZE, ix_path);
        free(ix_data);
        return false;
    }

    size_t sar_size = 0;
    uint8_t* sar_data = read_file_bytes(sar_path, &sar_size);
    if (!sar_data) {
        fprintf(stderr, "sar_extractor: Failed to open volume file: %s\n", sar_path);
        free(ix_data);
        return false;
    }

    // Verify $$$$$ magic signature at start of SAR
    if (sar_size < SAR_MAGIC_LEN || memcmp(sar_data, "$$$$$", SAR_MAGIC_LEN) != 0) {
        fprintf(stderr, "sar_extractor: Missing '$$$$$' signature in: %s\n", sar_path);
        free(ix_data);
        free(sar_data);
        return false;
    }

    size_t entry_count = ix_size / SAR_RECORD_SIZE;
    sar_entry_t* entries = (sar_entry_t*)calloc(entry_count, sizeof(sar_entry_t));
    if (!entries) {
        free(ix_data);
        free(sar_data);
        return false;
    }

    for (size_t i = 0; i < entry_count; ++i) {
        const uint8_t* rec = ix_data + (i * SAR_RECORD_SIZE);
        sar_entry_t* e = &entries[i];

        // Copy 8-byte tag and trim trailing whitespace
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

        if ((size_t)e->sar_offset + (size_t)e->data_size > sar_size) {
            fprintf(stderr,
                "sar_extractor: Warning: Entry [%s] exceeds archive bounds (offset %u, size %u, file size %zu)\n",
                e->tag, e->sar_offset, e->data_size, sar_size);
        }
    }

    free(ix_data);

    out_archive->entries = entries;
    out_archive->entry_count = entry_count;
    out_archive->sar_data = sar_data;
    out_archive->sar_size = sar_size;

    return true;
}

void sar_free(sar_archive_t* archive)
{
    if (!archive) {
        return;
    }

    if (archive->entries) {
        free(archive->entries);
        archive->entries = NULL;
    }

    if (archive->sar_data) {
        free(archive->sar_data);
        archive->sar_data = NULL;
    }

    archive->entry_count = 0;
    archive->sar_size = 0;
}

const sar_entry_t* sar_find_entry(const sar_archive_t* archive, const char* tag)
{
    if (!archive || !archive->entries || !tag) {
        return NULL;
    }

    for (size_t i = 0; i < archive->entry_count; ++i) {
        if (strcmp(archive->entries[i].tag, tag) == 0) {
            return &archive->entries[i];
        }
    }

    return NULL;
}

bool sar_extract_all(const sar_archive_t* archive, const char* output_dir)
{
    if (!archive || !archive->entries || !archive->sar_data || !output_dir) {
        return false;
    }

    make_dir_recursive(output_dir);

    bool all_ok = true;
    for (size_t i = 0; i < archive->entry_count; ++i) {
        const sar_entry_t* e = &archive->entries[i];
        if ((size_t)e->sar_offset + (size_t)e->data_size > archive->sar_size) {
            all_ok = false;
            continue;
        }

        char out_path[512] = { 0 };
        snprintf(out_path, sizeof(out_path), "%s/%s.bin", output_dir, e->tag);

        FILE* fp = fopen(out_path, "wb");
        if (!fp) {
            fprintf(stderr, "sar_extractor: Could not create output file: %s\n", out_path);
            all_ok = false;
            continue;
        }

        if (e->data_size > 0) {
            const uint8_t* payload = archive->sar_data + e->sar_offset;
            size_t written = fwrite(payload, 1, e->data_size, fp);
            if (written != e->data_size) {
                fprintf(stderr, "sar_extractor: Short write for %s\n", out_path);
                all_ok = false;
            }
        }

        fclose(fp);
    }

    return all_ok;
}
