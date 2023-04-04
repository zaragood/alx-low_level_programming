#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to first node
 * @index: index of the node that should be deleted
 * Return: 1 on sucess and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *previous;

	current = *head;
	previous = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (i < index && current != NULL)
		{
			previous = current;
			current = current->next;
			i++;
		}
		if (current == NULL)
		{
			return (-1);
		}
		previous->next = current->next;
		free (current);
		current = NULL;
	}
	return (1);
}
