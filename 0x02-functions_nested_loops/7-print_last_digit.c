#include "main.h"
/**
 * print_last_digit - prints last digit
 * @int: number
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	lastDigit = n % 10;

	_putchar((lastDigit) + '0')
	return (lastDigit);
}
