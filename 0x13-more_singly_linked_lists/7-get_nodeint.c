#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at a particular index
 * @head: pointer to beginning
 * @index: index of node to get
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	if (index == 0)
		return (head);

	while (head != NULL && index >= 0)
	{
		head = head->next;
		index--;
	}
	if (index == 0)
		return (head);
	return (NULL);
}
