#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - entry point
 * @str: pointer to string
 * Return: pointer to str
 */

char *_strdup(char *str)
{
	char *pstr;
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);

	pstr = (char *)malloc((sizeof(char) * len) + 1);
	if (pstr == NULL)
		return (NULL);
	while (*str != '\0')
	{
		*pstr = *str;
		pstr++;
		str++;
	}
	free(pstr);
	return (pstr);
}
