add_library(sar_lib STATIC
    sar_extractor.c
    sar_extractor.h
)

target_include_directories(sar_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

apply_compiler_flags(sar_lib)

add_executable(sar_extractor
    sar_main.c
)

target_link_libraries(sar_extractor PRIVATE
    sar_lib
)

apply_compiler_flags(sar_extractor)
