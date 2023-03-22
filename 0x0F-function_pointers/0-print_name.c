#include "function_pointers.h"
/**
 * print_name - A function name of type void
 * @name: a pointer to a character array that contains the name to be printed
 * @f: a pointer to a function that takes a pointer to a character array as an argument and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
