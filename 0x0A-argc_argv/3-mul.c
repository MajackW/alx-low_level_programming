#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: iteger
 */

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
