#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * cal_num_coins - function to calculate the minimum nuber of coins
 * @cents: the amount of cents you need to give back
 * @coin_value: unlimited number of coins of value
 *
 * Return: error if argument is not 1 or 0 if number is negetive
 */
int cal_num_coins(int cents, int coin_value)
{
	int num_coins = cents / coin_value;

	cents %= coin_value;
	return (num_coins);
}
/**
 * main - the main function of the program
 * @argc: argument count
 * @argv: argument value
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num_coins = 0, num, j, i = 0;
	char *value;

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		value = argv[i];
		for (j = 0; value[j]; j++)
		{
			if (value[j] < '0' || value[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num += atoi(value);
		num_coins +=  num;
	}
	printf("%d\n", num_coins);
	return (0);
}
