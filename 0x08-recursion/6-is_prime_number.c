#include "main.h"
#include <stdio.h>

int prime_number(int n, int i);

/**
 * is_prime_number - function that returns a value if its a prime number
 * @n: the value to be checked
 * Return: returns 1 if its a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_number(n, 1));
}

/**
 * prime_number - checks if the number is a prime number
 * @n: the number to be checked
 * @i: the number of times to iterate
 *
 * Return: a prime number else return 0
 */
int prime_number(int n, int i)
{
	if ((n % i == 0) && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (prime_number(n, i + 1));
}
