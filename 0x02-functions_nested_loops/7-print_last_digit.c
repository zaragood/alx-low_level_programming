#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: number
 *
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	int x  = n % 10;

	if (n < 0)
	{
		x = -x;
	}
	if (n > 0)
	{
		x = x;
	}
	_putchar(x + '0');
	return (x);
}
