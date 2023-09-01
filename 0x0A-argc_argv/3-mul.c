#include "main.h"
#include <stdio.h>

/**
 * main - main entry
 * @argc: number
 * @rgv: list
 * Return: int success
 */
int atoi(const char *s);

int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	result = 0;

	if (argc < 3)
	{
		puts("Error");
		return (1);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
/**
 * atoi - conerting
 * @s: to convert
 * Return: int
 */
int atoi(const char *s)
{
	int result;
	int sign;

	sign = 1;
	result = 0;

	while (*s == ' ' || *s == '\t')
	{
		s++;
	}
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	result *= sign;
	return (result);
}
