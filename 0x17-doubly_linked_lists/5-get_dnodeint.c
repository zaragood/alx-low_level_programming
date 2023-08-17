#include  "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: pointer to the linked list
 * @index: node at index to be returned
 * Return: the nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
