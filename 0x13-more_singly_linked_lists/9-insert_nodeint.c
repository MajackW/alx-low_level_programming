#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at agiven index
 * @head: pointer to first value
 * @idx: index to insert
 * @n: value to insert
 * Return: pointer to inserted
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *temp1;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (idx == 0 && *head == NULL)
		*head = temp;
	else
	{
		temp1 = *head;
		while (temp1->next != NULL && idx <= 1)
		{
			temp1 = temp1->next;
			idx--;
		}
		if (idx == 1)
		{
			temp->next = temp1->next;
			temp1->next = temp;
			return (temp);
		}
	}
	return (NULL);
}
