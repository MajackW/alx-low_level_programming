#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - entry point
 *
 * @n: number
 *
 * Return: int value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start (num, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg (num, int);
	}

	va_end(num);
	return (sum);
}
