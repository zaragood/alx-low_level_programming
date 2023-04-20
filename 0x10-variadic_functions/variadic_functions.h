#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * struct print_format
 * @symbol: symbol to be printed
 * @ptr: function pointer
 */
typedef struct print_format
{
	char symbol;
	void (*ptr)(va_list arg);
} opt;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
#endif /*VARIADIC_FUNCTIONS_H*/
