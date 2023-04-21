#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of arguments
 */

void print_all(const char * const format, ...)
{
	va_list lists;
	char *string;
	int i = 0;

	va_start(lists, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lists, int));
				break;
			case 'i':
				printf("%d", va_arg(lists, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(lists, double));
				break;
			case 's':
				string = va_arg(lists, char *);
				if (string == NULL)
					printf("(nil)");
				else
					printf("%s", string);
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
