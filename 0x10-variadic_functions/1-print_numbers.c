#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, number;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(list, unsigned int);
		printf("%d", number);

		if ((separator != NULL) && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
