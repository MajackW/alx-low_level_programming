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
	char *str;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(sizeof(str) * size);
	if (str == NULL)
		return (NULL);
	str[0] = c;

	return (str);
}
