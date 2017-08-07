cmake_minimum_required (VERSION 3.5.1)

message("Running cmake with build type: ${CMAKE_BUILD_TYPE}.\n")

project (Example)


set (Example_VERSION_MAJOR 1)
set (Example_VERSION_MINOR 0)
set (Example_VERSION "${Example_VERSION_MAJOR}.${Example_VERSION_MINOR}")


# Global includes
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(functions)


add_subdirectory(src)
add_subdirectory(doc)


# Enable optional libraries
# \todo Add a library here (GoogleTest?)

set_include_directories()


#if (USE_MYMATH)
#  include_directories("${PROJECT_SOURCE_DIR}/libraries")
#  add_subdirectory (libraries)
#  set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
#endif (USE_MYMATH)

add_executable(Ex5 src/main.cpp)
target_link_libraries (Ex5 ${EXTRA_LIBS})



## add tests
#enable_testing()

## does the application run?
#add_test(Ex5Runs Ex5)
