#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: number
 *
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	x  = n % 10;
	if (n < 0)
	{
		x = -x;
	}
	return (x);
}
