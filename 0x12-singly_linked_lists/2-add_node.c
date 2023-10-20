#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add node to the beginning
 * @head: pointer to head of list
 * @str: string to add
 * Return: pointer to new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->next = *head;
	*head = temp;
	return (temp);
}
