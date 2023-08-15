#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void (no return value)
 */
void print_alphabet_x10(void)
{
	char a;
	char b;

	a = 0;

	while (a < 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			putchar(b);
			b++;
		}
		putchar('\n');
		a++;
	}
}
