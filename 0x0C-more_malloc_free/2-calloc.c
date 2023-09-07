#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - entry point
 * @nmemb: elements
 * @size: of char
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	unsigned tz;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tz = nmemb * size;
	p = malloc(tz);

	if (p == NULL)
		return (NULL);
	char *char_p = (char *)p;
	for (i = 0; i < tz; i++)
	{
		char_p[i] = 0;
	}
	return (p);
}
