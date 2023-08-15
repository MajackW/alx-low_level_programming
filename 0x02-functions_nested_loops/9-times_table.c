#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: void
 */
void times_table(void)
{
	for (int i = 0; i <= 10; i++)
	{
		printf("%d, ", i ,9*i);
	}
}
