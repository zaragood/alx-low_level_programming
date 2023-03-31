#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: the given node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t number_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		number_nodes++;
		h = h->next;
	}
	return (number_nodes);
}
