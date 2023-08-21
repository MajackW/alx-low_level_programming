#include <stdio.h>
#include "main.h"
/**
 * _atoi - entry point
 * @s: string to convert
 * Return: int value of integer
 */
int _atoi(char *s)
{
	int sign;
	int res;
	int digit;

	sign = 1;
	res = 0;

	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (res > (2147483647 - digit) / 10)
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		res = res * 10 + digit;
		s++
	}
	return (res * sign);

}
