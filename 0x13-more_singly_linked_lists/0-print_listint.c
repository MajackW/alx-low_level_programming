#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - prints all elements of a list
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nm;

	nm = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nm++;
		h = h->next;
	}
	return (nm);
}
