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

# Macro to add firehawk core unit tests
macro(add_firehawk_test test_name)
    add_executable(${test_name}
        ${test_name}.c
    )

    target_include_directories(${test_name} PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../src/firehawk
        ${CMAKE_CURRENT_SOURCE_DIR}/../src/platform
    )

    target_compile_definitions(${test_name} PRIVATE SDL_MAIN_HANDLED)

    target_link_libraries(${test_name} PRIVATE
        firehawk_core
        platform_hal
    )

    apply_compiler_flags(${test_name})

    add_test(
        NAME ${test_name}
        COMMAND ${test_name}
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    )

    set_tests_properties(${test_name} PROPERTIES
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        ENVIRONMENT "PATH=C:/vcpkg/packages/sdl2_x64-windows/debug/bin;C:/vcpkg/packages/sdl2_x64-windows/bin;$ENV{PATH}"
    )
endmacro()

add_firehawk_test(test_lzw)
add_firehawk_test(test_stage_loader)
add_firehawk_test(test_kinematics)
add_firehawk_test(test_weapons)
add_firehawk_test(test_entities)
add_firehawk_test(test_savegame)

add_subdirectory(hal)
