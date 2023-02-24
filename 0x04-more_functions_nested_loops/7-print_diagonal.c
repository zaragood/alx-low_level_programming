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

	if (n <= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
