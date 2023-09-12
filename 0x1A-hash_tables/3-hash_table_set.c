#include "hash_tables.h"
/**
 * hash_table_set -function that adds an element to the hash table.
 * @ht: pointer to the table
 * @key: key to be added
 * @value: value to be added
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_copy = NULL, *key_copy = NULL;
	hash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	/* duplicate the string*/
	key_copy = strdup(key);
	if (key_copy == NULL)
	{
		return (0);
	}

	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		free(key_copy);
		return (0);
	}

	/*get the index of the key*/
	index = key_index((const unsigned char *)key, ht->size);

	/*if the key exits*/
	if (ht->array[index] && *(ht->array[index]->key) == *key)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_copy;
		return (1);
	}
	/*if the key does not exits then create a memory for the new key and value*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		free(key_copy);
		return (0);
	}

	/*initialize the node*/
	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	/*adding the new_node at the beginning of the array*/
	if (ht->array[index])
		new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
