#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * create_file - creates file
 * @filename: name of file to create
 * @text_content: what to write to the file
 * Return: 1 on success -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	size_t size;
	ssize_t n;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY |O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		size = strlen(text_content);
		n = write(fd, text_content, size);
		if (n == -1)
		{
			close(fd);
			return (-1);
		}

	}
	close(fd);
	return (1);
}
/**
 * dex - creates file
 * @filename: name of file to create
 * @text_content: what to write
 * Return: 1 on success -1 otherwise
 */
int dex(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;
	size_t size;

	size = strlen(text_content);
	fd = open(filename, O_RDWR | O_CREAT, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		n = write(fd, text_content, size);
		if (n == -1)
			return (-1);
	}
	n = close(fd);
	if (n == -1)
		return (-1);
	return (1);
}
