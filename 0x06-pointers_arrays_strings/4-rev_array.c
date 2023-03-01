#include "main.h"
/**
 * reverse_array - a function that reverse an array of integers
 * @a: first parameter
 * @n: second parameters
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		i = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = i;
	}
}
