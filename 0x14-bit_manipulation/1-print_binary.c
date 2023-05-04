#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: the decimal number to be printed in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/* check if n is 0 or 1 */
	if (n == 0)
	{
		_putchar ('0');
		return;
	}

	if  (n == 1)
	{
		_putchar ('1');
	}
	if (n > 1)
	{
		/* calls the function recursively shifted by 1 */
		print_binary(n >> 1);

		/* checking whether the least significant bit of n is 1 or 0 */
		_putchar((n & 1) ? '1' : '0');
	}
}
