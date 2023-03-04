#include "main.h"
/**
 * print_rev - prints string in reverse order
 * @s: string to be printed
 *
 * Return: always 0
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
