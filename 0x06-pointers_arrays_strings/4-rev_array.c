#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses an array of int
 * @a: pointer to array
 * @n: number of ints
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start;
	int end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];

		a[end] = temp;

		start++;
		end--;
	}
}
