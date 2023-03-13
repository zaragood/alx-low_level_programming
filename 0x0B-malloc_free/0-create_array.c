#include "main.h"
#include <stdlib.h>
/**
 * create_array - a pointer an array
 * @size: number of bytes
 * @c: and array of characters
 * Return: Null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
