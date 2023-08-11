#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char a;
	char b;

	a = ',';
	b = ' ';

	for (i = 0; i < 10;)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(a);
			putchar(b);
		}
		i++;
	}

	putchar('\n');

	return (0);
}
