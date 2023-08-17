#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: length
 * Return: void
 */
void print_diagonal(int c)
{
	int a;
	int b;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	a = 0;
	while (a < n)
	{
		b = 0;
		while (b < a)
		{
			putchar(' ');
			b++;
		}
		putchar('\\');
		putchar('\n');
		a++
	}
}
