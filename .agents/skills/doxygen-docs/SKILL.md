---
name: doxygen-docs
description: >-
  Use this skill when documenting C and C++ code, structs, methods, or free functions with Doxygen templates across all codebase libraries.
---

# Doxygen Documentation Standards

Every struct, enum, typedef, and function must be fully documented using Doxygen structural tags before generation. Use the `///` triple-slash comment style.

---

## 1. Decompiled C Function Template

```c
/// @brief Brief description of function responsibility.
/// @details Detailed explanation of the logic, algorithms, pre-conditions, and post-conditions.
///          For decompiled functions, explicitly state the original binary and address:
///          Ghidra: GAME.EXE @ 1000:03A4 (player_update_motion)
/// @param[in] param_name Description of input parameter.
/// @param[out] param_name Description of output parameter (passed by pointer).
/// @return Description of return value.
/// @retval 0 Success.
/// @retval -1 Error or invalid state.
/// @note 16-bit register mappings or DOS interrupt interactions.
```

---

## 2. Struct Template

```c
/// @struct player_state_t
/// @brief Encapsulates player kinematics, transform mode, and energy pools.
/// @details Directly models player state from GAME.EXE data segment.
///          Original offset: DGROUP:0280.
```

---

## 3. Core Principles

1. **Relative Paths Only:** Never reference absolute host paths (`C:\Users\...`).
2. **Include Ghidra Address:** Always provide Ghidra segment:offset or symbol name for decompiled routines.
3. **Keep Function Names Short:** Less than 30 characters.
