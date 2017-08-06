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
 *	A simple function used for the cmake tutorial.
 */

#include <iostream>
#include <string>
#include <cmath>

#include "main.hpp"
#ifdef USE_MYMATH
	#include "math_functions.hpp"
#endif

using namespace std;

/// \brief Computes the square root of the input argument.
int main (int argc, char** argv)
{
	if (argc < 2) {
		cout << "Too few input parameters.\n";
		return 1;
	}

	auto input = stod(argv[1]);

	double output = 0.0;
	if (input > 0.0) {
#ifdef USE_MYMATH
		output = my_sqrt(input);
#else
		output = sqrt(input);
#endif
	}

	cout << "Version: " << VERSION_MAJOR << '.' << VERSION_MINOR << '\n';
	cout << "The square root of " << input << " is " << output << "\n";

#ifdef HAVE_EXP
	cout << "We have exp!\n";
#else
	cout << "We do not have exp!\n"
	     << "Did you forget to link the math library?\n";
#endif

	return 0;
}
