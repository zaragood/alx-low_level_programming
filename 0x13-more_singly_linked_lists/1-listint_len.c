#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head node of a linked listint_t list
 * Return: the number of elements in the linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_nodes = 0;

	/* while h is pointing to a list of nodes */
	while (h != NULL)
	{
		 number_nodes++;
		 /* point to the next node the list */
		 h = h->next;
	}
	/* return the  number of nodes in the linked list*/
	return (number_nodes);
}
