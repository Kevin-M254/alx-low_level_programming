#include "lists.h"

/*
 * print_listint_safe - prints a linked list safely
 * @head: first node in list
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t  *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->next);
		if (diff > 0)
			head = head->next;
		else
		{

