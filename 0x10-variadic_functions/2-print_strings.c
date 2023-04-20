#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string to be printed
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
