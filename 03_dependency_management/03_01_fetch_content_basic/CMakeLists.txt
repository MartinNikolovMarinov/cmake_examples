cmake_minimum_required(VERSION 3.22)
project(main)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# This will verbosely print out the search paths cmake is using to find libraries
set(CMAKE_FIND_DEBUG_MODE ON)

include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.14.x # release-1.14.0
)

FetchContent_MakeAvailable(googletest)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} gtest_main)
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${google_test_include_dirs})
