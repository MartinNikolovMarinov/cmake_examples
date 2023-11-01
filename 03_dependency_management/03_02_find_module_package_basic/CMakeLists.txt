cmake_minimum_required(VERSION 3.22)
project(main)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)

# This will verbosely print out the search paths cmake is using to find libraries
set(CMAKE_FIND_DEBUG_MODE ON)

# Add the directory where FindFoo.cmake is located to the module path
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/")

# Find the Foo package using the custom foo Find module. The name "Foo" comes from the name of the file FindFoo.cmake.
find_package(Foo REQUIRED)
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${FOO_INCLUDE_DIRS})
