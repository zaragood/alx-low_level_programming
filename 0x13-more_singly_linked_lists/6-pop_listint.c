#include "lists.h"
/**
 * pop_listint - function thats deletes the head node
 * @head: pointer to the first node
 * Return: head->n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;

	free(temp);
	return (data);
}
