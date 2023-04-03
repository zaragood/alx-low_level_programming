#include "lists.h"
/**
 * listint_len - funtion that returns the number of element
 * @h: pointer to the first node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr)
	{
		num_elem++;
		ptr = ptr->next;
	}
	return (num_elem);
}
