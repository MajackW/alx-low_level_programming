#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: size of square
 *
 * Return: void
 */

int main(void)
{
	print_square(-5);
	return (0);
}
void print_square(int size)
{
	int a;
	int b;

	a = 1;
	while (a <= size)
	{
		if (size <= 0)
		{
			putchar('\n');
			break;
		}
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
