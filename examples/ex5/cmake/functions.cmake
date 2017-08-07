# Define functions for use in cmake files.

function(print_found pkg_name flag_found)
	if(${flag_found})
		message("\tSearching for package: ${pkg_name} ... found.")
	else()
		message(WARNING "\tSearching for package: ${pkg_name} ... not found.")
	endif()
endfunction()


function(configure_file_hpp_in file_path file_name)
	set(ENV{PROJECT_ADDED_CMAKE_HPP} "YES")

	# Obtain file name without `.in` extension
	string(REGEX MATCH "[a-z_]+.[a-z]+" file_name_strip_in ${file_name})

	# Configure file for the build
	set(ENV{PROJECT_BUILD_INCLUDE_DIR} "${CMAKE_BINARY_DIR}/include")
	configure_file("${file_path}${file_name}"
	               "$ENV{PROJECT_BUILD_INCLUDE_DIR}/${file_name_strip_in}")

	# Configure file such that a copy is found for documentation generation
	configure_file("${file_path}${file_name}"
	               "${CMAKE_SOURCE_DIR}/include_cmake/${file_name_strip_in}")
endfunction()

# Add include paths for cmake generated header files (if necessary)
function(set_include_directories)
	if ($ENV{PROJECT_ADDED_CMAKE_HPP})
		include_directories("$ENV{PROJECT_BUILD_INCLUDE_DIR}")
	endif()
endfunction()
