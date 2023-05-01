#include  "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: double pointer to the head node of a listint_t list
 * @n: integer value to be stored in the new node
 *
 * Return: pointer to the newly added node
 *		NULL if adding the new node failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node  = malloc(sizeof(listint_t));
	/* check if memory was sucessuffly allocated to new_node */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* initialize the new_node created */
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	/* return */
	return (new_node);
}
