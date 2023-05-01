#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head node of a listint_t list
 * Return: void
 */
void free_listint(listint_t *head)
{
	/* temporal storage to store each node */
	listint_t *temp;

	/* traverse the list and free each node */
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
