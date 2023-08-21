#include "main.h"
#include <string.h>
/**
 * _strncpy - function that copies a string
 * @dest:parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, x;

	i = 0;

	x = 0;

	while (i != n)
	{
		dest[x] = src[i];
		x++;
		i++;
		if (src[i] == '\0')
		{
			break;
		}
	}
	while (x != n)
	{
		dest[x++] = '\0';
	}
	return (dest);
}
