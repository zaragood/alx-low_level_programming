#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function of the program
 * @argc: argument count
 * @argv: argument value
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int num_coins = 0, value, i = 0, num;
	int number[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		value = atoi(argv[1]);

		if (value  < 0)
		{
			printf("0\n");
			return (0);
		}

		num = sizeof(number) / sizeof(number[0]);
		for (i = 0; i < num; i++)
		{
			num_coins += value / number[i];
			value %= number[i];
		}
	}
	printf("%d\n", num_coins);
	return (0);
}
