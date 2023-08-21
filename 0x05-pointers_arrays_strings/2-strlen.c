#include <stdio.h>
#include "main.h"
/**
 * _strlen - Entry point
 * @s: string to count
 * Return: length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (0);
}
