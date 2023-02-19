#include <stdio.h>
/**
 * main - entry point
 * printf - to print a string
 * Return: always 0
 */
int main(void)
{
	char x;

	for  (x = 0; x < 10; x++)
	{
	putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
