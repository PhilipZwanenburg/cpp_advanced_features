# Overview

The goal of this project is to provide small working examples demonstrating the incorporation of various library, code
and github functionality into a larger code. All examples below assume a unix-like operating system and were run on
Ubuntu release 16.04 LTS.

All examples presented here are written in c++ and include a comment block in `main.cpp` which outlines any library
dependencies along with command line instructions for how to observe the showcased functionality. Code to be entered on
the command line is presented as: `$ type_this_on_the_cmd_line`.

The examples should generally be reviewed in order as they may assume knowledge of previous examples.

# Libraries

### MPICH

##### Description
"MPICH is a high performance and widely portable implementation of the [Message Passing Interface (MPI)][MPI_Wikipedia]
standard." - [MPICH website][MPICH_home]

[MPICH_home]: https://www.mpich.org/
[MPI_Wikipedia]: https://en.wikipedia.org/wiki/Message_Passing_Interface

##### Examples

- [ex1](examples/ex1/)


### Doxygen

##### Description
"Doxygen is the de facto standard tool for generating documentation from annotated C++ sources."
-[Doxygen website][Doxygen_home] 

[Doxygen_home]: http://www.stack.nl/~dimitri/doxygen/

##### Examples

- [ex2](examples/ex2/)
- [ex3](examples/ex3/)

##### To Do

Add examples usage of:
- Markdown support:
	- link to class ([myclass]: @ref MyClass "My class")
	- link to image ([img def]: /path/to/img.jpg "Optional Title"). Requires an additional '!' before the link
	  (![img def])
- [Formula support](https://www.stack.nl/~dimitri/doxygen/manual/formulas.html)
- [Special commands](https://www.stack.nl/~dimitri/doxygen/manual/commands.html):
	- \todo
	- \test
	- \bug
	- \depracated
- bib files
- [Documentation at other places](https://www.stack.nl/~dimitri/doxygen/manual/docblocks.html#structuralcommands)

### googletest (Traceback, unit testing) (To Do)
### cmake (Include library and non-trivial header dependencies, subdirectory tree) (To Do)
### blas (To Do)
### Eigen/Hypre/Petsc (To Do)
### Paraview (To Do)


# Code Functionality

### Code organization into subfolders (To Do)
### Dynamic libraries (To Do)
### Automatic differentiation (To Do)
### Templated functions (double/complex) for complex step verification (To Do)
### Flexible data types (float/double) (To Do)


# Github Functionality

### Code coverage (To Do)
### Build passing/failing (To Do)

# License

The code is licensed under the [GNU GPLv3](LICENSE.md).
