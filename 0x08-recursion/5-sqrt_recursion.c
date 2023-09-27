#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - finds natural squareroot
 * @n: number to find root
 * Return: integer the result
 */

int _sqrt_recursion(int n)
{
	int a;

	a = help(n, 0);

	return (a);
}

/**
 * help - helper function
 * @x: parameter
 * @y: parameter
 * Return: integer result
 */
int help(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y < x)
		return (help(x, y + 1));
	return (-1);
}
