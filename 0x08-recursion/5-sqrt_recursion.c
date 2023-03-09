#include "main.h"
#include <stdio.h>

int square_root(int a, int i);

/**
 * _sqrt_recursion - returns the natural square root of an interger
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root else return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 0));
}

/**
 * square_root - checks for the square root of a number
 * @a: the value to be checked
 * @i: the value to multiply
 * Return: the square root
 */
int square_root(int a, int i)
{
	if ((i * i) == a)
	{
		return (i);
	}
	if ((i * i) > a)
	{
		return (-1);
	}
	return (square_root(a, i + 1));
}
