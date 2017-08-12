cmake_minimum_required(VERSION 3.5.1)

project(MathFunctions)

add_library(${PROJECT_NAME} math_functions.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE gtest_main)

add_to_env(EXTRA_LIBS ${PROJECT_NAME})
