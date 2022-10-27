#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *get_nodeint_at_index - returns nth node of a listint_t
 * @head: header node
 * @index: index of the node
 *
 * Return: Value of node, NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
