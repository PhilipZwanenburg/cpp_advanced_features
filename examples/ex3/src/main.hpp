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
 *	\bug Check to see if a bug appears in a comment block which would otherwise be invisible.
 *
 *	\note Note that the bug **does** appear in the documentation.
 *
 *	\todo When applicable, include usage of:
 *		- '\\tparam'\n
 *
 *	The Doxygen [Special Commands page] was very helpful for this example.
 *
 *
 *	<!-- References: -->
 *	[Special Commands page]: https://www.stack.nl/%7Edimitri/doxygen/manual/commands.html#cmdrelates
 */

/**	\namespace Dummy_namespace
 *	\brief This is a dummy namespace.
 *
 *	\attention This is a test of the '\\attention' indicator.
 */
namespace Dummy_namespace {

/**	\class Dummy_class ""
 *	\brief This is a dummy class.
 *
 *	Some details about the Dummy class.
 *
 *	\bug This is how a bug indication appears.
 *	\warning This is how a warning indication appears.
 */
class Dummy_class {
	/**	\enum Dummy_enum
	 *	\brief An enum with inline docs
	 */
	enum Dummy_enum {
		V1, ///< value 1
		V2  ///< value 2
	};

	/**
	 *	\test Dummy_test_function
	 */
	void Dummy_test_function() {}
};

/**	\relates Dummy_class
 *	A non-member function relating to Dummy_class.
 *
 *	\todo Possibly use '\\relatesalso' instead in the future.
 */
void related_dummy_func ()
{
}

/** \relatesalso Dummy_class
 *	A deprecated non-member function relating to Dummy_class.
 *
 *	\deprecated Use related_dummy_func instead.
 */
void deprecated_related_dummy_func ()
{
}

}
