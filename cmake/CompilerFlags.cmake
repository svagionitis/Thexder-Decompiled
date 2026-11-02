# cmake/CompilerFlags.cmake - Modular compiler warning and hardening configuration

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
endfunction()

