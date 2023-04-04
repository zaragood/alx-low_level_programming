#include "lists.h"
/**
 * free_listint2 - function that free a node
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;


	while (*head != NULL)
	{
		current  = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}
