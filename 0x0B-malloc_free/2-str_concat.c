#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenate two strings
 * @s1: the source string
 * @s2: the string to be concatenated to s1
 * Return: a pointer to the concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *concat;

	if (s1 == NULL)
	{
		s2 = "";
	}
	if (s2 == NULL)
	{
		s1 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	concat = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}
