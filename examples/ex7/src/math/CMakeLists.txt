cmake_minimum_required(VERSION 3.5.1)

project(MathFunctions)

add_library(${PROJECT_NAME} math_functions.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE gtest_main)

add_to_env(EXTRA_LIBS ${PROJECT_NAME})

include(CTest)
add_test(test_default_sqrt ${CMAKE_CTEST_COMMAND}
         --build-and-test    "${PROJECT_SOURCE_DIR}"
                             "${CMAKE_BINARY_DIR}/Tests/Simple"
         --build-generator   ${CMAKE_GENERATOR}
         --build-makeprogram ${CMAKE_MAKE_PROGRAM}
         --build-project Simple
         --build-command simple)
