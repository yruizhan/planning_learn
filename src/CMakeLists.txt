cmake_minimum_required(VERSION 3.10.2)

project(planning_main)


add_subdirectory(pnc_map)
add_subdirectory(process)
# add_subdirectory(show_result)

add_executable(${PROJECT_NAME} planning_main.cc)

target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_Dir})

target_link_libraries(${PROJECT_NAME} 
PUBLIC
process)

# target_link_libraries(${PROJECT_NAME} 
# PUBLIC
# show_result)