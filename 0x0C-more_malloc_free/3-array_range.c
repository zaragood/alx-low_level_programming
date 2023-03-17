#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum value in the array
 * @max: maximum value in the array
 *
 * Return: a pointer or NULLon termination
 */
int *array_range(int min, int max)
{
	int *range, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	range = (int *) malloc(sizeof(int) * size);
	if (range == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		range[i] = min + i;
	return (range);
}
