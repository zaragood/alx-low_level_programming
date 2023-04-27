#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end_node = NULL;

	/* check if the string is empty*/
	if (str == NULL)
		return (NULL);

	/* create a new node using malloc */
	new_node = malloc(sizeof(list_t));

	/* check if allocation of memory was sucessfull*/
	if (new_node == NULL)
		return (NULL);

	/* use the memory allocated */
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	/* if head is equal to NULL aassign the new_node directly to head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		end_node = *head;
		/* trasvers the list till it reaches the end node */
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}
		/* assign the end node to next to point to the new node*/
		end_node->next = new_node;
	}
	return (new_node);
}
