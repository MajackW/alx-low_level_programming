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
	ssize_t n;

	n = read_textfile(av[1], 114);
	printf("\nread: %zd\n", n);
	return 0;
}
