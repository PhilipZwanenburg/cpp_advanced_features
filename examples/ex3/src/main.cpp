/* {{{
	This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public
	License as published by the Free Software Foundation, either version 3 of the License, or any later version.

	This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
	warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
	details.

	You should have received a copy of the GNU General Public License along with this program. If not, see
	<http://www.gnu.org/licenses/>.
}}} */

/**	\file
 *	If the file name is omitted, this documentation block belongs to the file in which it is located.
 */

#include <iostream>
#include "mpi.h"

using namespace std;

/**	\brief A hello world program for MPI.
 *
 *	Prints hello from each process.
 *
 *	\return 0 if succesful \n
 *	        N otherwise
 *
 *	One of the first goals of the code to be developed will be to replicate some t-spline adaptation results from
 *	Thomas et al. \cite thomas2015. It would also be great to include both in-text formulas (\f$e^{i\pi} = 1\f$) and
 *	longer out-of-text formulae such as:
 *
 *	\f{eqnarray*}{
 *		g &=& \frac{Gm_2}{r^2} \\
 *		  &=& \frac{(6.673 \times 10^{-11}\,\mbox{m}^3\,\mbox{kg}^{-1}\,
 *		      \mbox{s}^{-2})(5.9736 \times 10^{24}\,\mbox{kg})}{(6371.01\,\mbox{km})^2} \\
 *		  &=& 9.82066032\,\mbox{m/s}^2
 *	\f}
 *
 *	\warning (Repeated from the Doxygen manual) Currently, doxygen is not very fault tolerant in recovering from typos
 *	in formulae. It may be necessary to remove the file 'formula.repository' that is written to the html directory to
 *	get rid of an incorrect formula.
 */
int main
	(int argc,   ///< represents the number of command line input arguments
	 char** argv ///< holds the list of pointers to \c char* holding the command line arguments
	)
{

	MPI::Init(argc,argv);

	auto num_procs = MPI::COMM_WORLD.Get_size();
	auto rank      = MPI::COMM_WORLD.Get_rank();

	cout << "Hello World! (process " << rank << " of " << num_procs << ")\n";

	MPI::Finalize();
	return 0;
}
