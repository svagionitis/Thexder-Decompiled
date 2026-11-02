---
name: domain-modeling
description: >-
  Use this skill to model domain concepts into strongly-typed C and C++ entities, enforce ubiquitous language, and eliminate Primitive Obsession across all codebase modules.
---

# Domain Modeling & Ubiquitous Language

This skill establishes a type-driven domain modeling workflow across the **Thexder & Firehawk Decompilation repository**, covering decompiled C modules (`src/firehawk`, `src/thexder`) and platform harnesses (`src/platform`).

It actively translates game reverse-engineering findings, player transformation states, physics rules, weapon behaviors, and asset layouts into clearly typed C structs and enums.

---

## 1. Core Principles

1. **Eliminate Primitive Obsession:**
   - Raw untyped integers and byte buffers must never be passed freely across domain or API boundaries.
   - Use strongly-named C enums (`transform_mode_t`, `weapon_type_t`, `direction_t`) and structs (`world_pos_t`, `energy_gauge_t`, `hitbox_t`).
2. **Make Illegal States Unrepresentable:**
   - Enforce state machine transitions. Reject illegal modes (e.g. firing jet thrusters while crouching) at the transition check.
3. **Zero Dynamic Allocation:**
   - Fast paths (frame simulation, collision checks, targeting) must execute with zero dynamic allocations. Operate on pre-allocated tables and stack structs.
4. **Binary Layout Fidelity:**
   - Match binary data on disk (`SAVEGM.DAT`, `RES*.IX`, `SS*` maps) using explicitly sized integer members, verified against Ghidra structures.

---

## 2. Ubiquitous Language & Canonical Domain Entities

### Thexder / Firehawk Domain Entities
| Domain Term | Canonical C Type | Allowed Values / Range | Purpose |
| :--- | :--- | :--- | :--- |
| `TransformMode` | `transform_mode_t` | `MODE_ROBOT_STAND`, `MODE_ROBOT_WALK`, `MODE_ROBOT_CROUCH`, `MODE_JET_FLY`, `MODE_TRANSFORM_*` | Governs kinematics, collision hitbox, and sprite set |
| `WorldPos` | `world_pos_t` | `int16_t x`, `int16_t y` | Sub-tile world coordinate of player or entity |
| `Velocity` | `velocity_t` | `int8_t vx`, `int8_t vy` (or 8.8 fixed-point) | Instantaneous movement delta per frame tick |
| `EnergyPoints` | `energy_t` | `uint16_t value` (0 .. 1000) | Health and weapon power reservoir |
| `ShieldState` | `shield_state_t` | `bool active`, `uint8_t timer` | Energy barrier absorbing damage |
| `TileCoord` | `tile_coord_t` | `uint16_t col`, `uint16_t row` | Grid cell in the current stage level map |
| `Hitbox` | `hitbox_t` | `int16_t min_x, min_y, max_x, max_y` | Axis-aligned bounding box for swept collision |

---

## 3. Workflow for Decompiled Modules

```
+-------------------------------------------------------------------------------+
|                       DECOMPILATION DOMAIN MODELING FLOW                      |
|                                                                               |
|   1. Ghidra Analysis: Identify global data structures, arrays, and variables  |
|         │                                                                     |
|         ▼                                                                     |
|   2. Model C Struct: Define explicit-width struct in .h with Doxygen notes    |
|         │                                                                     |
|         ▼                                                                     |
|   3. Verify Size & Offsets: Ensure sizeof(struct) matches DOS segment layout  |
|         │                                                                     |
|         ▼                                                                     |
|   4. Encapsulate Access: Provide clean manipulation functions                 |
+-------------------------------------------------------------------------------+
```
