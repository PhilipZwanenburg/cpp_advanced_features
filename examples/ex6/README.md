This example demonstrates the introductory usage of Google Test, working through the tutorial of 'Primer.md' and
providing a working example on the level of the first sample unit test examples in 'Samples.md' in the [docs
directory][gt_docs]. The steps in the [Google Test README][gt_readme] were followed to incorporate Google Test as part
of an existing project using CMake.


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

[gt_docs]: https://github.com/google/googletest/blob/master/googletest/docs/
[gt_readme]: https://github.com/google/googletest/blob/master/googletest/
<!-- [gt_readme]: https://github.com/google/googletest/blob/master/googletest/README.md -->
