cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)
# This will generate a compile_commands.json in the build
# directory that lists every file and it's compile command.
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the project name
project(main)

add_subdirectory(libs/mathz_shared)
add_subdirectory(libs/some_static)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE mathz)
target_link_libraries(${PROJECT_NAME} PRIVATE some)

