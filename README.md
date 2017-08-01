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
standard." - [MPICH website][MPICH_home]

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

- [ex2]
- [ex3]

##### To Do

Add examples usage of:
- [Images (jpg and eps)](https://www.stack.nl/~dimitri/doxygen/manual/commands.html#cmdimage).

### Google Test

"Google Test is a unit testing library for the C++ programming language, based on the xUnit architecture."
-[Wikipedia][wiki_googletest]

##### Examples

- [ex4]

##### To Do
- Unit testing
- Traceback
- combined with CTest, CMake and Boost (see [this SO discussion](https://scicomp.stackexchange.com/questions/8516/any-recommendations-for-unit-testing-frameworks-compatible-with-code-libraries-t)
	- [incorporating into an existing cmake project](https://github.com/google/googletest/tree/master/googletest#incorporating-into-an-existing-cmake-project)


### cmake (Include library and non-trivial header dependencies, subdirectory tree) (To Do)
### blas (To Do)
### Eigen/Hypre/Petsc/Trilinos (To Do)
### Paraview (To Do)
### Boost


# Code Functionality

### Code organization into subfolders (To Do)
### Dynamic libraries (To Do)
### Automatic differentiation (To Do)
### Templated functions (double/complex) for complex step verification, Explicit instantiation (To Do)
### Flexible data types (float/double) (To Do)
### Protected vs. Private class members (discussion of library modification without modifying the source)


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

[ex1]: examples/ex1/
[ex2]: examples/ex2/
[ex3]: examples/ex3/
[ex4]: examples/ex4/
