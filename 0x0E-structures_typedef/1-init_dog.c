#include "dog.h"
/**
 * init_dog - a C function that takes a pointer to a struct dog
 * @d: variable that should be initialized
 * @name: first member of type char
 * @age: second member of type float
 * @owner: third member of type char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
