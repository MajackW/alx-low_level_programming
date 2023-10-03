#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concats all arguments
 * @ac: number of args
 * @av: list of args
 * Return: pointer to new str
 */
char *argstostr(int ac, char **av)
{
	int n;
	int i;
	int j;
	char *s;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	n = count(ac, av) + ac + 1;
	s = (char *)malloc(sizeof(char) * n);
	if (s == NULL)
		return (NULL);
	p = s;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*p = av[i][j];
			p++;
			j++;
		}
		*p = '\n';
		p++;
	}
	*p = '\0';
	return (s);
}
/**
 * count - counts strlen
 * @ac: number of args
 * @av: array of args
 * Return: integer
 */
int count(int ac, char **av)
{
	int n;
	int i;
	char *s;

	n = 0;
	for(i = 0; i < ac; i++)
	{
		s = av[i];
		while (*s != '\0')
		{
			n += 1;
			s++;
		}
	}
	return (n);
}
