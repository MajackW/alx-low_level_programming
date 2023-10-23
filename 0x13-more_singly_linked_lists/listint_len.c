#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the length of a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nm;

	nm = 0;

	if (h == NULL)
		return (nm);
	while (h != NULL)
	{
		nm++;
		h = h->next;
	}
	return (nm);
}
