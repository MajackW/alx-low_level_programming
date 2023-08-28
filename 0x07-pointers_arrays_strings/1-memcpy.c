#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: where to copy 
 * @src: what to copy
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original;

	original = dest;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (original);
}
