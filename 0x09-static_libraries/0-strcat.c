#include "main.h"
/**
 * _strcat - function that concatenate two strings
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	/*store lenght of dest in the len variable*/
	len = 0;

	while (dest[len] != '\0')
	{
		++len;
	}
	/*concanate the two string*/
	for (i = 0; src[i] != '\0'; ++i, ++len)
	{
		dest[len] = src[i];
	}
	dest[len] = '\0'; /*terminates the null character for dest*/
	return (dest);
}
