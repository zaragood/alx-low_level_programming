#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to first node
 * @n: date to be initializes to the created node
 * Return: address of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
