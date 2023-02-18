#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * putchar - to print a character
 * Return: always 0
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		int Lower_x = tolower(x);

		putchar(Lower_x);
	}
	return (0);
}
