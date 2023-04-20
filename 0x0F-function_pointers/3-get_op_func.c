#include "calc.h"
/**
 * get_op_func - selects the operation to perform
 * @s: operator passed as argument
 * Return: a pointer to the function that matches the operator or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
	}
	return (ops[5].f);
}
