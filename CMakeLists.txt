cmake_minimum_required(VERSION 3.20)
project(ThexderDecompiled
    VERSION 0.1.0
    LANGUAGES C CXX
)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable CTest
include(CTest)
enable_testing()

# Compiler flags module
include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/CompilerFlags.cmake)

# Code quality targets
find_package(Python3 COMPONENTS Interpreter)

if(Python3_FOUND)
    add_custom_target(format
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/scripts/verify_clang_format.py --fix
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Running clang-format -i across all codebase files"
    )

    add_custom_target(check-format
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/scripts/verify_clang_format.py
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Checking code style compliance with clang-format"
    )

    add_custom_target(verify-iwyu
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/scripts/verify_iwyu_cstdint.py
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Verifying IWYU and fixed-width type headers"
    )
endif()

# Subdirectories
add_subdirectory(tools)
add_subdirectory(src/platform)
add_subdirectory(apps/hal_smoke_test)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()
