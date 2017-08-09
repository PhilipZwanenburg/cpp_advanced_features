add_library(MathFunctions math_functions.cpp)
target_link_libraries(MathFunctions PRIVATE gtest_main)

add_to_env(EXTRA_LIBS MathFunctions)
