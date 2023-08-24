#include <stdio.h>
/**
 * _strcat - joins two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *originald = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0\;
	return originald;
}
