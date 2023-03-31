#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a new node to a list
 * @head: double pointer to the first node
 * @str: pointer to a string
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *add_node;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
	{
		return (NULL);
	}
	add_node->str = strdup(str);
	add_node->len = strlen(str);
	add_node->next = NULL;

	if (*head == NULL)
	{
		*head = add_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = add_node;
	}
	return (add_node);
}
