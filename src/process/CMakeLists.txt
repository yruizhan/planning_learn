project(process)

add_library(${PROJECT_NAME} SHARED
process.cc
)


target_include_directories(${PROJECT_NAME}
PUBLIC
${Pnc_Map_Dir})

target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)