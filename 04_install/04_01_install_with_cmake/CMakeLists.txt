cmake_minimum_required(VERSION 3.2)

project(example VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} main.cpp)

configure_file(example_config.h.in example_config.h)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_BINARY_DIR} # needed for example_config.h
)

install(TARGETS ${PROJECT_NAME} DESTINATION $ENV{HOME}/bin)
install(FILES "${PROJECT_BINARY_DIR}/example_config.h" DESTINATION $ENV{HOME}/bin)
