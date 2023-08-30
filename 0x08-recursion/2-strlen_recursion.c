#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to string
 * Return: int length of string
 */

int _strlen_recursion(char *s)
{
	int res;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		res = 1 + _strlen_recursion(s + 1);

	}
	return (res);
}
