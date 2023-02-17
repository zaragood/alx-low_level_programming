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

	printf("%lu bytes\n", sizeof(intType));
	printf("%lu bytes\n", sizeof(floatType));
	printf("%lu bytes\n", sizeof(doubleType));
	printf("%lu byte\n", sizeof(charType));
	return (0);
}

