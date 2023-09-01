#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc: argument
 * @argv: argument
 * Return: digit success
 */
int main(int argc, char *argv[])
{
	int result;
	int num;
	int i;
	char mun;

	result = 0;
	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		mun = *(argv[i]);
		num = isdigit(mun);
		if (num == 0)
		{
			printf("Error");
			return (0);
		}
	}
	for (i = 0; i < argc; i++)
	{
		num = atoi(argv[i]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
