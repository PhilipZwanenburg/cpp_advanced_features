/* {{{
	This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public
	License as published by the Free Software Foundation, either version 3 of the License, or any later version.

	This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
	warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
	details.

	You should have received a copy of the GNU General Public License along with this program. If not, see
	<http://www.gnu.org/licenses/>.
}}} */

/** \file main.cpp
 */

#include <iostream>
#include "mpi.h"

using namespace std;

/**	\brief A hello world program for MPI.
 *
 * Prints hello from each process.
 *
 */

int main (int argc, char** argv)
{
	MPI::Init(argc,argv);

	auto num_procs = MPI::COMM_WORLD.Get_size();
	auto rank      = MPI::COMM_WORLD.Get_rank();

	cout << "Hello World! (process " << rank << " of " << num_procs << ")\n";

	MPI::Finalize();
	return 0;
}
