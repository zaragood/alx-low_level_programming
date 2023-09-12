#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i])
			{
				temp = ht->array[i]->next;
				/*checking for null pointer before freeing*/
				if (ht->array[i]->key != NULL)
				{
					free(ht->array[i]->key);
				}
				if (ht->array[i]->value != NULL)
				{
					free(ht->array[i]->value);
				}
				free(ht->array[i]);
				ht->array[i] = temp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
