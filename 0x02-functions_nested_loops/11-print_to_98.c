#include "main.h"
/**
 * print_to_98 - prints number from 0 to 98
 * @n: interger value
 *
 * void: returns nothing
 */
void print_to_98(int n);
{
	for (n = 0; n <= 98; n++)
	{
		_putchar((n) + '0');
		_purchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}

