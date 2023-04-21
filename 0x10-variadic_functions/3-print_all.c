#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list lists;
	char *s;
	char ch;
	int i = 0;

	va_start(lists, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				ch = va_arg(lists, int);
				printf("%c", ch);
				break;
			case 'i':
				printf("%d", va_arg(lists, int));
				break;
			case 'f':
				printf("%f", va_arg(lists, double));
				break;
			case 's':
				s = va_arg(lists, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(lists);
}
