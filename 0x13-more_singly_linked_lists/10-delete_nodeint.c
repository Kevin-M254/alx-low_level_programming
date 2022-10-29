#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: header node
 * @index: index of node to be deleted
 *
 * Return: 1 if succeded, -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		count++;
	}

	return (-1);
}
