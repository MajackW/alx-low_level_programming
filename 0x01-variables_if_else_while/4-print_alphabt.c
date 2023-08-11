#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	char q;
	char e;

	a = 'a';
	q = 'q';
	e = 'e';

	while (a <= 'z')
	{
		if ((a != q) && (a != e))
			putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
