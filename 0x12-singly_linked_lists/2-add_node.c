#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adss a new node at beginning of list
 * @head: original linked list
 * @str: string to add to node
 *
 * Return: Address of new linked list, Null if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}

/**
 * _strlen - Returns length of a string
 * @s: string to count
 *
 * Return: Length of string.
 */
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
