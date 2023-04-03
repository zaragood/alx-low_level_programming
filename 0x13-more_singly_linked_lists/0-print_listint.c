#include "lists.h"
/**
 * print_listint - function that prints all element in a list
 * @h: pointer to the head node
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		num_nodes++;
		ptr = ptr->next;
	}
	return (num_nodes);
}
