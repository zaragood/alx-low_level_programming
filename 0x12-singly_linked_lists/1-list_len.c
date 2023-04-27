#include "lists.h"
/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t list_len(const list_t *h)
{
	/*counting the elements in the list*/
	size_t number_nodes = 0;

	/*traversing the list*/
	while (h != NULL)
	{
		/*increment number_nodes*/
		number_nodes++;
		/*points to the next element in the list */
		h = h->next;
	}
	return (number_nodes);
}

