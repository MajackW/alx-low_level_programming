#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 *
 * c - character to test
 *
 * Return: returns int value
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
