#include "lists.h"
#include <string.h>
/**
 * add_node - funtion that adds a new node to a linked list
 * @head: a double pointer to the head of the linked list
 * @str: a pointer to the string
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	/*allocate memory to the new_node*/
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*initialize the new node*/
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	/*assigning head to new node*/
	new_node->next = *head;
	*head = new_node;

	/*return a pointer to the new_node*/
	return (new_node);
}
