#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number or argument
 * @argv: array of arguments
 * Return: always 0 success
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
