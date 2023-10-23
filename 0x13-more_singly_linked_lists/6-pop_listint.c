#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes first element of a list
 * @head: pointer to beginning
 * Return: int value of first element
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	num = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (num);
}
