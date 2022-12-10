#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - add new node at the end
 * @head: tread list
 * @n: valus=e of new node
 *
 * Return: new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *endnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}

	else
	{
		endnode = *head;
		while (endnode->next != NULL)
			endnode = endnode->next;
		newnode->prev = endnode;
		endnode->next = newnode;
	}
	return (newnode);
}
