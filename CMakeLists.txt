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

    # Git pre-commit hook setup for clang-format
    set(GIT_HOOKS_DIR "")
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/.git")
        if(IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/.git")
            set(GIT_HOOKS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/.git/hooks")
        else()
            file(READ "${CMAKE_CURRENT_SOURCE_DIR}/.git" GIT_FILE_CONTENT)
            string(REGEX MATCH "gitdir: ([^\r\n]+)" _MATCH "${GIT_FILE_CONTENT}")
            if(CMAKE_MATCH_1)
                get_filename_component(GIT_COMMON_DIR "${CMAKE_MATCH_1}" ABSOLUTE BASE_DIR "${CMAKE_CURRENT_SOURCE_DIR}")
                set(GIT_HOOKS_DIR "${GIT_COMMON_DIR}/hooks")
            endif()
        endif()
    endif()

    if(GIT_HOOKS_DIR)
        configure_file(
            "${CMAKE_CURRENT_SOURCE_DIR}/cmake/pre-commit.in"
            "${CMAKE_CURRENT_BINARY_DIR}/pre-commit"
            @ONLY
            NEWLINE_STYLE LF
        )

        file(COPY "${CMAKE_CURRENT_BINARY_DIR}/pre-commit"
            DESTINATION "${GIT_HOOKS_DIR}"
            FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
        )
        message(STATUS "Installed Git pre-commit hook for clang-format into ${GIT_HOOKS_DIR}")

        add_custom_target(install-git-hooks
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${CMAKE_CURRENT_BINARY_DIR}/pre-commit"
                "${GIT_HOOKS_DIR}/pre-commit"
            COMMENT "Installing/updating Git pre-commit hook for clang-format"
        )
    endif()
endif()

# Subdirectories
add_subdirectory(tools)
add_subdirectory(src/platform)
add_subdirectory(src/firehawk)
add_subdirectory(apps/hal_smoke_test)
add_subdirectory(apps/firehawk)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()
