#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, 98 if error
 */
int main(int argc, char **argv)
{
	unsigned int i, j, len1 = 0, len2 = 0, carry, tmp;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			return (98);
		}
		len1++;
	}

	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] < '0' || argv[2][i] > '9')
		{
			printf("Error\n");
			return (98);
		}
		len2++;
	}

	result = calloc(len1 + len2, sizeof(*result));
	if (!result)
		return (1);

	for (i = len1; i--;)
	{
		carry = 0;
		for (j = len2; j--;)
		{
			tmp = (argv[1][i] - '0') * (argv[2][j] - '0') + carry;
			carry = tmp / 10;
			result[i + j + 1] += tmp % 10;
			if (result[i + j + 1] > 9)
			{
				result[i + j] += result[i + j + 1] / 10;
				result[i + j + 1] %= 10;
			}
		}
		result[i + j + 1] += carry;
	}

	i = *result == 0 ? 1 : 0;
	for (; i < len1 + len2; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);

	return (0);
}
