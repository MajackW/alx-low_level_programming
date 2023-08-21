#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string to print
 * Return: void
 */
void print_rev(char *s)
{
	int length;
	int i;

	length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
