#include "calc.h"
/**
 * main - performs a  simple arithmetic operations
 * @argc: nuber of arguments passed
 * @argv: pointer to the argument passed
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] || !get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	printf("%i\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
