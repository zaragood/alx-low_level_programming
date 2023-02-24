#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	long prime = 612852475143;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (dive = 3; div < (prime / 2); dive += 2)
		{
			if ((prime % div == 0)
					prime /= div;
		}
	}
	printf("%d\n", prime;
		return (0);
}
