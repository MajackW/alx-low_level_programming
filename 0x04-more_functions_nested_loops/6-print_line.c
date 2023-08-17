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

	a = 1;

	while (a <= n)
	{
		if (n < 0)
		{
			break;
		}

		putchar('_');
		a++;
	}
	putchar('\n');
}
