#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head pointer to the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int data;
	size_t number_nodes = 0;

	while (temp != NULL)
	{
		data = temp->n;
		printf("%d\n", data);
		temp = temp->next;
		number_nodes++;
	}
	return (number_nodes);
}
