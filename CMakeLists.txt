cmake_minimum_required(VERSION 3.10.2)

project(planning
    VERSION 0.0.1
    DESCRIPTION "learn")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

add_subdirectory(src)