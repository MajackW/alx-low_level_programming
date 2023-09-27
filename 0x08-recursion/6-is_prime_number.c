#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: integer 1 0r 0
 */
int is_prime_number(int n)
{
	int a;

	a = help(n, 2);

	return (a);
}

/**
 * help - helper function
 * @x: number to check
 * @y: starting point
 * Return: integer 0 or 1
 */

int help(int x, int y)
{
	if (x == 1 || x < 0)
		return (0);
	if (x % y == 0)
		return (0);
	if (x % y != 0 && y * y < x)
		return (help(x, y + 1));
	return (1);
}
