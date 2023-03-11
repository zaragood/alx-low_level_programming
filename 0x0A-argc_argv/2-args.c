#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * @argc: arguement count
 * @argv: argument command line
 *
 * Return: always 0
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
