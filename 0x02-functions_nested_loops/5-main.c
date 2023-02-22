#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(n + '0');
    _putchar('\n');
    n = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(n + '0');
    _putchar('\n');
    n = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(n + '0');
    _putchar('\n');
    n = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(n + '0');
    _putchar('\n');
    return (0);
}
