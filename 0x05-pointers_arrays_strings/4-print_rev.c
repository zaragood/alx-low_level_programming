#include "main.h"
/**
 * print_rev - prints string in reverse order
 * @s: string to be printed
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int i, x;

	x = 0;

	while (s[x] != '\0')
		x++;
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
