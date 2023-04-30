#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_t - single linked list of int
 *
 * @n: integer
 * @next: the next  struct
*/

typedef struct listint_t
{
		int n;
		struct listint_t *next;
} listint_t;

/*prototype functions */
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif