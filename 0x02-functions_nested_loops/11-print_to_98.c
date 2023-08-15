#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 *
 * Return: void
 */
void print_to_98(int n)
/**
 * n - number
 */
{
	if (n <= 0)
	{
		printf("%d, ", n);
		n++;
		while (n < 99)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else if (n == 98)
			{
				printf("%d", n);
			}
			n++;
		}
		putchar('\n');
	}
	else if (n > 98)
	{
	        printf("%d, ", n);
                n--;
                while (n < 97)
                {
                        if (n != 98)
                        {
                                printf("%d, ", n);
                        }
                        else if (n == 98)
                        {
                                printf("%d", n);
                        }
                        n--;
                }
		putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
