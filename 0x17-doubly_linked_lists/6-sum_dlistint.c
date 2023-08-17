#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: pointer to the linked list
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0, data;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		data = head->n;
		sum += data;
		head = head->next;
	}
	return (sum);
}
