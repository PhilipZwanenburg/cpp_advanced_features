/* {{{
	This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public
	License as published by the Free Software Foundation, either version 3 of the License, or any later version.

	This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
	warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
	details.

	You should have received a copy of the GNU General Public License along with this program. If not, see
	<http://www.gnu.org/licenses/>.
}}} */

#ifndef examples_print_ab_hpp
#define examples_print_ab_hpp
/**	\file
 *	Dummy print function (ab). Even though the `print_a.hpp` header is included as part of this header (and not as part
 *	of the associated source file), cmake still correctly finds the dependency. See the
 *	`build/src/printing/CMakeFiles/PrintFunctions.dir/depend.make` file.
 */

#include "print_a.hpp"

/// \brief Prints 'a' and 'b'.
void print_ab ();

#endif
