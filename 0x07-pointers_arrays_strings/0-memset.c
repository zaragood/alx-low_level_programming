#include "main.h"
/**
 * _memset - fill a byte string with a byte value
 * @s: memory area of s
 * @n: number of bytes
 * @b: constant bytes
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char bytes = b;


	while (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			s[i] = bytes;
		}
		n--;
	}
	return (s);
}
