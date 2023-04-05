#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return 0;
	}
	i++;
	while (head != NULL && i < index)
	{
		printf("its working\n");
		if (index == 0)
		{
			return NULL;
		}
		head = head->next;
		i++;
	}
	if (i != index)
	{
		return NULL;
	}
	printf("%u\n", i);
	return (head);
}

