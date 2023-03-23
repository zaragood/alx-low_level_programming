#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function that executes a function given as a parameter
 * @array: array of integers
 * @size: the size of the array
 * @action:  is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/*check if array and action is NULL*/
	if (!array || !action)
		return;
	/*iterate through the array*/
	for (i = 0; i < size; i++)
	{
		/*assign each iteration of the array to action*/
		(*action)(array[i]);
	}
}
