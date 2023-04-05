#include "lists.h"
/**
 * reverse_listint - function that reverse a linked linked
 * @head: pointer to first node
 * Return: pointer to the reverse node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	temp1 = NULL;
	temp2 = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = temp2;
	}
	*head = temp1;
	return (*head);
}
