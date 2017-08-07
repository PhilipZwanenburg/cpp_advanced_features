This example serves to demonstrate the usage of cmake in relation to larger projects where the following features are
present:
- Subdirectory source tree;
- Nested (hidden) header dependencies:
	- Note that cmake automatically finds header dependencies.
- \todo update this list and add features.

To improve the organization of the expanded project, the top CMakeLists.txt file is separated into many `*.cmake` files
to be subsequently included.

\todo Check if files are recompiled when necessary (but only when necessary).


# External Dependencies
 
- CMake (version 3.5.1).
- Doxygen (version 1.8.11 tested).

## Additional (Not required)
- g++ (version 7.1).
	- The steps in [this github post][install_latest_gcc_ubuntu_lts] were followed to perform the installation.
 
# Compiling and executing the code
 
Run `cmake` using the provided script file:
```{sh}
$ bash cmake_run.sh
```
An alternative build directory and toolchain file may be specified if desired.

After the Makefile is generated, `make` and launch the executable. Documentation can be generated using
```{sh}
$ make doc
```

 
<!-- References: (This is an HTML comment block which is hidden from doxygen and markdown) -->
---
[install_latest_gcc_ubuntu_lts]: https://gist.github.com/application2000/73fd6f4bf1be6600a2cf9f56315a2d91
