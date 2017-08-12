This example demonstrates introductory usage of CTest, CDash, gcov working through Chapter 10 of
[Mastering CMake][master_cmake].

\todo Continue at 10.5.

# External Dependencies
 
- Doxygen (version 1.8.11).
- CMake (version 3.5.1).
- Google Test (cloned from master on 2017-08-08).
 
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

[master_cmake]: https://www.kitware.com/what-we-offer/#books
