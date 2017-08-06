cmake_minimum_required (VERSION 3.5.1)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(functions)

project (Example)


set (Example_VERSION_MAJOR 1)
set (Example_VERSION_MINOR 0)
set (Example_VERSION "${Example_VERSION_MAJOR}.${Example_VERSION_MINOR}")


add_subdirectory (src)
add_subdirectory (doc)

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)


# Check for applications


# Check Madness `configure_file` commands


# Add the binary tree to the search path for include files so that main.hpp will be found
include_directories("${PROJECT_BINARY_DIR}/include")

## External libraries
#option (USE_MYMATH "Use tutorial provided math implementation" ON)

#if (USE_MYMATH)
#  include_directories("${PROJECT_SOURCE_DIR}/libraries")
#  add_subdirectory (libraries)
#  set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
#endif (USE_MYMATH)

add_executable(Ex5 src/main.cpp)
target_link_libraries (Ex5 ${EXTRA_LIBS})

## add the install targets
#install (TARGETS Ex5 DESTINATION bin)
#install (FILES "${PROJECT_BINARY_DIR}/main.hpp" DESTINATION include)




## add tests
#enable_testing ()

## does the application run?
#add_test (Ex5Runs Ex5)
