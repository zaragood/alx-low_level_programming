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
	list_t *new_node, *temp;

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
	/*If the list is empty, make the new node the head*/
	if (*head == NULL)
	{
		*head = new_node;
	}
	/*else transverse to the end of the list and add new_node*/
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
			temp->next = new_node;
		}
	}
	/*return a pointer to the new_node*/
	return (new_node);
}
