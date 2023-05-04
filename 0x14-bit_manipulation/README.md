0x14. C - Bit manipulation
This repository contains programs written in C for the "0x14. C - Bit manipulation" project at Holberton School. The goal of these programs is to introduce and practice bit manipulation operations in C.

Bit manipulation
Bit manipulation is the process of manipulating individual bits in a binary number. In C, we can perform bit manipulation using bitwise operators. The following bitwise operators are commonly used for bit manipulation:

& (AND): performs a bitwise AND operation on two numbers. The result is a number with the bits set to 1 only if both input bits are 1.
| (OR): performs a bitwise OR operation on two numbers. The result is a number with the bits set to 1 if either input bit is 1.
^ (XOR): performs a bitwise XOR operation on two numbers. The result is a number with the bits set to 1 if the input bits are different.
~ (NOT): performs a bitwise NOT operation on a number. The result is a number with all the bits inverted (0 becomes 1 and 1 becomes 0).
<< (left shift): shifts the bits of a number to the left by a certain number of positions. The result is a number with the bits shifted left and padded with 0s on the right.
>> (right shift): shifts the bits of a number to the right by a certain number of positions. The result is a number with the bits shifted right and padded with 0s on the left.
Programs
The following programs are included in this repository:

0-binary_to_uint.c
This program converts a binary string to an unsigned integer. The binary string is passed as an argument to the binary_to_uint function, which returns the corresponding unsigned integer. If the input string is not a valid binary number, the function returns 0.

1-print_binary.c
This program prints the binary representation of a number. The number is passed as an argument to the print_binary function, which prints the binary digits from the most significant bit to the least significant bit.

2-get_bit.c
This program gets the value of a bit at a certain index in a number. The number and index are passed as arguments to the get_bit function, which returns the value of the bit at the specified index (either 0 or 1).

3-set_bit.c
This program sets the value of a bit at a certain index in a number to 1. The number and index are passed as arguments to the set_bit function, which sets the bit at the specified index to 1 and returns the updated number.

4-clear_bit.c
This program sets the value of a bit at a certain index in a number to 0. The number and index are passed as arguments to the clear_bit function, which sets the bit at the specified index to 0 and returns the updated number.

5-flip_bits.c
This program calculates the number of bits that need to be flipped in order to convert one number to another. The two numbers are passed as arguments to the flip_bits function, which returns the number of bits that are different between the two numbers.

How to use
To use these programs, you will need a C compiler such as gcc. Clone this repository and compile the programs using the following commands:

ruby
Copy code
$ gcc -Wall -Werror -Wextra -pedantic *.c -o program_name
Replace program_name with the name of the program you want to compile (e.g. 0-binary_to_uint).
