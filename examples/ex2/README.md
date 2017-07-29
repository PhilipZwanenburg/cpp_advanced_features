This example demonstrates the basic usage of doxygen.
 
More detailed information can be found in the [Doxygen manual][doxygen_m].

This is a markdown file used as the mainpage for the project. See the [markdown support page][md_sup] for an
introduction to the usage of markdown.
 
# Library dependencies
 
- An MPI library (MPICH 3.2 tested).
- Doxygen (version 1.8.11 tested).
	- `$ sudo apt-get install doxygen graphviz`
 
 
# Generating documentation

Note that the required documentation files are already present as part of the project.
 
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
	- HTML_TIMESTAMP         = YES
	- GENERATE_LATEX         = NO
	- LATEX_TIMESTAMP        = YES (Will only be used when latex documentation generation is enabled)
- Run doxygen:
```{sh}
$ doxygen doxygen.cfg
```
 
The generated HTML documentation can be viewed by pointing a HTML browser to the index.html file in the html directory.
 
 
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
 
 
<!-- References: (This is an HTML comment block which is hidden from doxygen) --> ---
	[doxygen_m]: https://www.stack.nl/~dimitri/doxygen/manual/index.html
	[md_sup]: http://www.stack.nl/~dimitri/doxygen/manual/markdown.html#md_page_header
