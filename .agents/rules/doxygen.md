# Doxygen Documentation Requirements

Every struct, enum, typedef, method, and free function must be fully documented using Doxygen structural tags before generation. Use the `///` triple-slash comment style.

## Function Template (C & C++)
```c
/// @brief Brief description of what the function does.
/// @details Detailed explanation of the logic, pre-conditions, and post-conditions.
///          For decompiled routines, state the source binary and Ghidra address:
///          Ghidra: GAME.EXE @ 1000:03A4 (player_update_motion)
/// @param[in] param_name Description of input parameter.
/// @param[out] param_name Description of output parameter (if passed by pointer/reference).
/// @return Description of the return value.
/// @note Special design notes, performance characteristics, or 16-bit register mapping.
/// @retval VALUE_NAME Description of specific return values.
```

## Struct / Entity Template
```c
/// @struct player_state_t
/// @brief Encapsulates player kinematics, transform mode, and energy pools.
/// @details Directly models player state from GAME.EXE data segment.
```
