#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to be counted
 * Return: return the length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	length++;
	length = length + _strlen_recursion(s + 1);
	return (length);
}
