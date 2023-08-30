#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string and new line
 * @s: pointer to array of characters
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
