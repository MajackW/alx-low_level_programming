#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	char *p;
	int i;
	int h_len;

	length = 0;
	p = str;

	while (*p != '\0')
	{
		length++;
		p++;
	}
	h_len = length / 2;
	for (i = h_len; i <= length - 1; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
