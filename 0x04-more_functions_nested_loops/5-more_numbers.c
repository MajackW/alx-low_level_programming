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
			if (b > 9)
			{
				putchar((b / 10) + '0');
			}
			putchar((b % 10) + '0');
			b++;
		}
		putchar('\n');
		a++;
	}
}
