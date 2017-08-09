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

#include <cmath>

#include "math_functions.hpp"

#include "gtest/gtest.h"

using namespace std;

double default_sqrt (const double a)
{
	return sqrt(a);
}

TEST(SqrtTest, ValidOutOfMain) {
	EXPECT_EQ(3.0, sqrt(9.0));
}
