# apps/hal_smoke_test/CMakeLists.txt

add_executable(hal_smoke_test main.cpp)

target_compile_definitions(hal_smoke_test PRIVATE SDL_MAIN_HANDLED)
target_link_libraries(hal_smoke_test PRIVATE platform_hal)
target_include_directories(hal_smoke_test PRIVATE
    ${CMAKE_SOURCE_DIR}/src/platform
)

apply_compiler_flags(hal_smoke_test)
