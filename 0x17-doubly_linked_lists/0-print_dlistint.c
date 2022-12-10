#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print elements of a list
 * @h: header node
 *
 * Return: Nodes present.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
