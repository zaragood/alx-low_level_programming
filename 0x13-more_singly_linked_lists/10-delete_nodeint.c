#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at given index
 * @head: head of the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	/* Check if list is empty */
	if (*head == NULL)
		return (-1);
	
	temp = *head;

	/* Check if head node needs to be deleted */
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* Traverse list to node before index */
	for (i = 0; i < index - 1 && temp != NULL; i++)
		temp = temp->next;

	/* Check if index is out of range */
	if (temp == NULL || temp->next == NULL)
		return (-1);

	/* Delete node at given index */
	prev = temp->next;
	temp->next = prev->next;
	free(prev);

	return (1);
}

