#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number_nodes = 0;
	const listint_t *hare, *tortoise;

	if (head == NULL)
	{
		exit(98);
	}
	tortoise = head;
	hare = head->next;

	while (hare != NULL && hare < tortoise)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		number_nodes++;
		tortoise = tortoise->next;
		hare = hare->next;

		if (hare != NULL && hare < tortoise)
		{
			hare = hare->next;
		}
	}
	printf("[%p] %d\n",(void *)tortoise, tortoise->n);
	number_nodes++;
	
	return (number_nodes);
}
