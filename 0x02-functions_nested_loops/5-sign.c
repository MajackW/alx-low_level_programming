#include <stdio.h>
#include "main.h"
/**
 * print_sign - Entry point
 *
 * Return: int success
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		putchar('1');
		return (-1);
	}
}
