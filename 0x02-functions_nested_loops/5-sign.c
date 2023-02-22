#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: sign of a number
 *
 * Return: 1 if positive
 * -1 if negetive
 *  and 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
}
