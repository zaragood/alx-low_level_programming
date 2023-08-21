#include "main.h"
/**
 * _memcpy - function that copy memory area of
 * @n: bytes from memory area
 * @src: memory area
 * @dest: second memory area
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int iterate;


	for (iterate = 0; n > 0; iterate++)
	{
		dest[iterate] = src[iterate];
		n--;
	}
	return (dest);
}
