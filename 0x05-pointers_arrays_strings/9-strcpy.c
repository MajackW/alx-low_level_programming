#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: copy
 * @src: copy
 * Return: char address
 */
char *_strcpy(char *dest, char *src)
{
	char *p;

	p = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (p);
}
