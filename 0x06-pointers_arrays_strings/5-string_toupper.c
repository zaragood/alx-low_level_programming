#include "main.h"
/**
 * string_toupper -  lowercase letters of a string to uppercase
 *
 * Return: always 0
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
