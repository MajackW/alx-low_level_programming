#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds change
 * @argc: number of args
 * @argv: arguments
 * Return: 0 success
 */
int change(int b);
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("%d\n", 0);
		exit(0);
	}
	a = change(b);
	printf("%d\n", a);
	return (0);
}
/**
 * change - entry point
 * @b: change
 * Return: integer
 */
int change(int b)
{
	int a;
	int i;
	int num[] = {1, 2, 5, 10, 25};

	a = 0;
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
	return (a);
}
