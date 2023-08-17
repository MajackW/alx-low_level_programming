#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	a = 1;

	while (a <= 100)
	{
		if (a % 5 == 0 && a % 3 == 0)
			printf("FIZZBUZZ ");
		if (a % 3 == 0)
			printf("FIZZ ");
		if (a % 5 == 0)
			printf("BUZZ ");
		if (a == 100)
			printf("%d", a);
		else
			printf("%d ", a);
		a++;
	}
	putchar('\n');
}
