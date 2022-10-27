#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - adds all elements of a linked list
 * @head: header node
 *
 * Return: Sum of all elements, 0 if empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
