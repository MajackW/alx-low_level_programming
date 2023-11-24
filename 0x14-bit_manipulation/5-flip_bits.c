#include <stdio.h>
#include "main.h"

/**
 * flip_bits - how many bits to flip
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int cnt;

	res = n ^ m;

	while (res != 0)
	{
		cnt += res & 1;
		res >>= 1;
	}

	return (cnt);
}
