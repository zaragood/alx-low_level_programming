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

	for  (x = 'A'; x <= 'Z'; x++)
	{
		int Lower_x = tolower(x);

		putchar(Lower_x);
	}
	for  (x = 'a'; x <= 'z'; x++)
	{
		int upper_x = toupper(x);

		putchar(upper_x);
	}
	putchar('\n');
	return (0);
}
