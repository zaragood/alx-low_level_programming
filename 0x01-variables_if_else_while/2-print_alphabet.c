#include <stdio.h>
/**
 * main - entry point
 * for - for loop statement
 * Return: Always 0
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
	int lower_x = tolower(x);

	putchar(lower_x);

	}
	return (0);
}
