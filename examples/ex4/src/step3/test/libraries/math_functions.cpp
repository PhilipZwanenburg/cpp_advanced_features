/* {{{
	This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public
	License as published by the Free Software Foundation, either version 3 of the License, or any later version.

	This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
	warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
	details.

	You should have received a copy of the GNU General Public License along with this program. If not, see
	<http://www.gnu.org/licenses/>.
}}} */

/// \file

#include <iostream>
#include "math_functions.hpp"

using namespace std;

double my_sqrt (double x)
{
	if (x <= 0.0)
		return 0.0;

	double result = x;

	size_t n_iter = 10;

	for (size_t i = 0; i < n_iter; i++) {
		if (result <= 0.0)
			result = 0.1; /// \todo Remove magic number here.

		double delta = x - result*result;

		result += 0.5*delta/result;

		cout << "Computing sqrt of " << x << " to be " << result << " ...\n";
	}
	cout << '\n';
	return result;
}
