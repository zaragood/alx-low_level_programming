#include <stdio.h>
/**
 * main - size of evaluates the size of a variable
 * Return: 0
 */
int main(void)
{
	int intType;
	float floatType;
	long longType;
	long long int doubleType;
	char charType;

	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of a int: %lu bytes\n", sizeof(intType));
	printf("Size of a float: %lu bytes\n", sizeof(floatType));
	printf("Size of a long: %lu bytes\n", sizeof(longType));
	printf("Size of a long long int: %lu bytes\n", sizeof(doubleType));
	return (0);
}

