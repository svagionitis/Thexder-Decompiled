#pragma once

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Standard IBM PC Keyboard Set 1 Make Scancodes
#define HAL_SCANCODE_ESC 0x01
#define HAL_SCANCODE_1 0x02
#define HAL_SCANCODE_2 0x03
#define HAL_SCANCODE_3 0x04
#define HAL_SCANCODE_4 0x05
#define HAL_SCANCODE_5 0x06
#define HAL_SCANCODE_6 0x07
#define HAL_SCANCODE_7 0x08
#define HAL_SCANCODE_8 0x09
#define HAL_SCANCODE_9 0x0A
#define HAL_SCANCODE_0 0x0B
#define HAL_SCANCODE_TAB 0x0F
#define HAL_SCANCODE_Q 0x10
#define HAL_SCANCODE_W 0x11
#define HAL_SCANCODE_E 0x12
#define HAL_SCANCODE_R 0x13
#define HAL_SCANCODE_T 0x14
#define HAL_SCANCODE_Y 0x15
#define HAL_SCANCODE_U 0x16
#define HAL_SCANCODE_I 0x17
#define HAL_SCANCODE_O 0x18
#define HAL_SCANCODE_P 0x19
#define HAL_SCANCODE_ENTER 0x1C
#define HAL_SCANCODE_LCTRL 0x1D
#define HAL_SCANCODE_A 0x1E
#define HAL_SCANCODE_S 0x1F
#define HAL_SCANCODE_D 0x20
#define HAL_SCANCODE_F 0x21
#define HAL_SCANCODE_G 0x22
#define HAL_SCANCODE_H 0x23
#define HAL_SCANCODE_J 0x24
#define HAL_SCANCODE_K 0x25
#define HAL_SCANCODE_L 0x26
#define HAL_SCANCODE_LSHIFT 0x2A
#define HAL_SCANCODE_Z 0x2C
#define HAL_SCANCODE_X 0x2D
#define HAL_SCANCODE_C 0x2E
#define HAL_SCANCODE_V 0x2F
#define HAL_SCANCODE_B 0x30
#define HAL_SCANCODE_N 0x31
#define HAL_SCANCODE_M 0x32
#define HAL_SCANCODE_RSHIFT 0x36
#define HAL_SCANCODE_LALT 0x38
#define HAL_SCANCODE_SPACE 0x39
#define HAL_SCANCODE_F1 0x3B
#define HAL_SCANCODE_F2 0x3C
#define HAL_SCANCODE_F3 0x3D
#define HAL_SCANCODE_F4 0x3E
#define HAL_SCANCODE_F5 0x3F
#define HAL_SCANCODE_F6 0x40
#define HAL_SCANCODE_F7 0x41
#define HAL_SCANCODE_F8 0x42
#define HAL_SCANCODE_F9 0x43
#define HAL_SCANCODE_F10 0x44
#define HAL_SCANCODE_HOME 0x47
#define HAL_SCANCODE_UP 0x48
#define HAL_SCANCODE_PAGEUP 0x49
#define HAL_SCANCODE_LEFT 0x4B
#define HAL_SCANCODE_CENTER 0x4C
#define HAL_SCANCODE_RIGHT 0x4D
#define HAL_SCANCODE_END 0x4F
#define HAL_SCANCODE_DOWN 0x50
#define HAL_SCANCODE_PAGEDOWN 0x51

/// @brief Joystick button bitflags (matching JOYSTICK.DRV / BIOS INT 15h)
#define HAL_JOY_BUTTON_1 0x01 ///< Laser / Fire A
#define HAL_JOY_BUTTON_2 0x02 ///< Missiles / Fire B
#define HAL_JOY_BUTTON_3 0x04 ///< Barrier Shield
#define HAL_JOY_BUTTON_4 0x08 ///< Transform Robot <-> Jet

/// @brief Sierra Keyboard & Joystick Driver Dispatch Table
typedef struct hal_input_driver {
    /// @brief Slot 0: Initializes keyboard hooks and controller detection
    bool (*init)(void);

    /// @brief Slot 1: Restores original keyboard interrupt handlers
    void (*shutdown)(void);

    /// @brief Slot 2: Pumps hardware event queue
    void (*poll_events)(void);

    /// @brief Queries whether a specific DOS make scancode is currently depressed
    bool (*is_key_down)(uint8_t dos_scancode);

    /// @brief Pops next queued raw scancode (Make or Break) from BIOS keyboard buffer
    bool (*get_next_scancode)(uint8_t* out_scancode, bool* out_is_pressed);

    /// @brief Slot 3: Flushes hardware keyboard buffer
    void (*clear_key_buffer)(void);

    /// @brief Reads joystick axes (-32768..32767) and button bitflags
    void (*get_joystick_state)(int16_t* out_x, int16_t* out_y, uint8_t* out_buttons);
} hal_input_driver_t;

/// @brief Global input subsystem initialization
bool hal_input_init(void);

/// @brief Global input subsystem shutdown
void hal_input_shutdown(void);

/// @brief Retrieves the active input driver dispatch interface
const hal_input_driver_t* hal_input_get_driver(void);

#ifdef __cplusplus
}
#endif
