#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string of 0 and 1
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;
	int len;

	len = 0;
	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);
		len++;
		b++;
	}
	res = convert(b - len, len);
	return (res);
}
/**
 * convert - helper for conversion
 * @s: strings of 0 and 1
 * @n: length of string
 * Return: unsigned int
 */
unsigned int convert(const char *s, int n)
{
	unsigned int total;
	int i;

	total = 0;

	for (i = n - 1; i >= 0; i--)
	{
		if (*s == '1')
		{
			total += pw(2, i);
		}
		s++;
	}
	return (total);
}
/**
 * pw - finds the power of a number
 * @a: base
 * @b: power
 * Return: result
 */
unsigned int pw(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * pw(a, (b - 1)));
}
