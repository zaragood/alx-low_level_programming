#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i = 0;

	/* Check if head is NULL and index is 0 */
	if (head == NULL && idx == 0)
	{
		return (NULL);
	}

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	/* inserting new_node at head */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* traversing the list to get node before the index */
	while (i < idx - 1)
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
		i++;
	}

	/* inserting neW_node at the end of a list */
	if (temp->next == NULL && i == idx - 1)
	{
		temp->next = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
