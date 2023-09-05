#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - entry point
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int len;
	int len1;
	char *str;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = strlen(s1);
	len1 = strlen(s2);
	len += len1;

	str = (char *)malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (NULL);
	strcpy(str, s1);
	strcat(str, s2);

	return (str);
