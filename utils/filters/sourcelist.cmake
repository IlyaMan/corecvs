#file(GLOB CUR_SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/*.cpp)
#file(GLOB CUR_HDR_FILES ${CMAKE_CURRENT_LIST_DIR}/*.h)
#set(SRC_FILES ${SRC_FILES} ${CUR_SRC_FILES})
#set(HDR_FILES ${HDR_FILES} ${CUR_HDR_FILES})

set(SRC_FILES ${SRC_FILES}
    ${CMAKE_CURRENT_LIST_DIR}/ui/bitSelectorParametersControlWidget.cpp
    )
set(HDR_FILES ${HDR_FILES}
    ${CMAKE_CURRENT_LIST_DIR}/ui/bitSelectorParametersControlWidget.h
    ${CMAKE_CURRENT_LIST_DIR}/filterParametersControlWidgetBase.h
    )

set(UI_FILES ${UI_FILES}
    ${CMAKE_CURRENT_LIST_DIR}/ui/bitSelectorParametersControlWidget.ui
    )

if (TEMP_COMMENT)
file(GLOB CUR_SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/graph/*.cpp)
file(GLOB CUR_HDR_FILES ${CMAKE_CURRENT_LIST_DIR}/graph/*.h)

list(REMOVE_ITEM CUR_SRC_FILES "${CMAKE_CURRENT_LIST_DIR}/graph/filterGraphSelector.cpp")

list(REMOVE_ITEM CUR_SRC_FILES "${CMAKE_CURRENT_LIST_DIR}/graph/diagramscene.cpp")
list(REMOVE_ITEM CUR_HDR_FILES "${CMAKE_CURRENT_LIST_DIR}/graph/diagramscene.h")

set(SRC_FILES ${SRC_FILES} ${CUR_SRC_FILES})
set(HDR_FILES ${HDR_FILES} ${CUR_HDR_FILES})


# file(GLOB CUR_SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/legacy/*.cpp)
# file(GLOB CUR_HDR_FILES ${CMAKE_CURRENT_LIST_DIR}/legacy/*.h)
# set(SRC_FILES ${SRC_FILES} ${CUR_SRC_FILES})
# set(HDR_FILES ${HDR_FILES} ${CUR_HDR_FILES})

file(GLOB CUR_SRC_FILES ${CMAKE_CURRENT_LIST_DIR}/ui/*.cpp)
file(GLOB CUR_HDR_FILES ${CMAKE_CURRENT_LIST_DIR}/ui/*.h)
list(REMOVE_ITEM CUR_SRC_FILES "${CMAKE_CURRENT_LIST_DIR}/ui/operationFilterControlWidget.cpp")
set(SRC_FILES ${SRC_FILES} ${CUR_SRC_FILES})
set(HDR_FILES ${HDR_FILES} ${CUR_HDR_FILES})
endif()

set(INC_PATHS ${INC_PATHS} ${CMAKE_CURRENT_LIST_DIR}/ui)

