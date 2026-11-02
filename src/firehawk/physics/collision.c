/// @file collision.c
/// @brief Swept AABB collision detection, tile intersection, and raycasting.
/// @details Ghidra: FUN_1000_1890 (tile swept collision) and FUN_1000_1a04 (hitbox checks)

#include "physics/collision.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#include "types.h"
#include "world/tilemap.h"

bool collision_aabb_intersects(const aabb_t* a, const aabb_t* b)
{
    if (a == NULL || b == NULL) {
        return false;
    }
    return (a->min_x < b->max_x) && (a->max_x > b->min_x) && (a->min_y < b->max_y) && (a->max_y > b->min_y);
}

bool collision_check_tile_aabb(const stage_tilemap_t* tilemap, const aabb_t* box, uint16_t mask)
{
    if (tilemap == NULL || box == NULL) {
        return true;
    }

    int16_t t_min_x = (int16_t)(box->min_x >> TILE_SHIFT);
    int16_t t_max_x = (int16_t)((box->max_x - 1) >> TILE_SHIFT);
    int16_t t_min_y = (int16_t)(box->min_y >> TILE_SHIFT);
    int16_t t_max_y = (int16_t)((box->max_y - 1) >> TILE_SHIFT);

    for (int16_t ty = t_min_y; ty <= t_max_y; ++ty) {
        for (int16_t tx = t_min_x; tx <= t_max_x; ++tx) {
            uint16_t flags = tilemap_get_flags(tilemap, tx, ty);
            if ((flags & mask) != 0) {
                return true;
            }
        }
    }

    return false;
}

bool collision_swept_move_x(const stage_tilemap_t* tilemap, aabb_t* box, int16_t dx, int16_t* out_actual_dx)
{
    if (tilemap == NULL || box == NULL) {
        if (out_actual_dx != NULL) {
            *out_actual_dx = 0;
        }
        return true;
    }

    if (dx == 0) {
        if (out_actual_dx != NULL) {
            *out_actual_dx = 0;
        }
        return false;
    }

    int16_t step = (dx > 0) ? 1 : -1;
    int16_t remaining = (int16_t)abs(dx);
    int16_t moved = 0;
    bool collided = false;

    while (remaining > 0) {
        aabb_t next_box = *box;
        next_box.min_x = (int16_t)(next_box.min_x + step);
        next_box.max_x = (int16_t)(next_box.max_x + step);

        if (collision_check_tile_aabb(tilemap, &next_box, TILE_FLAG_SOLID)) {
            collided = true;
            break;
        }

        *box = next_box;
        moved = (int16_t)(moved + step);
        remaining = (int16_t)(remaining - 1);
    }

    if (out_actual_dx != NULL) {
        *out_actual_dx = moved;
    }

    return collided;
}

bool collision_swept_move_y(const stage_tilemap_t* tilemap, aabb_t* box, int16_t dy, int16_t* out_actual_dy)
{
    if (tilemap == NULL || box == NULL) {
        if (out_actual_dy != NULL) {
            *out_actual_dy = 0;
        }
        return true;
    }

    if (dy == 0) {
        if (out_actual_dy != NULL) {
            *out_actual_dy = 0;
        }
        return false;
    }

    int16_t step = (dy > 0) ? 1 : -1;
    int16_t remaining = (int16_t)abs(dy);
    int16_t moved = 0;
    bool collided = false;

    while (remaining > 0) {
        aabb_t next_box = *box;
        next_box.min_y = (int16_t)(next_box.min_y + step);
        next_box.max_y = (int16_t)(next_box.max_y + step);

        if (collision_check_tile_aabb(tilemap, &next_box, TILE_FLAG_SOLID)) {
            collided = true;
            break;
        }

        *box = next_box;
        moved = (int16_t)(moved + step);
        remaining = (int16_t)(remaining - 1);
    }

    if (out_actual_dy != NULL) {
        *out_actual_dy = moved;
    }

    return collided;
}

bool collision_line_obstructed(
    const stage_tilemap_t* tilemap, int16_t x0, int16_t y0, int16_t x1, int16_t y1, uint16_t mask)
{
    if (tilemap == NULL) {
        return true;
    }

    int16_t dx = (int16_t)abs(x1 - x0);
    int16_t dy = (int16_t)abs(y1 - y0);
    int16_t sx = (x0 < x1) ? 1 : -1;
    int16_t sy = (y0 < y1) ? 1 : -1;
    int16_t err = (int16_t)(dx - dy);

    int16_t curr_x = x0;
    int16_t curr_y = y0;

    while (true) {
        int16_t tx = (int16_t)(curr_x >> TILE_SHIFT);
        int16_t ty = (int16_t)(curr_y >> TILE_SHIFT);

        if ((tilemap_get_flags(tilemap, tx, ty) & mask) != 0) {
            return true; // Hit a blocking tile
        }

        if (curr_x == x1 && curr_y == y1) {
            break;
        }

        int16_t e2 = (int16_t)(2 * err);
        if (e2 > -dy) {
            err = (int16_t)(err - dy);
            curr_x = (int16_t)(curr_x + sx);
        }
        if (e2 < dx) {
            err = (int16_t)(err + dx);
            curr_y = (int16_t)(curr_y + sy);
        }
    }

    return false;
}
