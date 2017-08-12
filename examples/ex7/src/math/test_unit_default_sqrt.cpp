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
 */

#include <iostream>

#include "math_functions.hpp"

using namespace std;

/** \test Function to test that the `default_sqrt` runs correctly (checked with CTest).
 *
 *	\return 0 if successful.
 */
int main ()
{
	cout << "Testing default_sqrt.\n";

	const double value = 2.0;
	cout << "The sqrt of           " << value << " is " << default_sqrt(value) << ".\n";

	return 0;
}
