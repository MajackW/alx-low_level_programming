#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PAS_LEN 10
/**
 * gen_ran_pas - generates random password
 * Return: char password
 */

char *gen_ran_pas()
{
	char *pass; = (char *)malloc((PASS_LEN + 1) * sizeof(char));
	if (pass == NULL)
	{
		perror("memory allocation failed");
		exit(1);
	}
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL));
	for (int i = 0; i < PAS_LEN; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		pass[i] = charset[index];
	}
	pass[PAS_LEN] = '\0';

	return (pass);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *pass = gen_ran_pas();
	printf("%s\n", pass);

	free(pass);

	return (0);
}
