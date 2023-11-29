#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(int ac, char **av)
{
	int n;
	char *s = "hello there";

	n = create_file(av[1], s);
	printf("\nread: %d\n", n);
	return 0;
}
