# src/firehawk/CMakeLists.txt

set(FIREHAWK_CORE_SOURCES
    types.h
    game_main.h
    game_main.c
    game_loop.h
    game_loop.c
    resource/lzw.h
    resource/lzw.c
    resource/res_manager.h
    resource/res_manager.c
    world/tilemap.h
    world/tilemap.c
    world/stage_loader.h
    world/stage_loader.c
    physics/collision.h
    physics/collision.c
    actor/player.h
    actor/player.c
    actor/weapons.h
    actor/weapons.c
    actor/entities.h
    actor/entities.c
    actor/enemy_ai.h
    actor/enemy_ai.c
    render/font.h
    render/font.c
    render/renderer.h
    render/renderer.c
    audio/audio_events.h
    audio/audio_events.c
    ui/hud.h
    ui/hud.c
    ui/savegame.h
    ui/savegame.c
    decomp/game_decomp.h
    decomp/game_decomp.c
)

find_package(SDL2 CONFIG QUIET)
if(NOT TARGET SDL2::SDL2)
    find_package(SDL2 QUIET)
endif()
if(NOT TARGET SDL2::SDL2 AND WIN32 AND EXISTS "C:/vcpkg/packages/sdl2_x64-windows/share/sdl2/SDL2Config.cmake")
    list(APPEND CMAKE_PREFIX_PATH "C:/vcpkg/packages/sdl2_x64-windows")
    find_package(SDL2 CONFIG REQUIRED)
endif()

add_library(firehawk_core STATIC
    ${FIREHAWK_CORE_SOURCES}
)

target_include_directories(firehawk_core PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/src/platform
)

target_link_libraries(firehawk_core PUBLIC
    SDL2::SDL2
    platform_hal
)

apply_compiler_flags(firehawk_core)
