#include "hash_tables.h"
/**
 * key_index- hash function that gives you the index of key.
 * @key: key is the key
 * @size: size is the size of the array of the hash table
 * Return: the the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
