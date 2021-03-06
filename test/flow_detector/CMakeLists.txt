project (FlowDetector)


set (NAME flow_detector )

set (SRC_FILES
    main_flow_detector.cpp
)

#set (SOURCES ${SOURCES} ${JSON_MODERN_HEADERS} ${JSON_MODERN_SOURCES})

#add_definitions( -DWITH_JSONMODERN )
#include_directories(${JSON_MODERN_INCLUDES})
#message(STATUS FlowDetector:${JSON_MODERN_INCLUDES} )


if (PNG_LIB)
    include(../../wrappers/libpng/sourcelist.cmake)    
endif()
    
if (JPEG_LIB)
    include(../../wrappers/libjpeg/sourcelist.cmake)
endif()

include(../../wrappers/jsonmodern/sourcelist.cmake)

if (OpenCV_LIBS)
include(../../wrappers/opencv/sourcelist.cmake)
endif()

#message(STATUS FlowDetector:${INCLUDEPATHS} )

add_executable(${NAME} ${SRC_FILES} ${HDR_FILES})

add_custom_command(TARGET ${NAME} POST_BUILD
        COMMAND cp ${PROJECT_BINARY_DIR}/${NAME}  ${CMAKE_BINARY_DIR}/bin/${NAME}
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMENT "Copying ${NAME} to binary directory"
        )

include_directories(${INC_PATHS})

target_link_libraries(${NAME} corecvs pthread ${LIBS})

