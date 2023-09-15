#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - entry point
 * @separator: pointer
 * @n number
 * Return: void
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nm;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		nm = va_arg(num, int);
		if (i < n - 1 && separator != NULL)
		{
			printf("%d", nm);
			printf("%s", separator);
		}
		else
			printf("%d", nm);
	}
	va_end(num);

	putchar('\n');
}
