/* {{{
	This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public
	License as published by the Free Software Foundation, either version 3 of the License, or any later version.

	This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
	warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
	details.

	You should have received a copy of the GNU General Public License along with this program. If not, see
	<http://www.gnu.org/licenses/>.
}}} */

/**
 * \file main.cpp
 *	Library dependencies:
 *		An MPI library (MPICH 3.2 tested).
 *		Doxygen (version 1.8.11 tested).
 *
 *	Generating documentation:
 *		Make a documentation directory: `$ mkdir doc && cd doc`
 *		Create a configuration file: `$ doxygen -g doxygen.cfg`
 *		Modify the configuration file:
 *			- PROJECT_NAME           = "Doxygen 101"
 *			- WARN_AS_ERROR          = YES
 *			- INPUT                  = ../src/
 *			- FILE_PATTERNS          = *.cpp *.hpp *.ipp
 *			- RECURSIVE              = YES
 *			- HTML_TIMESTAMP         = YES
 *			- LATEX_TIMESTAMP        = YES
 *		Run doxygen: `$ doxygen doxygen.cfg`
 *		The generated HTML documentation can be viewed by pointing a HTML browser to the index.html file in the html
 *		directory.
 *
 *
 *	Compiling and executing the code (in the ROOT directory):
 *		Compile: `$ make`.
 *		Execute: `$ sh run.sh`.
 *
 *	Purpose:
 *		This example serves to demonstrate the basic usage of doxygen using the code from ex1. More detailed information
 *		can be found in the Doxygen getting started manual.
 *
 *	References:
 *		Doxygen getting started - https://www.stack.nl/~dimitri/doxygen/manual/starting.html
 */

#include <iostream>
#include "mpi.h"

using namespace std;

int main (int argc, char** argv)
{
	MPI::Init(argc,argv);

	auto num_procs = MPI::COMM_WORLD.Get_size(); /// tmp documentation
	auto rank      = MPI::COMM_WORLD.Get_rank();

	cout << "Hello World! (process " << rank << " of " << num_procs << ")\n";

	MPI::Finalize();
	return 0;
}
