#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <stddef.h>
/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(argv[2]) == '/') || (*(argv[2]) == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (get_op_func)(argv[2])(num1, num2);
	printf("%d\n", result);
	return (0);
}
