#include <stdio.h>
#include "main.h"
/**
 *rev_string - prints in reverse
 * @s: string to print
 * Return: void
 */
void rev_string(char *s)
{
	int length;
	int i;
	char *p;
	char temp;

	p = s;
	length = 0;

	while (*p != '\0')
	{
		length++;
		p++;
	}

	for (i = 0; i < length/2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
