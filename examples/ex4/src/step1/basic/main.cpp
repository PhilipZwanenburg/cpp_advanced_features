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
 *	A simple function used for the cmake tutorial, step 1 (basic).
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/// \brief Computes the square root of the input argument.
int main (int argc, char** argv)
{
	if (argc < 2) {
		cout << "Too few input parameters.\n";
		return 1;
	}

	auto input = stod(argv[1]);

	cout << "The square root of " << input << " is " << sqrt(input) << "\n";

	return 0;
}
