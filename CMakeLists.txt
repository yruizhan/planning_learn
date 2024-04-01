cmake_minimum_required(VERSION 3.10.2)

project(planning
    VERSION 0.0.1
    DESCRIPTION "learn")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(Pnc_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

add_subdirectory(src)

#三方库
find_package(Eigen3 3.4 REQUIRED)
set(EIGEN3_INCLUDE_DIR /usr/local/include/eigen3)
set(Eigen3_DIR ${EIGEN3_INCLUDE_DIR}/cmake)
list(APPEND CMAKE_MODULE_PATH ${EIGEN3_INCLUDE_DIR}/cmake)
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")



include_directories(${EIGEN3_INCLUDE_DIR})
if(TARGET Eigen3::Eigen)
    message("Eigen3 找到了!")
endif()

get_target_property(Eigen3_INCLUDE_DIR Eigen3::Eigen INTERFACE_INCLUDE_DIRECTORIES)
message("Eigen3_INCLUDE_DIR = ${Eigen3_INCLUDE_DIR}")