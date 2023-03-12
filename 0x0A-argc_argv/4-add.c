#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry points
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 1 if argv is not a digit
 */
int main(int argc, char *argv[])
{
	int sum, num, i, j;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		char *values = argv[i];

		for (j = 0; values[j]; j++)
		{
			if (values[j] < '0' || values[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(values);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
