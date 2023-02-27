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

	i = 0;
	while (s[i] != '\0')
		i++;
	for (x = i - 1; x >= 0; x--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
