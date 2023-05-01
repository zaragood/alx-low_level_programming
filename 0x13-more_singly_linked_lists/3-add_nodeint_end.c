#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the head node of a listint_t list
 * @n: integer value to be stored in the new node
 * Return: pointer to the newly added node
 *         NULL if adding the new node failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *temp;

	end_node = malloc(sizeof(listint_t));

	/* checking if memory allocation was sucessfull */
	if (end_node == NULL)
	{
		return (NULL);
	}
	/* initializing the memory location of end_node */
	end_node->n = n;
	end_node->next = NULL;

	/* if head is equal to null let head point to the end node */
	if (*head ==  NULL)
	{
		*head = end_node;
		return (end_node);
	}

	temp = *head;
	/* traversing the list untill you get to the last node */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	/* let the last node npow point to the end node */
	temp->next = end_node;
	/* return the the node added at the end of the list */
	return (end_node);
}
