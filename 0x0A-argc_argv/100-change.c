#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds change
 * @argc: number of args
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int a;
	int b;
	int i;
	int num[] = {1,2,5,10,25};

	a = 0;
	b = atoi(argv[1]);

	while (b != 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (num[i] == b)
			{
				a += 1;
				b -= num[i];
			}
			if (b > num[i] && i == 4)
			{
				a += 1;
				b -= num[i];
			}
			if (num[i] < b && num[i + 1] > b)
			{
				a += 1;
				b -= num[i];
			}
		}
	}
	printf("%d\n", a);
	return (0);
}
