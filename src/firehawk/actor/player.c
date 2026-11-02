/// @file player.c
/// @brief Player kinematics, dual-mode transformation, crouch clearance, and flight dynamics.
/// @details Ghidra: FUN_1000_0a12 (kinematics) and FUN_1000_0b84 (transformation)

#include "actor/player.h"

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "physics/collision.h"
#include "types.h"
#include "world/tilemap.h"

void player_init(player_state_t* player, vector2d_t spawn_pos)
{
    if (player == NULL) {
        return;
    }

    player->position = spawn_pos;
    player->velocity.x = 0;
    player->velocity.y = 0;
    player->mode = PLAYER_MODE_ROBOT_STAND;
    player->facing = DIR_RIGHT;
    player->morph_timer = 0;
    player->anim_frame = 0;
    player->grounded = 1;
    player->crouching = 0;
    player->energy = 3000;
    player->max_energy = 5000;
    player->shield_timer = 0;
    player->normal_missiles = 20;
    player->homing_missiles = 10;
    player->score = 0;
}

aabb_t player_get_hitbox(const player_state_t* player)
{
    aabb_t box = { 0, 0, 16, 32 };
    if (player == NULL) {
        return box;
    }

    int16_t px = (int16_t)FP12_4_TO_INT(player->position.x);
    int16_t py = (int16_t)FP12_4_TO_INT(player->position.y);

    if (player->crouching != 0 || player->mode == PLAYER_MODE_ROBOT_CROUCH) {
        // Crouched Robot: 16 wide, 14 high (navigates 16px high crawlspaces)
        box.min_x = px;
        box.max_x = (int16_t)(px + 16);
        box.min_y = (int16_t)(py + 18);
        box.max_y = (int16_t)(py + 32);
    } else if (player->mode == PLAYER_MODE_JET_FLY || player->mode == PLAYER_MODE_MORPH_TO_BOT) {
        // Jet: 32 wide, 16 high
        box.min_x = px;
        box.max_x = (int16_t)(px + 32);
        box.min_y = (int16_t)(py + 16);
        box.max_y = (int16_t)(py + 32);
    } else {
        // Upright Robot: 16 wide, 32 high
        box.min_x = px;
        box.max_x = (int16_t)(px + 16);
        box.min_y = py;
        box.max_y = (int16_t)(py + 32);
    }

    return box;
}

bool player_can_transform(const player_state_t* player, const stage_tilemap_t* tilemap)
{
    if (player == NULL || tilemap == NULL) {
        return false;
    }

    int16_t px = (int16_t)FP12_4_TO_INT(player->position.x);
    int16_t py = (int16_t)FP12_4_TO_INT(player->position.y);

    if (player->mode == PLAYER_MODE_JET_FLY) {
        // Transforming to Robot requires 16x32 upright clearance
        aabb_t robot_box = { px, py, (int16_t)(px + 16), (int16_t)(py + 32) };
        return !collision_check_tile_aabb(tilemap, &robot_box, TILE_FLAG_SOLID);
    }

    if (player->mode == PLAYER_MODE_ROBOT_STAND || player->mode == PLAYER_MODE_ROBOT_WALK
        || player->mode == PLAYER_MODE_ROBOT_JUMP || player->mode == PLAYER_MODE_ROBOT_CROUCH) {
        // Cannot transform to Jet if trapped in a 1-tile crawlspace
        if (player->crouching != 0) {
            return false;
        }

        // Transforming to Jet requires 32x16 clearance
        aabb_t jet_box = { px, (int16_t)(py + 16), (int16_t)(px + 32), (int16_t)(py + 32) };
        return !collision_check_tile_aabb(tilemap, &jet_box, TILE_FLAG_SOLID);
    }

    return false;
}

void player_trigger_transform(player_state_t* player, const stage_tilemap_t* tilemap)
{
    if (player == NULL || tilemap == NULL || player->morph_timer > 0) {
        return;
    }

    if (!player_can_transform(player, tilemap)) {
        return;
    }

    if (player->mode == PLAYER_MODE_JET_FLY) {
        player->mode = PLAYER_MODE_MORPH_TO_BOT;
        player->morph_timer = 4;
    } else {
        player->mode = PLAYER_MODE_MORPH_TO_JET;
        player->morph_timer = 4;
        player->grounded = 0;
    }
}

