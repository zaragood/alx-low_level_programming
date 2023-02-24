#include "main.h"
/**
 * print_diagonal - program that prints a digonal line
 * @n: number of lines
 *
 * Reaturn: always 0
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('\\');
			i++;
		}
		_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
