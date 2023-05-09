# 0x15-file_io

This is a repository containing C programs that demonstrate file input and output operations in Linux using the system calls `open()`, `close()`, `read()`, and `write()`. 

## Files

The following files are included in this repository:

### [0-read_textfile.c](./0-read_textfile.c)

This program reads a text file and prints its contents to the standard output.

### [1-create_file.c](./1-create_file.c)

This program creates a new file and writes text to it.

### [2-append_text_to_file.c](./2-append_text_to_file.c)

This program appends text to an existing file.

### [3-cp.c](./3-cp.c)

This program copies the content of one file to another.

## Usage

To compile any of the C programs in this repository, use the following command format:

```
gcc -Wall -Werror -Wextra -pedantic <filename>.c -o <output_filename>
```

To run the compiled program, use the following command format:

```
./<output_filename> <input_file> <output_file>
```

For example, to run the `0-read_textfile.c` program, use the following commands:

gcc -Wall -Werror -Wextra -pedantic 0-read_textfile.c -o readfile
./readfile test.txt

## Author

These programs were written by Azara Goodness as part of the low-level programming and algorithm curriculum at ALX.
