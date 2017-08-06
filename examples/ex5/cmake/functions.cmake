# Define functions for use in cmake files.

function(print_found pkg_name flag_found)
	if(${flag_found})
		message("\tSearching for package: ${pkg_name} ... found.")
	else()
		message(WARNING "\tSearching for package: ${pkg_name} ... not found.")
	endif()
endfunction()


function(configure_file_hpp_in file_path file_name)
	# Obtain file name without `.in` extension
	string(REGEX MATCH "[a-z]+.[a-z]+" file_name_no_in ${file_name})

	# Configure file for the build
	configure_file("${file_path}${file_name}"
	               "${CMAKE_BINARY_DIR}/indlude/${file_name_no_in}")

	# Configure file such that a copy is found for documentation generation
	configure_file("${file_path}${file_name}"
	               "${CMAKE_SOURCE_DIR}/include_cmake/${file_name_no_in}")
endfunction()
