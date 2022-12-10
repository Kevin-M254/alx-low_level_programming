#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - frees memory
 * @head: header node
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t(dlistint_t *head);

	if (head == NULL)
		return;

	freememory = head->next;

	while (freememory != NULL)
	{
		free(head);
		head = freememory;
		freememory = freememory->next;
	}
	free(head);
}
