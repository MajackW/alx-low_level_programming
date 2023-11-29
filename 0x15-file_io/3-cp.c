#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - copies two files
 * @ac: number of arguments
 * @av: arguments
 * Return: int
 */
int main(int ac, char *av[])
{
	int fd;
	int fd2;
	char buffer[1024];
	ssize_t n;

	if (ac != 3)
	{
		dprintf(3, "Usasge: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(3, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 06624);
	if (fd2 == -1)
	{
		dprintf(3, "Error: can't write to %s\n", av[2]);
		exit(99);
	}
	n = read(fd, buffer, 1024);
	if (n == -1)
	{
		dprintf(3, "Error: can't read from file %s\n", av[1]);
		exit(98);
	}
	while (n != 0)
	{
		write(fd2, buffer, n);
		n = read(fd, buffer, 1024);
	}
	close(fd);
	close(fd2);
	return (0);
}
