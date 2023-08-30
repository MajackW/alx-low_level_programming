#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - finds the square root
 * @n: number to find squareroot
 * Return: squareroot of n
 */
int _sqrt_recursion(int n)
{
	int res;
	
	res = helper(n, 1);

	return (res);
}

/**
 * helper - finds squareroot
 * @n: number
 * @y: number
 * Return: squareroot
 */

int helper(int n, int y)
{
	int res;

	if (n < 0)
		return (-1);
	if (y * y == n)
		return (y);
	if (y * y > n)
		return (-1);
	res = helper(n, y + 1);
	return (res);
}
