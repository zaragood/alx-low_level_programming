#include "hash_tables.h"
/**
 * hash_djb2 - hash function implementing the djb2 algorithm.
 * @str: data to be hashed
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int c;

	hash_value = 5381;
	while ((c = *str))
	{
		hash_value = ((hash_value << 5) + hash_value) + c; /* hash * 33 + c */
		str++;
	}
	return (hash_value);
}
