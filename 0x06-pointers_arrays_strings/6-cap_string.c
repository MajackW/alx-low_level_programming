#include <stdio.h>
#include "main.h"
/**
 * cap_string - capitalize letters
 * @str: string to capitalize
 * Return: char capitalized string
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
	}
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
		else
			i++;
	}
	return (str);
}
