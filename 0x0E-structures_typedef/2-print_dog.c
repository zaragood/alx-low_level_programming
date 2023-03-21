#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - funtion that prints a struct dog
 * @d: A pointer to the variable to be printed
 */
void print_dog(struct dog *d)
{
	/*checkes if the struct pointer is not null*/
	if (d != NULL)
	{
		/*print nil if it is null or the name*/
		printf("Name: ");
		if (d->name != NULL)
		{
			printf("%s\n", d->name);
		}
		else
		{
			printf("(nil)\n");
		}
		/*print nil if it is null or the age*/
		printf("Age: ");
		if (d->age >= 0)
		{
			printf("%f\n", d->age);
		}
		else
		{
			printf("(nil)\n");
		}
		/*prints nil if it is null or the owner*/
		printf("Owner: ");
		if (d->owner != NULL)
		{
			printf("%s\n", d->owner);
		}
		else
		{
			printf("(nil)\n");
		}
	}
}
