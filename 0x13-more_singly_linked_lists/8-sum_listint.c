#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data in a listint_t
 * @head: pointer to the node of a list
 * Return: if list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
