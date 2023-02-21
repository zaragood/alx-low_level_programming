#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On sucess 1
 * On error, -1 is returned, and errno is set appropraitely.
 */
#include main.h
int _putchar(char c)
{
	char c = "_putchar";

	while (c)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (write(1, &c, 1));
}
