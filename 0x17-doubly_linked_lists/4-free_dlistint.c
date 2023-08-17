#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
