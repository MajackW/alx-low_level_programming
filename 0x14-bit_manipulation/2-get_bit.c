#include <stdio.h>
#include "main.h"

/**
 * get_bit - gets the bit at a given index
 * @n: integer
 * @index: the index
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
