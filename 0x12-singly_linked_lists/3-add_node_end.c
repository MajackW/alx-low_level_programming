#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node to the end of a list
 * @head: pointer to beginning of list
 * @str: string to write
 * Return: pointer to the new location
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *temp1;

	temp = *head;
	temp1 = malloc(sizeof(list_t));
	if (temp1 == NULL)
		return (NULL);
	temp1->str = strdup(str);
	if (temp1->str == NULL)
	{
		free(temp1);
		return (NULL);
	}
	temp1->len = strlen(str);
	temp1->next = NULL;
	if (*head == NULL)
		*head = temp1;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = temp1;
	}
	return (temp1);
}
