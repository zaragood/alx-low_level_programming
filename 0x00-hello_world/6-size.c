#include <stdio.h>
/**
 * sizeof - size of evaluates the size of a variable
 * Return: 0
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	print("%lu bytes\n", sizeof(intType));
	print("%lu bytes\n", sizeof(floatType));
	print("%lu bytes\n", sizeof(doubleType));
	print("%lu byte\n", sizeof(charType));
	return (0);
}

