#include <stdio.h>
#include "main.h"

/**
 * print_triangle - entry point
 * @size: size of triangle
 * Return; void
 */

void print_triangle(int size)
{
	int a;
	int b;

	a = 0;
	if (size <= 0)
		putchar('\n');
		return;
	while (a < size)
	{
		b = 0;
		while (b <= a)
		{
			putchar('#');
			b++;
		}
		putchar('\n');
		a++;
	}
}
