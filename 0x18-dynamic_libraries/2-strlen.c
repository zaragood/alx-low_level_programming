#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: pointer to a string
 * Return: always 0
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	for (; *s++;)
		length++;

	return (length);
}
