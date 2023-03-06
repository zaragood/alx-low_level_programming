#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: second parameter
 *
 * Return: return the lenght
 */
unsigned int _strspn(char *s, char *accept)
{	int i;
	int j;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
			}
		}
	}
	return (length);
}
