#include "variadic_functions.h"
/**
 * print_char - prints a character
 * @arg: argument to be printed
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - prints an integer
 * @arg: argument to be printed
 */
void print_int(va_list arg)
{
	printf("%i", va_arg(arg, int));
}

/**
 * print_float - prints a float number
 * @arg: argument to be printed
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_str - prints a string
 * @arg: argument to be printed
 */
void print_string(va_list arg)
{
	char *string = va_arg(arg, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 * print_all- prints anything
 * @format: list of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, k = 0;
	char *character = "";

	opt format_funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_start(list, format);
	while (format && format[i])
	{
		while (k < 4)
		{
			if (format[i] == format_funcs[k].symbol)
			{
				printf("%s", character);
				format_funcs[k].ptr(list);
				character = ", ";
				break;
			}
			k++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
