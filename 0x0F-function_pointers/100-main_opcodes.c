#include <stdio.h>
#include <stdlib.h>

void print_opcodes(int number_bytes, unsigned char opcodes[21]);

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument value
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int number_bytes, i;
	unsigned char opcodes[21];

	if (argc != 23)
	{
		printf("Error\n");
		return (1);
	}
	number_bytes = atoi(argv[1]);

	if (number_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < 21; i++)
	{
		opcodes[i] = (unsigned char) atoi(argv[i + 2]);
	}
	print_opcodes(number_bytes, opcodes);
	return (0);
}


/**
 * print_opcodes - function that prints opcode of its own main function
 * @number_bytes: number of bytes passed
 */
void print_opcodes(int number_bytes, unsigned char opcodes[21])
{
	int i;

	/*ptr = (unsigned char *) &print_opcodes;*/
	for (i = 0; i < number_bytes; i++)
	{
		printf("%02x", opcodes[i]);
	}
	printf("\n");
}
