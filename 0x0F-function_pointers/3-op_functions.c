#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The result of dividing a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the modulus of two integers
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The remainder of dividing a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
