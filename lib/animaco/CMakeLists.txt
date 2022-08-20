add_library(animaco INTERFACE)

target_sources(animaco INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/Animation.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Pixel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/CircularPane.cpp
    ${CMAKE_CURRENT_LIST_DIR}/DrawingBuffer.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Arc.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Color.cpp
    ${CMAKE_CURRENT_LIST_DIR}/OutputDriver.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ConsoleDriver.cpp
)

target_include_directories(animaco INTERFACE ${CMAKE_CURRENT_LIST_DIR})

#target_link_libraries(animaco INTERFACE)