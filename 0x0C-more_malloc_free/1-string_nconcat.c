#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - allocates memory to a concatenated string
 * @s1: first parameter
 * @s2: second parameter
 * @n: size of integer
 *
 * Return: a ponter on sucess or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*unsigned int n specifies the max number of char in s2 to the end of s1*/

	char *concat;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0' && len2 < n)
		len2++;

	concat = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];

	concat[len1 + len2] = '\0';
	return (concat);
}
