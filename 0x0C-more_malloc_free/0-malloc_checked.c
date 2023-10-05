
#include <stdio.h>
#include <stdlib.b>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: space to allocate
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
