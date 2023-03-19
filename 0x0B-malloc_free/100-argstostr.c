#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: first params
 * @av: secod params
 * Return: a pointer
 */
char *argstostr(int ac, char **av)
{
	char *new_string;
	int i, j, k = 0;
	int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*cal the length of the strings*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	/*allocate memory to the concate string*/
	new_string = (char *) malloc((len + 1) * sizeof(char));
	if (new_string == NULL)
	{
		return (NULL);
	}
	/*copy each string into the new string addin a newlin char*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_string[k++] = av[i][j];
		}
		new_string[k++] = '\n';
	}
	new_string[k] = '\0';
	return (new_string);
}
