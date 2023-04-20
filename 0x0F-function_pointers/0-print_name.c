#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: function pointer to print_name
 */
void print_name(char *name, void (*f)(char *))
{
	f = print_name;
}
