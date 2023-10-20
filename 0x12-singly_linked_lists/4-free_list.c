#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the list
 * @head: pointer to beginning of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = temp->next;
		free(temp->str);
		free(temp);
	}
}
