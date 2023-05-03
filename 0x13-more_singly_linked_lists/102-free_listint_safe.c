#include "lists.h"
/**
 * free_listint_safe - function that free list with a loop
 * @h: double pointer to the head of the list
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		tmp = current;
		current = current->next;
		free(tmp);

		if (tmp <= current)
			break;
	}
	*h = NULL;
	return (count);
}
