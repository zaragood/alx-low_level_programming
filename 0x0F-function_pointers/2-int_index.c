#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which cmp returns non-zero
 * -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	/* check if size is less than zero*/
	if (size <= 0)
		return (-1);
	/*check if array and cmp are empty*/
	if (!array || !cmp)
                return (0);
	/*loop through the array*/
	for (i = 0; i < size; i++)
	{
		/*compare the values*/
		if (cmp(array[i]) != 0)
			return (i);
	}
	/*return -1 if no element matches*/
	return (-1);
}
