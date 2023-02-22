#include "main.h"
#include <stdio.h>
/**
 * _abs - prints absolute value
 *@i: negetive number
 * Return: always 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = -(i);
	}
	else if (i >= 0)
	{
		i = i;
	}
	return (i);
}

