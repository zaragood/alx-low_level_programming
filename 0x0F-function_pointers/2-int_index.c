#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: pointer to elements of an array
 * @size: size of an array
 * @cmp: function pointer to compare
 * Return: -1 or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
