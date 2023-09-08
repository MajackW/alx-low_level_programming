#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - entry point
 * @min: minimum
 * @max: maximum
 * Return: pointer int
 */

int *array_range(int min, int max)
{
	int *p;
	int tot;
	int i;

	if (min > max)
		return (NULL);
	tot = max - min;

	p = (int *)malloc(sizeof(int) * (tot + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= tot + 1; i++)
	{
		p[i] = i + min;
	}
	return (p);
}
