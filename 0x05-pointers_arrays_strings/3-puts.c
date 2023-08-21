#include <stdio.h>
#include "main.h"
/**
 * _puts - prints string to screen
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	while(*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');
}
