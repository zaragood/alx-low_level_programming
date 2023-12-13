#include "search_algos.h"
#include <stdlib.h>
/**
 * linear_search -  function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: array is a pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: And value is the value to search for
 * Return: the first index where value is located, else, -1
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;
    (void)value;

    /*check if array is NULL*/
    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value Value checked array[%lu] = [%d]]\n", i, array[i]);

        /* check if value at index i equals search value*/
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
