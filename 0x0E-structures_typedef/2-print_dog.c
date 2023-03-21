#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - funtion that prints a struct dog
 * @d: A pointer to the variable to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("nil");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("nil");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("nil");
	else
		printf("Owner: %s\n", d->owner);
}

