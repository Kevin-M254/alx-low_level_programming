#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - add a new node
 * @head: header node
 * @n: value of new node list
 *
 * Return: address of new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return ();

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
	}
	else
	{
		newnode->next = *head;
		newnode->prev = NULL;
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}
