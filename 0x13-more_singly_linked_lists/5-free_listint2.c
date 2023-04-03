#include "lists.h"
/**
 * free_listint2 - function that free a node
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;

	while (*head != NULL)
	{
		*head = (*head)->next;
		temp = *head;
		free(temp);
	}
	*head = NULL;
}
