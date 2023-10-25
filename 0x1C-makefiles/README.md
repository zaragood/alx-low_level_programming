#0x1C-makefiles

#Introduction
This repository contains examples and explanations related to Makefiles in the context of low-level programming in the C language. Makefiles are essential tools in software development, allowing for efficient compilation and building of projects.

#Files Description
##0-Makefile
This Makefile demonstrates the basic structure of a Makefile. It includes rules for compiling C source files (main.c and functions.c) into an executable named school. The Makefile also includes a clean target to remove the generated executable.

##main.c
This C source file contains the main function, which serves as the entry point of the program. It demonstrates the usage of functions defined in functions.c.

##m.h.c
This C source file contains the implementation of functions used in the program. It includes a function called print_school().

##m.h
This header file contains the function prototypes for functions defined in functions.c.

#How to Use
To compile the program, use the following command:

Copy code
make -f 0-Makefile
To clean the generated files, use:

Copy code
make -f 0-Makefile clean
Example Usage
bash
Copy code
$ make -f 0-Makefile
$ ./school
School information
$ make -f 0-Makefile clean
