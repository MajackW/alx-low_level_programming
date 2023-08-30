#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to string
 * Return: int length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + (_strlen_recursion(s + 1));
}
