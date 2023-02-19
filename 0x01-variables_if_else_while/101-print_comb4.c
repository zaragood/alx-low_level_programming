#include <stdio.h>
/**
 * main - entry point
 * Return: always zero
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
				if (num1 != num2 && num2 != num3)
				{
					putchar((num1) + '0');
					putchar((num2) + '0');
					putchar((num3) + '0');

					if (num1 != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}
