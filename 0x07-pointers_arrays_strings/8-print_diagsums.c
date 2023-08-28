#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of diagonals
 * @a: pointer to array
 * @size: dimensions of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum;
	int num[10];
	int ops;

	sum = 0;
	ops = 0;

	for (i = 0; i < size; i++)
	{
		num[i] = *(a + i * size + i);
	}
	for (i = 0; i < size; i++)
	{
		sum += num[i];
	}
	for (i = 0; i < size; i++)
	{
		ops += *(a = i * size + (size - 1 - i));
	}
	printf("%d, ", sum);
	printf("%d\n", ops);
}
