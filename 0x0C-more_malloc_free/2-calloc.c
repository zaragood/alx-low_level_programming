#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function allocates memory for an array of nmemb elements
 * @nmemb: an array of elements to be allocated memory
 * @size: size of each element in the array
 *
 * Return: a pointer or null at termination
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	/*cal total size of the memory block that needs to be allocated*/
	call = (char *) malloc(nmemb * size);
	{
		if (call == NULL)
		{
			return (NULL);
		}
	}
	/*loop through all the elements in the allocated mem*/
	for (i = 0; i < nmemb * size; i++)
		*((char *)call + i) = 0;

	return (call);
}
