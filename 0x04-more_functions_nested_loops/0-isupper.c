#include "main.h"
/**
 * _isupper - upper case alphabet
 * @c: a character
 *
 * Return: always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
