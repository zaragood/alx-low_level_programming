#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head node of the list
 * This function deletes the head node of a listint_t linked list, and returns
 * the data contained in the deleted node.
 * It takes a double pointer to the head node of the list as its only argument
 * and updates *head to point to the new head of the list.
 * Return: the data of the deleted node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *temp;

	/* checks if head is empty */
	if (*head == NULL)
	{
		return (0);
	}

	/* initialize node_data with the data of head node */
	temp = (*head)->next;
	node_data = (*head)->n;
	/* Free *head and sets *head pointer to temp*/
	free(*head);
	*head = temp;

	/* returns the head node's data */
	return (node_data);
}
