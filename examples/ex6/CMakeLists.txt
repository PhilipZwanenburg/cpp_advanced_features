cmake_minimum_required(VERSION 3.5.1)

message("Running cmake with build type: ${CMAKE_BUILD_TYPE}.\n")

project(Example)


set(Example_VERSION_MAJOR 1)
set(Example_VERSION_MINOR 0)
set(Example_VERSION "${Example_VERSION_MAJOR}.${Example_VERSION_MINOR}")


# Global includes
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")
include(functions)


# Download and unpack external projects
add_external_project(googletest)


# Include subdirectory CMakeLists.txt files
add_subdirectory(src)
add_subdirectory(doc)


# Include directories for cmake generated files
set_include_directories()


# Executable generation
add_executable(Ex6 src/main.cpp)
target_link_libraries(Ex6 PRIVATE $ENV{EXTRA_LIBS})


# add tests
enable_testing()
add_test(Ex6Runs Ex6)
