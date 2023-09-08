#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: where size is the size of the array
 * Return: a pointer to the item or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = NULL;

	/* Allocates memory for the hash table*/
	table = (hash_table_t*) malloc(sizeof(hash_table_t));
	
	/*check if memory ewas sucessully allocated*/
	if (table == NULL)
	{
		return (NULL);
	}
	
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	/*check if memory ewas sucessully allocated*/
        if (table->array == NULL)
        {
                return (NULL);
        }

        for (i = 0; i < table->size; i++)
        {
                table->array[i] = NULL;
        }
	
	return (table);
}
