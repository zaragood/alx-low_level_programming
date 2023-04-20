#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: first parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, number, sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(list, unsigned int);
		sum += number;
	}
	va_end(list);
	return (sum);


}
