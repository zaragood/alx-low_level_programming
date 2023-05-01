#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to the head node of the linked list.
 * @index: index of the node to be returned.
 * This function takes a pointer to the head node of a listint_t linked list
 * and an unsigned integer index as its arguments.
 * It returns a pointer to the nth node of the linked list
 * If the index is greater than or equal to the number of
 * nodes in the list, the function returns NULL.
 * Return: pointer to the nth node of the linked list, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	/* loop through to know when i is == to index */
	for (i = 0; i < index && temp != NULL; i++)
	{
		/* Move to the next node */
		temp = temp->next;
	}
	/* if the node does not exist, return NULL */
	if (temp == NULL)
	{
		return (NULL);
	}
	/* return the node at the specified index */
	return (temp);
}
