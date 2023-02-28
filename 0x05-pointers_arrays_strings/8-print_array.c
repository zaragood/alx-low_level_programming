#include "main.h"
/**
 * print_array - prints array
 * @a: first array
 * @n: second array
 *
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
