#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void_swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
