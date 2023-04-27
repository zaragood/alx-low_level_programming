#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/* create a memory location for the new node using malloc*/
	new_node = malloc(sizeof(list_t));

	/*check if allocation of memory was sucessful */
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* use the allocated memory by initializing it*/
	new_node->len = strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	/* return the new node*/
	return (new_node);
}
