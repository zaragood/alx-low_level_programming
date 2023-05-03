#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to the head node of the list
 * Return: address of the node whwere loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	/* Checks if there is a node in the list */
	if (head == NULL || head->next == NULL)
		return (NULL);
	/* if there is a list they both starts at same point */
	slow = head;
	fast = head;

	/* while fast and slow and fas->next are not pointing to NULL */
	while (slow && fast && fast->next)
	{
		/* Move slow one step forward */
		slow = slow->next;
		/* move fast two steps forward */
		fast = fast->next->next;

		/* loop is detected*/
		if (slow == fast)
		{
			/* initilize slow with head so its starts from the beginging of the llist*/
			slow = head;

			/* while slow is not == to fast they should move at same pace */
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;

				/* once a loop is detected again return fast or slow */
				if (slow == fast)
				{
					return (fast);
				}
			}
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}
