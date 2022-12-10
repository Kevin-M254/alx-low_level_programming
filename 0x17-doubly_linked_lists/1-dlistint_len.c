#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * dlistint_len - get number of elements
 * @h: header list
 *
 * Return: No. of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
