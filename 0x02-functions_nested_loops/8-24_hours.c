#include "main.h"
/**
 * jack_bauer - prints the minutes of the day
 * void: return nothing
 */
void jack_bauer(void)
{
	int x;
	int y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y > 60; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
	}
	_putchar('\n');
}
