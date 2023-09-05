#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - ebtry point
 * @size: size of buffer
 * @c: char to intialize
 * Return: pointer to buffer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
