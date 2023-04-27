#include "lists.h"
/**
 * free_list - Frees a linked list_t list
 * @head: Pointer to the head of the linked list
 *
 * Description: This function frees all the nodes of a linked list_t list.
 * It starts at the head of the list and iterates through all the nodes,
 * freeing the memory allocated for each node. The function does not return
 * anything.
 */
void free_list(list_t *head)
{
	list_t *temp;

	/* traverse the list*/
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
