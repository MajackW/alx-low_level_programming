#include <stdio.h>
#include "main.h"

/**
 * _memset - sets memory to constant
 * @s: pointer to memory
 * @b: constant to set
 * @n: number of bytes
 * Return: pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
