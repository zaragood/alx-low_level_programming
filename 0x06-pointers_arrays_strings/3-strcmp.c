#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] == s2[i])
		{
			return (s1[i] - s1[i]);
		}
		else 
			return (0);
		i++;
	}
	return (0);
}
