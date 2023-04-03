#include "lists.h"
/**
 * add_nodeint_end - function that adds node at the end of list
 * @head: pointer to the firt node
 * @n: value to be initialied with
 * Return: new_node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *temp;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = end_node;
	}
	return (end_node);
}
