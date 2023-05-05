#include "main.h"
/**
 * get_endianness -  function that checks the endianness
 * Return: void
 */
int get_endianness(void)
{
	unsigned int number = 3;
	char *ch = (char *)&number;

	/* checkes if it is a little-endian and returns 1*/
	if (*ch)
	{
		return (1);
	}
	/* else it is a big-endian and return 0*/
	else
		return (0);
}
