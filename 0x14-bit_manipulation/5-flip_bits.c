#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: parameter one
 * @m: parameter two
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number = 0;
	unsigned long int bits = n ^ m;

	while (bits != 0)
	{
		number += bits & 1;
		bits >>= 1;
	}
	return (number);
}
