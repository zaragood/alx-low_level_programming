#include "main.h"
/**
 * _strpbrk - function that search a string for any set of bytes
 * @s: first parameter
 * @accept: second parameter
 *
 * Return: returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
