#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index of the bit to clear
 * Return: 1 0r -1 if there is an errro
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* checks if the index position is valid */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/* clears the bit at that given index using the AND operator */
	*n &= ~(1 << index);

	return (1);
}
