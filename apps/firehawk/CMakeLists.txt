# apps/firehawk/CMakeLists.txt

add_executable(firehawk main.cpp)

target_compile_definitions(firehawk PRIVATE SDL_MAIN_HANDLED)
target_link_libraries(firehawk PRIVATE firehawk_core platform_hal)
target_include_directories(firehawk PRIVATE
    ${CMAKE_SOURCE_DIR}/src/firehawk
    ${CMAKE_SOURCE_DIR}/src/platform
)

apply_compiler_flags(firehawk)
