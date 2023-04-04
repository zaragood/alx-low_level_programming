#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @index: index of the node, starting at 0
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		if (index == 0)
		{
			return (NULL);
		}
		head = head->next;
		i++;
	}
	return (head);
}
