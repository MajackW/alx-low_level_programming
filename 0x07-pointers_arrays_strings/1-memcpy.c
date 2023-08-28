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
	unsigned int i;

	original = dest;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (original);
}
