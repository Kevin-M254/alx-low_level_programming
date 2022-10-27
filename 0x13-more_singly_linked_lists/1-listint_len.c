#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts elements of a linked list
 * @h: head of linked list
 *
 * Return: No. of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			count++;
		}
	}

	return (count);
}
