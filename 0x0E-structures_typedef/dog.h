#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines a new type of struct
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: The `struct dog` is a C structure that represents a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
