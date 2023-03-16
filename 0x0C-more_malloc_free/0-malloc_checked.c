#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory to an int
 * @b: unsigned integer type
 *
 * Return: a pointer to the allocated memory or 98 on termination
 */
void *malloc_checked(unsigned int b)
{
	void *mal;

	mal = malloc(b);
	if (mal == NULL)
	{
		exit(98);
	}
	return (mal);
}
