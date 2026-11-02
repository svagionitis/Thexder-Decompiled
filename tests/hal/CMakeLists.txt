# tests/hal/CMakeLists.txt

add_library(hal_mock STATIC
    hal_mock.h
    hal_mock.c
)

target_include_directories(hal_mock PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/src/platform
)

apply_compiler_flags(hal_mock)

macro(add_hal_test TEST_NAME SOURCE_FILE)
    add_executable(${TEST_NAME} ${SOURCE_FILE})
    target_link_libraries(${TEST_NAME} PRIVATE platform_hal hal_mock)
    target_include_directories(${TEST_NAME} PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}/src/platform
    )
    target_compile_definitions(${TEST_NAME} PRIVATE SDL_MAIN_HANDLED)
    apply_compiler_flags(${TEST_NAME})
    add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
    set_tests_properties(${TEST_NAME} PROPERTIES
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        ENVIRONMENT "PATH=C:/vcpkg/packages/sdl2_x64-windows/debug/bin;C:/vcpkg/packages/sdl2_x64-windows/bin;$ENV{PATH}"
    )
endmacro()

add_hal_test(test_hal_video test_hal_video.cpp)
add_hal_test(test_hal_audio test_hal_audio.cpp)
add_hal_test(test_hal_input test_hal_input.cpp)
add_hal_test(test_hal_timer test_hal_timer.cpp)
add_hal_test(test_hal_vfs test_hal_vfs.cpp)
