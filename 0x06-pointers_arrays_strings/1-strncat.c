#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *original = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != 0 && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (original);
}
