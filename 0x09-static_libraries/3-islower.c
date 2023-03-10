#include "main.h"
/**
 * _islower - a function that checks for lower case alphabet
 *@c: lower case letter
 * Return: always (0)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
