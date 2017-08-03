add_library(MathFunctions math_functions.cpp)

install (TARGETS MathFunctions DESTINATION bin)
install (FILES math_functions.hpp DESTINATION include)
