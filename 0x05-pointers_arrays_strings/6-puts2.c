#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 * return: always 0
 */
void puts2(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\n'; i++)
	{
		if (str[i] <= 4)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
