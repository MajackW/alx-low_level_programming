#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc((sizeof(char) * b));
	if (p == NULL)
		exit(98);
	return (p);
}