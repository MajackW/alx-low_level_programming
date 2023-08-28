#include <stdio.h>
#include "main.h"
/**
 * _strchr - finds a character in a string
 * @s: pointer to string
 * @c: character to search
 * Return: pointer to found char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
