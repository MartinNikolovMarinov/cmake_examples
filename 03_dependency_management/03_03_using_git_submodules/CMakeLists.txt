cmake_minimum_required(VERSION 3.22)
project(main)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)

function(update_git_submodules)
    find_package(Git QUIET)
    if (GIT_FOUND)
        message(STATUS "Submodule update")
        execute_process(
            COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            RESULT_VARIABLE GIT_SUBMOD_RESULT
        )
        if (NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
        endif()
    else()
        message(FATAL_ERROR "Git is not found. It is required to update submodules.")
    endif()
endfunction()

update_git_submodules()

add_subdirectory(external_modules/glfw)
target_include_directories(${CMAKE_PROJECT_NAME}
    PUBLIC external_modules/glfw/include
)
target_link_directories(${CMAKE_PROJECT_NAME}
    PUBLIC external_modules/glfw/src
)
target_link_libraries(${CMAKE_PROJECT_NAME}
    glfw
    ${GLFW_LIBRARIES}
)
