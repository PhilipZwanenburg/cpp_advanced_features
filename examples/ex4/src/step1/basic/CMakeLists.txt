# Note that cmake supports commands in upper, lower or mixed case.

cmake_minimum_required (VERSION 3.5.1)

# Set the compiler to g++ (was c++ by default)
set (CMAKE_CXX_COMPILER "g++")

# Add compile option when compiling c++ code
add_compile_options($<$<COMPILE_LANGUAGE:CXX>:-std=gnu++14>)

project (TutorialStep1)
add_executable(TutorialStep1 main.cpp)
