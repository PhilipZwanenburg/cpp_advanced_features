cmake_minimum_required (VERSION 3.5.1)

project (Tutorial)


set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

set (CMAKE_CXX_COMPILER "g++")
add_compile_options($<$<COMPILE_LANGUAGE:CXX>:-std=gnu++14>)

# Configure a header file to pass some of the CMake settings to the source file
configure_file (
  "${PROJECT_SOURCE_DIR}/main.hpp.in"
  "${PROJECT_BINARY_DIR}/main.hpp"
)

# Add the binary tree to the search path for include files so that main.hpp will be found
include_directories("${PROJECT_BINARY_DIR}")


# External libraries
option (USE_MYMATH "Use tutorial provided math implementation" ON)

if (USE_MYMATH)
  include_directories("${PROJECT_SOURCE_DIR}/libraries")
  add_subdirectory (libraries)
  set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif (USE_MYMATH)

add_executable(Tutorial main.cpp)
target_link_libraries (Tutorial ${EXTRA_LIBS})

# add the install targets
install (TARGETS Tutorial DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/main.hpp" DESTINATION include)

# add tests
enable_testing ()

# does the application run?
add_test (TutorialRuns Tutorial 25)

# does the application work correctly?
macro (do_test arg result)
  add_test (TutorialComp_${arg} Tutorial ${arg})
  set_tests_properties (TutorialComp_${arg} PROPERTIES PASS_REGULAR_EXPRESSION ${result})
endmacro (do_test)

do_test (25 "25 is 5")
do_test (-25 "-25 is 0")
do_test (0.0001 "0.0001 is 0.01")

# does the usage message work?
add_test (TutorialUsage Tutorial)
set_tests_properties (TutorialUsage PROPERTIES PASS_REGULAR_EXPRESSION "Too few input parameters")


# Introspection
include (CheckFunctionExists)

set (CMAKE_REQUIRED_INCLUDES math.h)
set (CMAKE_REQUIRED_LIBRARIES m)
check_function_exists (exp HAVE_EXP)
