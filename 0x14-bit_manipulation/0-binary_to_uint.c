#include "main.h"
/**
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int digit = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '0')
		{
			digit *= 2;
		}
		else if (*b == '1')
		{
			digit = (digit << 1) | 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (digit);
}
