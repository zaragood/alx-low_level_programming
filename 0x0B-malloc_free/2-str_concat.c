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
	int len1 = 0, len2 = 0, i, j;
	char *concat;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* count length of s1 */
	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	/* count length of s2 */
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	/* allocate memory for concatenated string */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	/* copy s1 to concat */
	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	/* copy s2 to concat */
	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[len1 + j] = s2[j];
	}
	/* add null terminator to end of concat */
	concat[len1 + j] = '\0';

	return (concat);
}
