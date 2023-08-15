#include <stdio.h>
#include "main.h"
/**
 * _abs - Entry point
 *
 * Return: absolute value
 */
int _abs(int n)
{
	int ret;

	if (n < 0)
	{
		ret = -n;
		return (ret);
	}

	else
	{
		return (n);
	}
}
