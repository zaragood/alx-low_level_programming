#include "hash_tables.h"
/**
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_copy = NULL;
	hash_node_t *new_node= NULL;

	if (ht == NULL && key == NULL)
	{
		return (0);
	}
	/* duplicate the string*/
	value_copy = strdup(value);
	if (value_copy == NULL)
	{
		return (0);
	}
	/*get the index of the key*/
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] && *(ht->array[index]->key) == *key)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_copy;
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(value_copy);
		free(new_node->key);
		return (0);
	}
	new_node-> value = (value_copy);
	new_node->next = NULL;

	if (ht->array[index])
	{
		new_node->next = ht->array[index];
	}
	ht->array[index] = new_node;

	return (1);
}

			
