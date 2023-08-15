#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a;

	a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
}

