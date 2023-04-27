#include "lists.h"
/**
 * print_list - Prints all the elements of a singly linked list
 *
 * @h: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 *
 * Description: This function takes a pointer to the head node of a singly
 * linked list and prints the value of each node in the list.
 * If a node contains a NULL string the function prints "(nil)" instead.
 * The function returns the number of nodes in the list.
 **/
size_t print_list(const list_t *h)
{
	size_t number_nodes = 0;

	/* trasversing the list */
	while (h != NULL)
	{
		/* the function checks if the str field is NULL */
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		/* increment this variable for each node in the list */
		number_nodes++;
		h = h->next;
	}
	return (number_nodes);
}
