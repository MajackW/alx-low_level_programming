#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches for a string of a set of bytes
 * @s: pointer to main string
 * @accept: pointer to string to search
 * Return: pointer to found occurence
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;
	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
