#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	va_list in;
	unsigned int i;

	va_start (in, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg (in, char *);
		if (s == NULL)
		{
			s = "(nil)";
		}
		if ( i != n - 1 && separator != NULL)
		{
			printf("%s", s);
			printf("%s", separator);
		}
		else
			printf("%s", s);
	}
	va_end(in);
	putchar('\n');
}
