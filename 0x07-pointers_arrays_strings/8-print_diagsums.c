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
	int num[size];

	sum = 0;

	for (i = 0; i < size; i++)
	{
		num[i] = a[i][i];
	}
	for (i = 0; i < size; i++)
	{
		sum += num[i];
	}
	printf("%d\n", sum);
}
