#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: pointer to a matrix of integer
 * @size: size of an the square matrix
 *
 * Return: return the sum of the digonal matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int mat1 = 0;
	int mat2 = 0;

	for (i = 0; i < size; i++)
	{
		mat1 = mat1 + a[i];
		a = a + size;
	}
	a = a - size;

	for (i = 0; i < size; i++)
	{
		mat2 = mat2 + a[i];
		a = a - size;
	}
	printf("%d, %d\n", mat1, mat2);
}
