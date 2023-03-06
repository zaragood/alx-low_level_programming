#include "main.h"
/**
 * _strchr - Locates a character in a string.
 * @s: pointer to string
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	int i;

	char character = c;

	i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == character)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
