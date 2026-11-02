#include "hal_vfs.h"

#include <cstddef>
#include <cstdint>
#include <stdlib.h>
#include <string.h>

#if defined(_WIN32)
#include <windows.h>
#else
#include <dirent.h>
#include <sys/stat.h>
#endif

namespace {

char s_asset_root[HAL_MAX_PATH_LEN] = "assets/firehawk";

char to_lower_ascii(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return (char)(c + ('a' - 'A'));
    }
    return c;
}

bool string_equals_ignore_case(const char* a, const char* b)
{
    if (a == NULL || b == NULL) {
        return false;
    }
    while (*a && *b) {
        if (to_lower_ascii(*a) != to_lower_ascii(*b)) {
            return false;
        }
        a++;
        b++;
    }
    return (*a == '\0' && *b == '\0');
}

void normalize_separators(char* path)
{
    if (path == NULL) {
        return;
    }
    for (char* p = path; *p != '\0'; ++p) {
        if (*p == '\\') {
            *p = '/';
        }
    }
}

bool contains_traversal(const char* path)
{
    if (path == NULL) {
        return true;
    }
    if (strstr(path, "..") != NULL) {
        return true;
    }
    return false;
}

bool file_exists_on_disk(const char* path)
{
    FILE* f = fopen(path, "rb");
    if (f != NULL) {
        fclose(f);
        return true;
    }
    return false;
}

#if defined(_WIN32)
bool scan_directory_case_insensitive(
    const char* dir_path, const char* target_filename, char* out_found_filename, size_t max_len)
{
    char search_pattern[HAL_MAX_PATH_LEN];
    snprintf(search_pattern, sizeof(search_pattern), "%s/*", dir_path);

    WIN32_FIND_DATAA find_data;
    HANDLE h_find = FindFirstFileA(search_pattern, &find_data);
    if (h_find == INVALID_HANDLE_VALUE) {
        return false;
    }

    bool found = false;
    do {
        if (!(find_data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
            if (string_equals_ignore_case(find_data.cFileName, target_filename)) {
                strncpy(out_found_filename, find_data.cFileName, max_len - 1);
                out_found_filename[max_len - 1] = '\0';
                found = true;
                break;
            }
        }
    } while (FindNextFileA(h_find, &find_data));

    FindClose(h_find);
    return found;
}
#else
bool scan_directory_case_insensitive(
    const char* dir_path, const char* target_filename, char* out_found_filename, size_t max_len)
{
    DIR* d = opendir(dir_path);
    if (d == NULL) {
        return false;
    }

    bool found = false;
    struct dirent* entry = NULL;
    while ((entry = readdir(d)) != NULL) {
        if (entry->d_type != DT_DIR) {
            if (string_equals_ignore_case(entry->d_name, target_filename)) {
                strncpy(out_found_filename, entry->d_name, max_len - 1);
                out_found_filename[max_len - 1] = '\0';
                found = true;
                break;
            }
        }
    }

    closedir(d);
    return found;
}
#endif

} // namespace

void hal_vfs_set_asset_root(const char* root_dir)
{
    if (root_dir == NULL || *root_dir == '\0') {
        return;
    }
    strncpy(s_asset_root, root_dir, sizeof(s_asset_root) - 1);
    s_asset_root[sizeof(s_asset_root) - 1] = '\0';
    normalize_separators(s_asset_root);
}

const char* hal_vfs_get_asset_root(void)
{
    return s_asset_root;
}

bool hal_vfs_resolve_path(const char* dos_path, char* out_resolved_path, size_t max_len)
{
    if (dos_path == NULL || out_resolved_path == NULL || max_len == 0) {
        return false;
    }

    if (contains_traversal(dos_path)) {
        return false;
    }

    char clean_path[HAL_MAX_PATH_LEN];
    strncpy(clean_path, dos_path, sizeof(clean_path) - 1);
    clean_path[sizeof(clean_path) - 1] = '\0';
    normalize_separators(clean_path);

    // 1. Direct path check
    if (file_exists_on_disk(clean_path)) {
        strncpy(out_resolved_path, clean_path, max_len - 1);
        out_resolved_path[max_len - 1] = '\0';
        return true;
    }

    // 2. Asset root combined path check
    char combined[HAL_MAX_PATH_LEN];
    snprintf(combined, sizeof(combined), "%s/%s", s_asset_root, clean_path);
    if (file_exists_on_disk(combined)) {
        strncpy(out_resolved_path, combined, max_len - 1);
        out_resolved_path[max_len - 1] = '\0';
        return true;
    }

    // 3. Case-insensitive search inside s_asset_root
    // Extract basename if clean_path is a single file name
    const char* last_slash = strrchr(clean_path, '/');
    const char* filename = last_slash ? (last_slash + 1) : clean_path;

    char found_name[HAL_MAX_PATH_LEN];
    if (scan_directory_case_insensitive(s_asset_root, filename, found_name, sizeof(found_name))) {
        snprintf(out_resolved_path, max_len, "%s/%s", s_asset_root, found_name);
        return true;
    }

    return false;
}

bool hal_vfs_file_exists(const char* dos_path)
{
    char resolved[HAL_MAX_PATH_LEN];
    return hal_vfs_resolve_path(dos_path, resolved, sizeof(resolved));
}

FILE* hal_vfs_open(const char* dos_path, const char* mode)
{
    char resolved[HAL_MAX_PATH_LEN];
    if (!hal_vfs_resolve_path(dos_path, resolved, sizeof(resolved))) {
        return NULL;
    }
    return fopen(resolved, mode);
}

uint8_t* hal_vfs_read_file(const char* dos_path, size_t* out_size)
{
    if (out_size != NULL) {
        *out_size = 0;
    }

    FILE* f = hal_vfs_open(dos_path, "rb");
    if (f == NULL) {
        return NULL;
    }

    if (fseek(f, 0, SEEK_END) != 0) {
        fclose(f);
        return NULL;
    }

    long len = ftell(f);
    if (len < 0) {
        fclose(f);
        return NULL;
    }

    if (fseek(f, 0, SEEK_SET) != 0) {
        fclose(f);
        return NULL;
    }

    size_t size = (size_t)len;
    uint8_t* buffer = (uint8_t*)malloc(size > 0 ? size : 1);
    if (buffer == NULL) {
        fclose(f);
        return NULL;
    }

    size_t read_bytes = fread(buffer, 1, size, f);
    fclose(f);

    if (read_bytes != size) {
        free(buffer);
        return NULL;
    }

    if (out_size != NULL) {
        *out_size = size;
    }
    return buffer;
}

void hal_vfs_free(void* buffer)
{
    if (buffer != NULL) {
        free(buffer);
    }
}
