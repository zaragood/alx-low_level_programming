#include "main.h"
/**
 * _pow_recursion - calculates the power of a given number
 * @x: number to multiply
 * @y: number of times to multiply
 * return: if y<0 return -1, else return the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
