#include "main.h"
/**
 * _strncat - function that concatenate two strings
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, a;

	len = 0;
	a = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[a] != '\0' && a < n)
	{
		dest[len] = src[a];
		a++;
		len++;
	}
	return (dest);
}
