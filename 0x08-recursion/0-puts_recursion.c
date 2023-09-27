#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints recursively
 * @s: pointer to string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	else
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
