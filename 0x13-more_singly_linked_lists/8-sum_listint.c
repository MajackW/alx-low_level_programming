#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - finds the sum of all values
 * @head: pointer to first list
 * Return: int sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
