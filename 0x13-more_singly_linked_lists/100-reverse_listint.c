#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked list
 * @head: header node
 *
 * Return: Pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}

	return (NULL);
}
