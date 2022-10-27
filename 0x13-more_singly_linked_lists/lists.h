#ifndef _S_LINK_LISTS_
#define _S_LINK_LISTS_

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: pointer to the next node
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif /*_S_LINK_LISTS_*/
