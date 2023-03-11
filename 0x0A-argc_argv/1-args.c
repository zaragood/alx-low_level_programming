#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: arguement count
 * @argv: argument command line
 *
 * Return: always 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
