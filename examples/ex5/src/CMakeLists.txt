configure_file_hpp_in(${PROJECT_SOURCE_DIR}/src/ main.hpp.in)

include_directories("${PROJECT_SOURCE_DIR}/src")

add_subdirectory(printing)
add_subdirectory(math)
