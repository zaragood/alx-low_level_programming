#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the unsigned long int to get the bit from
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* checkes if the index i valid */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	/* return the value of the bit */
	return ((n >> index) & 1);
}
