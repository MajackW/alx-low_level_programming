#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int a;
	int b;

	a = 1;
	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	while (a <= size)
	{

		b = 1;
		while (b <= size)
		{
			putchar('#');
			b++;
		}

		putchar('\n');
		a++;
	}
}
