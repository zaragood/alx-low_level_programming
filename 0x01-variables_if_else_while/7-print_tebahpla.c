#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * putchar - to print a character
 * Return: always 0
 */
int main(void)
{
	int x;

	for  (x = 'Z'; x >= 'A'; x--)
	{
		int Lower_x = tolower(x);

		putchar(Lower_x);
	}
	putchar('\n');
	return (0);
}
