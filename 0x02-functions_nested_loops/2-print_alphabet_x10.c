#include <stdio.h>
#include "main.h"

int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void)
{
	char a;
	int b;

	a = 'a';
	b = 0;

	while (b < 10)
	{
		while (a <= 'z')
		{
			putchar(a);
			a++;
		}

		putchar('\n');
	}
}
