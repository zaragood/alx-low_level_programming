#include <stdio.h>
/**
 * sizeof - size of evaluates the size of a variable
 * Return: 0
 */
int main(void)
{
	int intType;
	float floatType;
	long longType;
	double doubleType;
	char charType;

	printf("Size of a int: %lu bytes\n", sizeof(intType));
	printf("Size of a float: %lu bytes\n", sizeof(floatType));
	printf("Size of a long: %lu bytes\n", sizeof(longType));
	printf("Size of a double: %lu bytes\n", sizeof(doubleType));
	printf("Size of a char: %lu byte\n", sizeof(charType));
	return (0);
}

