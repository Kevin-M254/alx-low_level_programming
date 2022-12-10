#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - get node
 * @head: header node
 * @index: index of desired node
 *
 * Return: value pointer.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodes = 0;
	dlistint_t *temporal = head;

	if (head == NULL)
		return (NULL);

	while (temporal != NULL)
	{
		nodes++;
		if (nodes - 1 == index)
			return (temporal);
		temporal = temporal->next;
	}
	return (NULL);
}