void player_update(player_state_t* player, uint16_t inputs, const stage_tilemap_t* tilemap)
{
    if (player == NULL || tilemap == NULL) {
        return;
    }

    if (player->shield_timer > 0) {
        player->shield_timer--;
    }

    // Handle transformation animation countdown
    if (player->morph_timer > 0) {
        player->morph_timer--;
        if (player->morph_timer == 0) {
            if (player->mode == PLAYER_MODE_MORPH_TO_JET) {
                player->mode = PLAYER_MODE_JET_FLY;
            } else if (player->mode == PLAYER_MODE_MORPH_TO_BOT) {
                player->mode = PLAYER_MODE_ROBOT_STAND;
                player->crouching = 0;
            }
        }
        return;
    }

    // Transformation toggle
    if ((inputs & (uint16_t)INPUT_TRANSFORM) != 0) {
        player_trigger_transform(player, tilemap);
        if (player->morph_timer > 0) {
            return;
        }
    }

    int16_t px = (int16_t)FP12_4_TO_INT(player->position.x);
    int16_t py = (int16_t)FP12_4_TO_INT(player->position.y);

    if (player->mode == PLAYER_MODE_JET_FLY) {
        // Jet flight physics: 8-way momentum
        const int32_t JET_ACCEL = FP12_4_ONE / 2; // 0.5 px/tick^2
        const int32_t JET_MAX_SPEED = FP12_4_ONE * 3; // 3 px/tick

        if ((inputs & (uint16_t)INPUT_LEFT) != 0) {
            player->velocity.x -= JET_ACCEL;
            player->facing = DIR_LEFT;
        } else if ((inputs & (uint16_t)INPUT_RIGHT) != 0) {
            player->velocity.x += JET_ACCEL;
            player->facing = DIR_RIGHT;
        } else {
            // Horizontal inertia damping
            if (player->velocity.x > 0) {
                player->velocity.x -= (FP12_4_ONE / 4);
                if (player->velocity.x < 0) {
                    player->velocity.x = 0;
                }
            } else if (player->velocity.x < 0) {
                player->velocity.x += (FP12_4_ONE / 4);
                if (player->velocity.x > 0) {
                    player->velocity.x = 0;
                }
            }
        }

        if ((inputs & (uint16_t)INPUT_UP) != 0) {
            player->velocity.y -= JET_ACCEL;
        } else if ((inputs & (uint16_t)INPUT_DOWN) != 0) {
            player->velocity.y += JET_ACCEL;
        } else {
            // Vertical inertia damping
            if (player->velocity.y > 0) {
                player->velocity.y -= (FP12_4_ONE / 4);
                if (player->velocity.y < 0) {
                    player->velocity.y = 0;
                }
            } else if (player->velocity.y < 0) {
                player->velocity.y += (FP12_4_ONE / 4);
                if (player->velocity.y > 0) {
                    player->velocity.y = 0;
                }
            }
        }

        // Clamp jet speeds
        if (player->velocity.x > JET_MAX_SPEED)
            player->velocity.x = JET_MAX_SPEED;
        if (player->velocity.x < -JET_MAX_SPEED)
            player->velocity.x = -JET_MAX_SPEED;
        if (player->velocity.y > JET_MAX_SPEED)
            player->velocity.y = JET_MAX_SPEED;
        if (player->velocity.y < -JET_MAX_SPEED)
            player->velocity.y = -JET_MAX_SPEED;

        // Swept X resolution
        aabb_t box = player_get_hitbox(player);
        int32_t next_x = player->position.x + player->velocity.x;
        int16_t curr_px = (int16_t)FP12_4_TO_INT(player->position.x);
        int16_t target_px = (int16_t)FP12_4_TO_INT(next_x);
        int16_t dx = (int16_t)(target_px - curr_px);
        int16_t actual_dx = 0;
        if (collision_swept_move_x(tilemap, &box, dx, &actual_dx)) {
            player->position.x = INT_TO_FP12_4(curr_px + actual_dx);
            player->velocity.x = 0;
        } else {
            player->position.x = next_x;
        }

        // Swept Y resolution
        box = player_get_hitbox(player);
        int32_t next_y = player->position.y + player->velocity.y;
        int16_t curr_py = (int16_t)FP12_4_TO_INT(player->position.y);
        int16_t target_py = (int16_t)FP12_4_TO_INT(next_y);
        int16_t dy = (int16_t)(target_py - curr_py);
        int16_t actual_dy = 0;
        if (collision_swept_move_y(tilemap, &box, dy, &actual_dy)) {
            player->position.y = INT_TO_FP12_4(curr_py + actual_dy);
            player->velocity.y = 0;
        } else {
            player->position.y = next_y;
        }

    } else {
        // Robot mode kinematics: crouch, walking, jumping, gravity
        // Check crouch state
        if ((inputs & (uint16_t)INPUT_DOWN) != 0) {
            player->crouching = 1;
            player->mode = PLAYER_MODE_ROBOT_CROUCH;
        } else if (player->crouching != 0) {
            // Cannot uncrouch if upright space is blocked by ceiling
            aabb_t upright_box = { px, py, (int16_t)(px + 16), (int16_t)(py + 32) };
            if (!collision_check_tile_aabb(tilemap, &upright_box, TILE_FLAG_SOLID)) {
                player->crouching = 0;
                player->mode = PLAYER_MODE_ROBOT_STAND;
            }
        }

        // Horizontal movement: 2 px/tick
        int32_t walk_speed = INT_TO_FP12_4(2);
        if (player->crouching != 0) {
            walk_speed = INT_TO_FP12_4(1); // Crawling is slower
        }

        if ((inputs & (uint16_t)INPUT_LEFT) != 0) {
            player->velocity.x = -walk_speed;
            player->facing = DIR_LEFT;
            if (player->grounded != 0 && player->crouching == 0) {
                player->mode = PLAYER_MODE_ROBOT_WALK;
            }
        } else if ((inputs & (uint16_t)INPUT_RIGHT) != 0) {
            player->velocity.x = walk_speed;
            player->facing = DIR_RIGHT;
            if (player->grounded != 0 && player->crouching == 0) {
                player->mode = PLAYER_MODE_ROBOT_WALK;
            }
        } else {
            player->velocity.x = 0;
            if (player->grounded != 0 && player->crouching == 0) {
                player->mode = PLAYER_MODE_ROBOT_STAND;
            }
        }

        // Jump impulse: initial upward velocity
        if (player->grounded != 0 && (inputs & (uint16_t)INPUT_JUMP) != 0 && player->crouching == 0) {
            player->velocity.y = INT_TO_FP12_4(-4);
            player->grounded = 0;
            player->mode = PLAYER_MODE_ROBOT_JUMP;
        }

        // Parabolic gravity: 0.25 px/tick^2
        if (player->grounded == 0) {
            player->velocity.y += (FP12_4_ONE / 4);
            const int32_t TERMINAL_VEL = INT_TO_FP12_4(4);
            if (player->velocity.y > TERMINAL_VEL) {
                player->velocity.y = TERMINAL_VEL;
            }
            if (player->crouching == 0) {
                player->mode = PLAYER_MODE_ROBOT_JUMP;
            }
        }

        // Swept X resolution
        aabb_t box = player_get_hitbox(player);
        int32_t next_x = player->position.x + player->velocity.x;
        int16_t curr_px = (int16_t)FP12_4_TO_INT(player->position.x);
        int16_t target_px = (int16_t)FP12_4_TO_INT(next_x);
        int16_t dx = (int16_t)(target_px - curr_px);
        int16_t actual_dx = 0;
        bool blocked_x = collision_swept_move_x(tilemap, &box, dx, &actual_dx);
        if (blocked_x) {
            player->position.x = INT_TO_FP12_4(curr_px + actual_dx);
            player->velocity.x = 0;
        } else {
            player->position.x = next_x;
        }

        // Swept Y resolution
        box = player_get_hitbox(player);
        int32_t next_y = player->position.y + player->velocity.y;
        int16_t curr_py = (int16_t)FP12_4_TO_INT(player->position.y);
        int16_t target_py = (int16_t)FP12_4_TO_INT(next_y);
        int16_t dy = (int16_t)(target_py - curr_py);
        int16_t actual_dy = 0;
        bool blocked_y = collision_swept_move_y(tilemap, &box, dy, &actual_dy);

        if (dy >= 0 && blocked_y) {
            // Landed flush on solid floor
            player->position.y = INT_TO_FP12_4(curr_py + actual_dy);
            player->grounded = 1;
            player->velocity.y = 0;
            if (player->crouching == 0) {
                player->mode = (actual_dx != 0) ? PLAYER_MODE_ROBOT_WALK : PLAYER_MODE_ROBOT_STAND;
            }
        } else if (dy < 0 && blocked_y) {
            // Hit ceiling
            player->position.y = INT_TO_FP12_4(curr_py + actual_dy);
            player->velocity.y = 0;
        } else {
            player->position.y = next_y;
            if (dy > 0) {
                player->grounded = 0;
                if (player->crouching == 0) {
                    player->mode = PLAYER_MODE_ROBOT_JUMP;
                }
            }
        }
    }
}

void player_apply_damage(player_state_t* player, uint16_t damage)
{
    if (player == NULL) {
        return;
    }

    // Barrier shield absorbs all damage while active
    if (player->shield_timer > 0) {
        return;
    }

    if (player->energy > damage) {
        player->energy = (energy_t)(player->energy - damage);
    } else {
        player->energy = 0;
        player->mode = PLAYER_MODE_DEAD;
    }
}

void player_recharge_energy(player_state_t* player, uint16_t amount)
{
    if (player == NULL) {
        return;
    }

    uint32_t total = (uint32_t)player->energy + (uint32_t)amount;
    if (total > (uint32_t)player->max_energy) {
        player->energy = (energy_t)player->max_energy;
    } else {
        player->energy = (energy_t)total;
    }
}
