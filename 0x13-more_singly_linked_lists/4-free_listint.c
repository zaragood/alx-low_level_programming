#include "lists.h"
/**
 * free_listint - function that frees a list
 * @head: pointer to first node
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while(temp != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
