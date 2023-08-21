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
	char *p;

	p = s;
	length = 0;

	while (*p != '\0')
	{
		length++;
		p++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
