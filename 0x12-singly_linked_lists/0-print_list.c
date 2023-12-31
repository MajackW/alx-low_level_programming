#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints a singly linked list
 * @h: list to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
