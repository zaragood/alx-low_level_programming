#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to a pointer to the head of a linked list
 * Return: pointer to the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *next = NULL;

	/* traverse the list to update each next of the node */
	while(*head != NULL)
	{
		/* only updating each link partr of the each node */
		next = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = next;
	}
	*head = temp;

	return (*head);
}
