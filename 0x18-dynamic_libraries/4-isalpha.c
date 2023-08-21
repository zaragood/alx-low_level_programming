#include "main.h"
/**
 * _isalpha - checks for alphabetical character
 *@c: alphabetical character
 *
 * Return: 1 if its an alphabet
 * and 0 if not an alphabet
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
