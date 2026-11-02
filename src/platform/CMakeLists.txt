# src/platform/CMakeLists.txt

# Try finding SDL2 via config mode or module mode
find_package(SDL2 CONFIG QUIET)
if(NOT TARGET SDL2::SDL2)
    find_package(SDL2 QUIET)
endif()

# Fallback: check standard vcpkg location on Windows
if(NOT TARGET SDL2::SDL2 AND WIN32 AND EXISTS "C:/vcpkg/packages/sdl2_x64-windows/share/sdl2/SDL2Config.cmake")
    list(APPEND CMAKE_PREFIX_PATH "C:/vcpkg/packages/sdl2_x64-windows")
    find_package(SDL2 CONFIG REQUIRED)
endif()

set(PLATFORM_SOURCES
    hal.h
    hal.cpp
    hal_sdl_raii.hpp
    video/hal_video.h
    video/hal_video.cpp
    video/hal_framebuffer.h
    video/hal_framebuffer.cpp
    video/hal_palette.h
    video/hal_palette.cpp
    video/hal_scaler.h
    video/hal_scaler.cpp
    audio/hal_audio.h
    audio/hal_audio.cpp
    audio/hal_opl2.h
    audio/hal_opl2.cpp
    audio/hal_mt32.h
    audio/hal_mt32.cpp
    audio/hal_tandy_sound.h
    audio/hal_tandy_sound.cpp
    audio/hal_audio_mixer.h
    audio/hal_audio_mixer.cpp
    input/hal_input.h
    input/hal_input.cpp
    input/hal_scancode.h
    input/hal_scancode.cpp
    input/hal_gamepad.h
    input/hal_gamepad.cpp
    system/hal_timer.h
    system/hal_timer.cpp
    system/hal_vfs.h
    system/hal_vfs.cpp
    system/hal_savegame.h
    system/hal_savegame.cpp
)

add_library(platform_hal STATIC ${PLATFORM_SOURCES})

target_include_directories(platform_hal PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/video
    ${CMAKE_CURRENT_SOURCE_DIR}/audio
    ${CMAKE_CURRENT_SOURCE_DIR}/input
    ${CMAKE_CURRENT_SOURCE_DIR}/system
)

if(TARGET SDL2::SDL2)
    target_link_libraries(platform_hal PUBLIC SDL2::SDL2)
else()
    target_link_libraries(platform_hal PUBLIC ${SDL2_LIBRARIES})
    target_include_directories(platform_hal PUBLIC ${SDL2_INCLUDE_DIRS})
endif()

apply_compiler_flags(platform_hal)

if(WIN32)
    set(SDL2_DLL_CANDIDATES
        "C:/vcpkg/packages/sdl2_x64-windows/bin/SDL2.dll"
        "C:/vcpkg/packages/sdl2_x64-windows/debug/bin/SDL2d.dll"
    )
    foreach(DLL_PATH ${SDL2_DLL_CANDIDATES})
        if(EXISTS ${DLL_PATH})
            file(COPY ${DLL_PATH} DESTINATION ${CMAKE_BINARY_DIR}/tests/hal)
            file(COPY ${DLL_PATH} DESTINATION ${CMAKE_BINARY_DIR}/apps/hal_smoke_test)
        endif()
    endforeach()
endif()

