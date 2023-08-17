#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: number of times
 *
 * Return: void
 */

void print_line(int n)
{
	int a;

	a = 0;

	while (a <= n)
	{
		putchar('_');
		a++;
	}
	putchar('\n');
}
