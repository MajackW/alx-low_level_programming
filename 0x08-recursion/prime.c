#include <stdio.h>

int help(int x, int y);
int prime(int n);

int main()
{
	int a;

	a = prime(15);

	printf("%d\n", a);
	return 0;
}
int prime(int n)
{
	int a;
	a = help(n, 2);
	return a;
}
int help(int x, int y)
{
	if (x % y == 0)
		return 0;
	if (x % y != 0 && y * y < x)
		return help(x, y + 1);
	return 1;
}
