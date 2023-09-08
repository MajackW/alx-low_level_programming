#include <stdio.h>
#include <stdlib.h>


int checker(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return (0);
		}
		s++;
	}
	return (1);
}
long int mul(long int a, long int b)
{
	return (a * b);
}
int main(int argc, char *argv[])
{
	long int a;
	long int b;
	long int c;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
	if (checker(argv[1]) == 0 || checker(argv[2]) == 0)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	c = mul(a, b);

	printf("%ld\n", c);
	return (0);
}
