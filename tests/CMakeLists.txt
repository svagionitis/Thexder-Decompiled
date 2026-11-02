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
