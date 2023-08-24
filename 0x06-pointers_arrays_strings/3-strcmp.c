#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second tstring
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int cs1;
	int cs2;

	cs1 = 0;
	cs2 = 0;
	while (*s1 != '\0')
	{
		cs1++;
		s1++;
	}
	while (*s2 != '\0')
	{
		cs2++;
		s2++;
	}
	if (cs1 == cs2)
	{
		return (0);
	}
	else if (cs1 > cs2)
	{
		return (15);
	}
	else if (cs2 > cs1)
	{
		return (-15);
	}
}
