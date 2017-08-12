# Overview

The goal of this project is to provide small working examples demonstrating the incorporation of various library, code
and github functionality into a larger code. All examples below assume a unix-like operating system and were run on
Ubuntu release 16.04 LTS.

All examples presented here are written in c++ and outline any library dependencies along with command line instructions
for how to observe the showcased functionality. Code to be entered on the command line is presented as:
`$ type_this_on_the_cmd_line`.

The examples should generally be reviewed in order as they may assume knowledge of previous examples.

# Libraries

### MPICH

"MPICH is a high performance and widely portable implementation of the [Message Passing Interface (MPI)][MPI_Wikipedia]
standard." -[MPICH website][MPICH_home]

##### Examples

- [ex1]

##### To Do
- building with various options: (after cmake is introduced, likely need to modify [ex1])
	- ch3:nemesis vs. ch3:sock
	- --enable-debuginfo
	- optimization level
- [Debugging with Totalview](https://wiki.mpich.org/mpich/index.php/Frequently_Asked_Questions#Q:_How_do_I_use_Totalview_with_MPICH.3F)


### Doxygen

"Doxygen is the de facto standard tool for generating documentation from annotated C++ sources."
-[Doxygen website][Doxygen_home] 

##### Examples

- [ex2], [ex3]

##### To Do

Add examples usage of:
- [Images (jpg and eps)](https://www.stack.nl/~dimitri/doxygen/manual/commands.html#cmdimage).

Presentation:
- See the boostorg/hana [github](https://github.com/boostorg/hana/tree/master/doc) and doxygen generated
  [html](http://www.boost.org/doc/libs/1_62_0/libs/hana/doc/html/index.html) for an example of a professional project.


### CMake

"CMake is an open-source, cross-platform family of tools designed to build, test and package software."
-[CMake website][CMake_home]

##### Examples

- [ex4], [ex5]

##### To Do
- Look into [CTest](https://cmake.org/Wiki/CMake/Testing_With_CTest) (dashboard)
- Use `check_function_exists` for: blas functions

### Google Test

"Google Test is a unit testing library for the C++ programming language, based on the xUnit architecture."
-[Wikipedia][wiki_googletest]

##### Examples

- [ex6]

##### To Do
- Usage of features outlined in the [Advanced Guide][g_test_adv_guide]:
	- ::testing::AssertionResult
	- Teaching Google Test How to Print Your Values
	- SCOPED_TRACE()
	- Sharing Resources Between Tests in the Same Test Case
	- Value Parameterized Tests
	- Typed Tests
	- Generating an XML Report
	- Turning Assertion Failures into Break-Points
	- Distributing Test Functions to Multiple Machines
- combined with CTest, CMake and Boost (see [this SO discussion](https://scicomp.stackexchange.com/questions/8516/any-recommendations-for-unit-testing-frameworks-compatible-with-code-libraries-t))
	- [incorporating into an existing cmake project](https://github.com/google/googletest/tree/master/googletest#incorporating-into-an-existing-cmake-project)

[g_test_adv_guide]: https://github.com/google/googletest/blob/master/googletest/docs/AdvancedGuide.md

### CDash, CTest, valgrind, gcov

### Eigen/Hypre/Petsc/Trilinos (To Do)
- Eigen: Expression templates
### blas (To Do)
### Paraview (To Do)
### Boost

#### [Github](https://github.com/boostorg)

- stacktrace

#### [Online Documentation](http://www.boost.org/doc/libs/1_64_0/doc/html/)

- Math
	- special functions
	- complex number functions
	- quaternion (hobby: 3D rotation investigation)
	- root finding, Polynomial and Rational Function Evaluation
- Intrusive
- MPI

### GNU vs Clang (llvm) (Aditya mentioned potentially faster compile times for clang)



# Code Functionality

### Dynamic libraries (To Do)
### Intrusive containers.
### Automatic differentiation (To Do)
### Templated functions (double/complex) for complex step verification, Explicit instantiation (To Do)
### Flexible data types (float/double) (To Do)
### Protected vs. Private class members (discussion of library modification without modifying the source because of allowed inheritance)
### valarray vs vector
### Use of restrict
### Update list of inherited objects through corresponding list of base objects (Not sure if this is possible)

# Github Functionality

### Code coverage (To Do)
### Build passing/failing (To Do)

# License

The code is licensed under the [GNU GPLv3](LICENSE.md).

<!-- References: (This is an HTML comment block which is hidden from doxygen and markdown) -->
---
[MPICH_home]: https://www.mpich.org/
[MPI_Wikipedia]: https://en.wikipedia.org/wiki/Message_Passing_Interface
[Doxygen_home]: http://www.stack.nl/~dimitri/doxygen/
[wiki_googletest]: https://en.wikipedia.org/wiki/Google_Test
[CMake_home]: https://cmake.org/

[ex1]: examples/ex1/
[ex2]: examples/ex2/
[ex3]: examples/ex3/
[ex4]: examples/ex4/
[ex5]: examples/ex5/
[ex6]: examples/ex6/
