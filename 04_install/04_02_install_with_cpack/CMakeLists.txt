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

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/example_config.h" DESTINATION include)

include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_PACKAGE_VERSION_MAJOR "${example_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${example_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${example_VERSION_PATCH}")
include(CPack)
