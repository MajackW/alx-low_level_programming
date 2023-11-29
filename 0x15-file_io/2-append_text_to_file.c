#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - append text to a file
 * @filename: name of the file to append to
 * @text_content: text to append
 * Return: 1 on success -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;
	size_t size;

	if (filename ==  NULL)
		return (100);
	fd = open(filename, O_WRONLY | O_APPEND);
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
		n = close(fd);
		if (n == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
