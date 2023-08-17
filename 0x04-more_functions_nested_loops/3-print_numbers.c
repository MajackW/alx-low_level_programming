#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry point
 *
 * return: Always 0 (sucess)
 */

void print_numbers(void)
{
	int c;

	c = 0;

	while (c < 10)
	{
		putchar(c);
		c++;
	}

	putchar('\n');
}
