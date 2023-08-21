#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other charcter
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	int length;
	char *p;
	int i;

	while (*p != '\0')
	{
		length++;
		p++;
	}
	for (i = 0; i <= length-1; i += 2)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
