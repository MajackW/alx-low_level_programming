#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - finds the length of elements
 * @h: linked list
 * Return: number of elemnts
 */
size_t list_len(const list_t *h)
{
	size_t n;
	n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
