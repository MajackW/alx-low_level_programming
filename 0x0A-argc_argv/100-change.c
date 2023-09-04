#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number
 * @argv: number
 * @n: number
 * Return: int success
 */
int change(int n);
int main(int argc, char *argv[])
{
	int res;
	int n;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	p = argv[1];
	n = atoi(p);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	res = change(n);
	printf("%d\n", res);
	return (0);
}

/**
 * change - entry point
 * @n: number ti change
 * Return: int success
 */
int change(int n)
{
	int res;
	int i;
	int array[] = {1, 2, 5, 10, 25};

	res = 0;
	if (n == 0)
		res += 0;
	while (n != 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (n == array[i])
			{
				res += 1;
				n -= array[i];
				break;
			}
			else if ((n > array[i] && n < array[i + 1] && array[i] != array[4]))
			{
				res += 1;
				n -= array[i];
				break;
			}
			else if (n > array[i] && array[i] == array[4])
			{
				res += 1;
				n -= array[i];
				break;
			}
		}
	}
	return (res);
}
