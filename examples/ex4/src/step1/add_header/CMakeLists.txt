cmake_minimum_required (VERSION 3.5.1)

project (Tutorial)


set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# Configure a header file to pass some of the CMake settings to the source file
configure_file (
  "${PROJECT_SOURCE_DIR}/main.hpp.in"
  "${PROJECT_BINARY_DIR}/main.hpp"
)

# Add the binary tree to the search path for include files so that main.hpp will be found
include_directories("${PROJECT_BINARY_DIR}")


set (CMAKE_CXX_COMPILER "g++")
add_compile_options($<$<COMPILE_LANGUAGE:CXX>:-std=gnu++14>)

add_executable(Tutorial main.cpp)
