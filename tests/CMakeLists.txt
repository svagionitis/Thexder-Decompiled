add_executable(test_sar_extractor
    test_sar_extractor.c
)

target_include_directories(test_sar_extractor PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../tools
)

target_link_libraries(test_sar_extractor PRIVATE
    sar_lib
)

apply_compiler_flags(test_sar_extractor)

add_test(
    NAME test_sar_extractor
    COMMAND test_sar_extractor
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

add_executable(test_lzw
    test_lzw.c
)

target_include_directories(test_lzw PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/firehawk
    ${CMAKE_CURRENT_SOURCE_DIR}/../src/platform
)

target_compile_definitions(test_lzw PRIVATE SDL_MAIN_HANDLED)

target_link_libraries(test_lzw PRIVATE
    firehawk_core
    platform_hal
)

apply_compiler_flags(test_lzw)

add_test(
    NAME test_lzw
    COMMAND test_lzw
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
)

set_tests_properties(test_lzw PROPERTIES
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    ENVIRONMENT "PATH=C:/vcpkg/packages/sdl2_x64-windows/debug/bin;C:/vcpkg/packages/sdl2_x64-windows/bin;$ENV{PATH}"
)

add_subdirectory(hal)
