#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t number_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number_node++;
		h = h->next;
	}
	return (number_node);
}
