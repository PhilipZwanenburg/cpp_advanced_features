This example demonstrates the basic usage of Doxygen.
 
More detailed information can be found in the [Doxygen manual].

This is a markdown file used as the mainpage for the project. See the [markdown support page] for an
introduction to the usage of markdown.
 
# Library dependencies
 
- An MPI library (MPICH 3.2 tested).
```{sh}
$ sudo apt-get install mpich2 libcr-dev
```
- Doxygen (version 1.8.11 tested).
```{sh}
$ sudo apt-get install doxygen graphviz
```
 
 
# Generating documentation

Note that the required documentation directory and files are already present as part of the project.
 
- Make a documentation directory:
```{sh}
$ mkdir doc && cd doc
```
- Create a configuration file:
```{sh}
$ doxygen -g doxygen.cfg
```
- Modify the configuration file:
	- PROJECT_NAME           = "C++ Advanced Features"
	- STRIP_FROM_PATH        = /full_path_to_the_'examples'_directory/
	- WARN_AS_ERROR          = YES
	- INPUT                  = ../
	- FILE_PATTERNS          = *.cpp *.hpp *.ipp *.md
	- RECURSIVE              = YES
	- USE_MDFILE_AS_MAINPAGE = README.md
	- SOURCE_BROWSER         = YES (Include links to source code)
	- HTML_DYNAMIC_SECTIONS  = YES (Fold certain sections of the documentation by default)
	- HTML_TIMESTAMP         = YES
	- GENERATE_LATEX         = NO
	- LATEX_TIMESTAMP        = YES (Will only be used when latex documentation generation is enabled)
- Strip the comments from the config file if desired (the [configuration section][Doxygen config] of the manual can be
  consulted for the description of the fields):
```{sh}
$ doxygen -s -u doxygen.cfg
```
- Run doxygen:
```{sh}
$ doxygen doxygen.cfg
```
 
The generated HTML documentation can be viewed by pointing an HTML browser to the 'index.html' file in the html
directory.
 
 
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
[Doxygen manual]: https://www.stack.nl/~dimitri/doxygen/manual/index.html
[markdown support page]: http://www.stack.nl/~dimitri/doxygen/manual/markdown.html#md_page_header
[Doxygen config]: https://www.stack.nl/~dimitri/doxygen/manual/config.html
