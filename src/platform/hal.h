#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "audio/hal_audio.h"
#include "input/hal_input.h"
#include "system/hal_savegame.h"
#include "system/hal_timer.h"
#include "system/hal_vfs.h"
#include "video/hal_video.h"

#ifdef __cplusplus
extern "C" {
#endif

/// @brief Unified Hardware Abstraction Layer interface
typedef struct hal_platform {
    const hal_video_driver_t* video;
    const hal_audio_driver_t* audio;
    const hal_input_driver_t* input;
} hal_platform_t;

/// @brief Initializes complete platform harness (Video, Audio, Input, Timer, VFS)
/// @param[in] window_title Main window caption
/// @param[in] initial_scale Integer scaling factor (e.g. 3 for 960x720)
/// @return true if initialized successfully, false otherwise
bool hal_init(const char* window_title, uint16_t initial_scale);

/// @brief Shuts down all platform subsystems and releases all resources
void hal_shutdown(void);

/// @brief Pumps OS event loop and updates input state
/// @return true to continue running, false if application exit was requested
bool hal_pump_events(void);

/// @brief Delays execution until next 60Hz frame simulation deadline
void hal_delay_frame(void);

/// @brief Returns the active unified HAL platform interface
const hal_platform_t* hal_get(void);

#ifdef __cplusplus
}
#endif
