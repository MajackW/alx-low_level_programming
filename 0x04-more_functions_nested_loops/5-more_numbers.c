#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	a = 0;

	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			putchar(b + '0');
			b++;
		}
		putchar('\n');
		a++;
	}
	putchar('\n');
}
