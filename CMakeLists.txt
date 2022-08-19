cmake_minimum_required(VERSION 3.0.0)
project(animaco_demo VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(animaco_demo main.cpp)

target_link_libraries(animaco_demo animaco)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(lib/animaco)