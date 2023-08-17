#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * return: void
 */

void print_most_numbers(void)
{
	int a;

	a = 0;

	while (a <= 9)
	{
		if (a == 2 || a == 4)
		{
			a++;
			continue;
		}
		else
		{
			putchar(a + '0');
		}
		a++;
	}

	putchar('\n');
}
