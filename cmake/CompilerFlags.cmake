# cmake/CompilerFlags.cmake - Modular compiler warning and hardening configuration

function(copy_target_dependencies TARGET_NAME)
    if(WIN32)
        # If target links platform_hal or SDL2, guarantee SDL2 runtime DLLs are copied to target binary directory
        get_target_property(_libs ${TARGET_NAME} LINK_LIBRARIES)
        if(_libs)
            string(FIND "${_libs}" "platform_hal" _has_hal)
            string(FIND "${_libs}" "SDL2" _has_sdl)
            if(_has_hal GREATER -1 OR _has_sdl GREATER -1)
                set(_SDL2_DLL_CANDIDATES
                    "C:/vcpkg/packages/sdl2_x64-windows/bin/SDL2.dll"
                    "C:/vcpkg/packages/sdl2_x64-windows/debug/bin/SDL2d.dll"
                )
                foreach(_DLL_PATH IN LISTS _SDL2_DLL_CANDIDATES)
                    if(EXISTS "${_DLL_PATH}")
                        add_custom_command(TARGET ${TARGET_NAME} POST_BUILD
                            COMMAND ${CMAKE_COMMAND} -E copy_if_different
                                "${_DLL_PATH}"
                                "$<TARGET_FILE_DIR:${TARGET_NAME}>"
                            COMMENT "Copying ${_DLL_PATH} to $<TARGET_FILE_DIR:${TARGET_NAME}>"
                        )
                    endif()
                endforeach()
            endif()
        endif()
    endif()
endfunction()

function(apply_compiler_flags TARGET_NAME)
    if(WIN32)
        target_compile_definitions(${TARGET_NAME} PRIVATE
            _CRT_SECURE_NO_WARNINGS
            _CRT_NONSTDC_NO_DEPRECATE
        )
    endif()

    if(MSVC)
        target_compile_options(${TARGET_NAME} PRIVATE
            /W4
            /WX
            /permissive-
            /utf-8
            /volatile:iso
        )
    else()
        target_compile_options(${TARGET_NAME} PRIVATE
            -Wall
            -Wextra
            -pedantic
            -Werror
            -fno-strict-aliasing
            -Wconversion
            -Wsign-conversion
            -Wshadow
        )
    endif()

    get_target_property(_target_type ${TARGET_NAME} TYPE)
    if(_target_type STREQUAL "EXECUTABLE")
        copy_target_dependencies(${TARGET_NAME})
    endif()
endfunction()

