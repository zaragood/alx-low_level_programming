#include "main.h"
/**
 * factorial - function that calculate the factorial of a given number
 * @n: the given number
 *
 * Return: if n<0 return -1 to indicate an error else return the factorial
 */
int factorial(int n)
{
	if  (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
