cmake_minimum_required(VERSION 3.5.1)

project(PrintFunctions)

add_library(${PROJECT_NAME} print_a.cpp print_ab.cpp)

add_to_env(EXTRA_LIBS ${PROJECT_NAME})
