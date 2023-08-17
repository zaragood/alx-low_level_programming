#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a list
 * @h: pointer to the linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t number_nodes = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		number_nodes++;
	}
	return (number_nodes);
}
