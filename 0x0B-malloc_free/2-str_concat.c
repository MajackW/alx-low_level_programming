#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concats two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	int l1;
	int l2;
	int t;
	int i;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = cnt(s1);
	l2 = cnt(s2);
	t = l1 + l2 + 1;
	con = (char *)malloc(sizeof(char) * t);
	if (con == NULL)
		return (NULL);
	con = conc(s1, s2, con);
	con[t] = '\0';
	return (con);
}
/**
 * cnt - counts
 * @s: string
 * Return: integer
 */
int cnt(char *s)
{
	int n;

	n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
/**
 * conc - concatenates strings
 * @s1: first string
 * @s2: second string
 * @con: memory
 * Return: new string
 */
char *conc(char *s1, char *s2, char *con)
{
	int i;
	int l1;
	int l2;
	int t;

	l1 = cnt(s1);
	l2 = cnt(s2);
	t = l1 + l2;

	for (i = 0; i < l1; i++)
	{
		con[i] = s1[i];
	}
	for (i = 0; i < l2; i++)
	{
		con[l1 + i] = s2[i];
	}
	return (con);
}
