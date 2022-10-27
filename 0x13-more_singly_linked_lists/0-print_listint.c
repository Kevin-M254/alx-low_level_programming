#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: head of linked list
 *
 * Return: No. of nodes in linked list.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
