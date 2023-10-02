#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array malloc
 * @size: size of array
 * @c: char to fill
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
