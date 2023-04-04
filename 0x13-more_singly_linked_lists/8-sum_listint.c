#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of a list
 * @head: pointer to the first node
 * Return: sum of the data or NULL
 */
int sum_listint(listint_t *head)
{
	int sum = 0, data;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		data = head->n;
		sum += data;
		head = head->next;
	}
	return (sum);
}
