#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: pointer to first element
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *rent;

	rent = *head;
	while (rent != NULL)
	{
		temp = rent;
		rent = rent->next;
		temp->next = NULL;
		free(temp);
	}
	*head = NULL;
}
