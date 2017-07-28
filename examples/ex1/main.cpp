/* {{{
	This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public
	License as published by the Free Software Foundation, either version 3 of the License, or any later version.

	This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
	warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
	details.

	You should have received a copy of the GNU General Public License along with this program. If not, see
	<http://www.gnu.org/licenses/>.
}}} */

/*
 *	Library dependencies:
 *		An MPI library (MPICH 3.2 used here).
 *
 *	Compiling and executing
 *		Compile: `$ make`.
 *		Execute: `$ sh run.sh`.
 */

/*
 *	Purpose:
 *		This examples represents a hello world program for MPI taken from Pitt-Francis(2012).
 *
 *	References:
 *		Pitt-Francis(2012) - Guide to Scientific Computing in C++ (Chapter 11)
 */

#include <iostream>
#include "mpi.h"

using namespace std;

int main (int argc, char** argv)
{
	MPI::Init(argc,argv);

	auto num_procs = MPI::COMM_WORLD.Get_size();
	auto rank      = MPI::COMM_WORLD.Get_rank();

	cout << "Hello World! (process " << rank << " of " << num_procs << ")\n";

	MPI::Finalize();
	return 0;
}
