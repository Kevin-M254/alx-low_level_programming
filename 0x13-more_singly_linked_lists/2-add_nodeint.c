#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - adds a new node at the beginning
 * of a linked list
 * @head: head of a linked list
 * @n: value of new node
 *
 * Return: Address of new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head != NULL)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = *head;
		*head = new_list;

		return (new_list);
	}

	return (NULL);
}
