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

		if (Lower_x != 'q' && Lower_x != 'e')
			putchar(Lower_x);

	}

	putchar('\n');
	return (0);
}
