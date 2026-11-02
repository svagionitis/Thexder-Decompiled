# src/firehawk/CMakeLists.txt

set(FIREHAWK_CORE_SOURCES
    types.h
    resource/lzw.h
    resource/lzw.c
    resource/res_manager.h
    resource/res_manager.c
)

add_library(firehawk_core STATIC
    ${FIREHAWK_CORE_SOURCES}
)

target_include_directories(firehawk_core PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/src/platform
)

target_link_libraries(firehawk_core PUBLIC
    platform_hal
)

apply_compiler_flags(firehawk_core)
