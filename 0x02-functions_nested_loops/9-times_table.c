#include "main.h"
/**
 * times_table - prints the time table
 *
 * void: returns nothing
 */

void times_table(void)
{
	int number;
	int multiple;
	int product;

	for (number = 0; number < 10; number++)
	{
		_putchar('0');

		for (multiple = 1; multiple < 10; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiple;

			if (product < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + '0');
			}
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
