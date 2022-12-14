#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_nodeint_end - adds a new node at the end
 * of a linked list
 * @head: head of linked list
 * @n: the value to add to list
 *
 * Return: Address of new element, NULL if none.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *temp;

	if (head)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new_list;
			return (temp);
		}
	}

	return (NULL);
}
