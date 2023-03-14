#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - akkocates sufficient mem for the ccopy of a string
 * @str: pointer to a string to be copied
 *
 * Return: a pointer or null
 */
char *_strdup(char *str)
{
	int i, length;
	char *strd;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	strd = malloc(sizeof(char) * length + 1);

	if (strd == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		strd[i] = str[i];
	}
	return (strd);
}
