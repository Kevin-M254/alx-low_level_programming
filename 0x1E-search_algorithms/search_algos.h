#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @index: index of node in the list
 * @next: pointer to next node
 *
 * Description: singly linked list for search
 * algorithms
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list
 * @n: integer
 * @index: index of the node in the list
 * @next: pointer to next node
 * @express: pointer to next node in list
 *
 * Description: singly linked list for search
 * algos
 */

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);

#endif
