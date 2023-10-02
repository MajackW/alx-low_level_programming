#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - duolicates a string
 * @str: pointer to string
 * Return: pointer to str
 */

char *_strdup(char *str)
{
	int i;
	int s;
	char *dup;

	if (str == NULL)
		return (NULL);

	s = cnt(str);
	dup = (char *)malloc(sizeof(char) * s);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
	{
		dup[i] = *str;
		str++;
	}
	return (dup);
}
/**
 * cnt - counts words
 * @s: string to count
 * Return: integer
 */
int cnt(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
