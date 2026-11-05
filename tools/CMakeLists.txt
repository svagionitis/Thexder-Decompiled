# Tools for reading, extracting, and analyzing data are implemented in Python.
# See sar_extractor.py, extract_sar_archives.py, frame_diff.py, etc.

if(Python3_FOUND)
    add_custom_target(sar_extractor
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/sar_extractor.py assets/firehawk ${CMAKE_BINARY_DIR}/extracted_assets
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        COMMENT "Extracting Firehawk assets using Python sar_extractor"
    )
endif()
