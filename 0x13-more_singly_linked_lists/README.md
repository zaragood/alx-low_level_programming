# 0x13-more_singly_linked_lists

This repository contains C programs that demonstrate the use of singly linked lists, building on the concepts covered in the previous [0x12-singly_linked_lists](https://github.com/USERNAME_HERE/holbertonschool-low_level_programming/tree/main/0x12-singly_linked_lists) repository.

## Data Structure

This directory uses the following struct to represent a node in the linked list:

```c
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

Each node contains an integer value `n` and a pointer to the next node in the list.

## Files

The following files are included in this repository:

### `lists.h`

This header file contains the function prototypes for all functions used in this directory.

### `0-print_listint.c`

This program contains a function that prints all the elements of a `listint_t` linked list.

### `1-listint_len.c`

This program contains a function that returns the number of elements in a `listint_t` linked list.

### `2-add_nodeint.c`

This program contains a function that adds a new node at the beginning of a `listint_t` linked list.

### `3-add_nodeint_end.c`

This program contains a function that adds a new node at the end of a `listint_t` linked list.

### `4-free_listint.c`

This program contains a function that frees a `listint_t` linked list.

### `5-free_listint2.c`

This program contains a function that frees a `listint_t` linked list and sets the head to `NULL`.

### `6-pop_listint.c`

This program contains a function that deletes the head node of a `listint_t` linked list and returns the head node's data.

### `7-get_nodeint.c`

This program contains a function that returns the `n`th node of a `listint_t` linked list.

### `8-sum_listint.c`

This program contains a function that returns the sum of all the data in a `listint_t` linked list.

### `9-insert_nodeint.c`

This program contains a function that inserts a new node at a given position in a `listint_t` linked list.

### `10-delete_nodeint.c`

This program contains a function that deletes the node at a given position in a `listint_t` linked list.

## Usage

To compile any of the C programs in this directory, you can use the following command:

```
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output>
```

Replace `<filename.c>` with the name of the C file you want to compile and `<output>` with the name you want to give to the compiled program.

For example, to compile `0-print_listint.c`, you can use the following command:

```
gcc -Wall -Werror -Wextra -pedantic 0-print_listint.c -o print_listint
```

To run the compiled program, you can use the following command:

```
./<output>
```

Replace `<output>` with the name you gave to the compiled program.

For example, to run the compiled program `print_listint`, you can use the following command:

```
./print_listint
```

This will execute the program and print the output to the terminal.

## Author

This directory is written and maintained by Azara Goodness Chibueyim
