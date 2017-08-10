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
#include <string>
#include <cmath>

#include "main.hpp"
#include "printing/print_a.hpp"
#include "printing/print_ab.hpp"
#include "math/math_functions.hpp"

#include "gtest/gtest.h"

using namespace std;

/** \brief Macro to silence `unused variable` compile warning.
 *
 *	Taken from [this SO answer][SO_unused].
 *
 *	[SO_unused]: https://stackoverflow.com/questions/1486904/how-do-i-best-silence-a-warning-about-unused-variables
 */
#define UNUSED(expr) do { (void)(expr); } while (0)

/// \test Testing for validity of `sqrt(x)`.
TEST(SqrtTest, Valid) {
	EXPECT_EQ(1.0, sqrt(1.0));
	EXPECT_EQ(2.0, sqrt(4.0));
}

/// \test Testing for validity of `sqrt(0.0)`.
TEST(SqrtTest, Zero) {
	EXPECT_EQ(0.0, sqrt(0.0));
}

/// \brief Main function.
int main (int argc, char** argv)
{
	UNUSED(argc);
	UNUSED(argv);
	cout << "This is Ex5 version: " << VERSION_MAJOR << '.' << VERSION_MINOR << '\n';

	print_a();
	print_ab();

	const double input = 2.0;
	cout << "The sqrt of " << input << " is " << default_sqrt(input) << ".\n";

	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
