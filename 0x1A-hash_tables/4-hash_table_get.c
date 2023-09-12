#include "hash_tables.h"
/**
 * hash_table_get -  function that retrieves a value associated with a key.
 * @ht: pointer to the hash table
 * @key: pointer to the key
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	/*find the index*/
	index = key_index((const unsigned char *)key, ht->size);

	/*using a loop to loop through all the index*/
	while (ht->array[index] != NULL)
	{
		if (*(ht->array[index]->key) == *key)
		{
			return (ht->array[index]->value);
		}
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
