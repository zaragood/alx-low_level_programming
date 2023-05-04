#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 * Return: converted number or 0 if its null
 */
unsigned int binary_to_uint(const char *b)
{
	/* the number to be returned */
	unsigned int digit = 0;

	/* checking if b is NULL */
	if (b == NULL)
	{
		return (0);
	}
	/* Loop through the string untill it gets to a '\0' bit */
	while (*b != '\0')
	{
		/* checking if the string contains '0' and '1' */
		if (*b == '0')
		{
			/* multiply result by 2 */
			digit *= 2;
		}
		else if (*b == '1')
		{
			/* if b == '1' set the LSB to 1 */
			digit = (digit << 1) | 1;
		}

		/* return 0 if the string does not contain 0 and 1 */
		else
		{
			return (0);
		}
		b++;
	}
	/* return the converted digit */
	return (digit);
}
