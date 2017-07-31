This example demonstrates the usage of Doxygen special commands and some mpi features.

More detailed information relating to the usage of Doxygen functionality can be found in the [Special Commands] section
of the Doxygen manual.
 

In this example, the program is run assuming that two processes are available. In the case of this not being true (i.e.
running on a uniprocessor machine), the 'node' is being 'oversubscribed' and a dramatic performance degradation may be
observed. In general this should be avoided but it may be required when developing a multiprocessor build on a
uniprocessor machine. See this [MPICH FAQ answer][MPICH_FAQ_over] for a more detailed explanation of the problem and
possible remedies.
\todo Move this description to [ex1](../ex1) after adding a README file. At the same time, add installation instructions
for customized builds.

\todo Resume at 'in-text formula'.


# External Dependencies
 
- An MPICH implementation of the MPI standard ([version 3.2, ch3:nemesis, -02] tested).
	- The MPICH implementation was selected based on this [OpenMPI vs. MPICH] SO discussion. 
- Doxygen (version 1.8.11 tested).
 
# Compiling and executing the code
 
From the ROOT directory:
- Compile:
```{sh}
$ make
```
- Execute:
```{sh}
$ sh run.sh
```
 
 
<!-- References: (This is an HTML comment block which is hidden from doxygen and markdown) -->
---
[Special Commands]: https://www.stack.nl/~dimitri/doxygen/manual/commands.html
[OpenMPI vs. MPICH]: https://stackoverflow.com/questions/2427399/mpich-vs-openmpi
[MPICH_FAQ_over]: https://wiki.mpich.org/mpich/index.php/Frequently_Asked_Questions#Q:_Why_does_my_MPI_program_run_much_slower_when_I_use_more_processes.3F
