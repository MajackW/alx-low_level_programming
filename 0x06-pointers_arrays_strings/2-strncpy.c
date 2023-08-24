#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies string
 * @dest: where to copy
 * @src: source
 * @n: number
 * Return: pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original = dest;

	while (*src != '\0' && n> 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (original);
}
