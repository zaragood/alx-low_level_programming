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
	int num_coins = 0;

	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins += cal_num_coins(cents, 25);
	num_coins += cal_num_coins(cents, 10);
	num_coins += cal_num_coins(cents, 5);
	num_coins += cal_num_coins(cents, 2);
	num_coins += cal_num_coins(cents, 1);

	printf("%d\n", num_coins);
	return (0);
}
