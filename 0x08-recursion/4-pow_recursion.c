#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - finds the power of a number
 * @x: number to find power of
 * @y: times the number is raised
 * Return: the multiplies num
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
	{
		res = x * _pow_recursion(x, y - 1);
		return (res);
	}
}
