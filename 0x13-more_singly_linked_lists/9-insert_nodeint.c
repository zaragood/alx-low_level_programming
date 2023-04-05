#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given index
 * @head: pointer to the first node
 * @idx: index of the list
 * @n: the given position
 * Return: new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i = 1;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (i < idx && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i != idx && temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
