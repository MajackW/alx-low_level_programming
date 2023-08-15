#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int ret;

	ret = n % 10;

	putchar('0' + ret);

	return (ret);
}
