#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - gets sum
 * @head: head
 *
 * Return: sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
