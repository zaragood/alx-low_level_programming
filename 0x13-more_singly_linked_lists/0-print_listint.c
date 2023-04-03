#include "lists.h"
/**
 * print_listint - function that prints all element in a list
 * @h: pointer to the head node
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
