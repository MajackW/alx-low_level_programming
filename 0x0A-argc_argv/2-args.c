#include <stdio.h>

/**
 * main - prints argvs
 * @argc: number of args
 * @argv: arguments
 * Return: 0 sucess
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	putchar('\n');

	return (0);
}
