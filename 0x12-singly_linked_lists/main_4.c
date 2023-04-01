#include <stdio.h>
#include "lists.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t head = {NULL, 0, 0};
	list_t tail = {"School", 6, 0};
	size_t n;

	head.next = &tail;
	n = print_list(&head);
	printf("-> %lu elements\n", n);
	return (0);
}
