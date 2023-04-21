#ifndef CALC_3_H
#define CALC_3_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - struct type
 * @op: operator
 * @f: function pointer
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);

int (*get_op_func(char *s))(int, int);
#endif /*CALC_3_H*/
