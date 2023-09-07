#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenating
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned i;
	unsigned l1;
	unsigned l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	l2 = strlen(s1);

	p = (char *)malloc(l1 + n + 1);
	if (p == NULL)
		return (NULL);
	strcpy(p, s1);
	if (n >= l2)
	{
		strcat(p, s2);
		return (p);
	}
	for (i = l1; i < l1 + n; i++)
	{
		p[i] = *s2;
		s2++;
	}
	p[l1 + n] = '\0';
	return (p);
}
