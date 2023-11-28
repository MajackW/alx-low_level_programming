#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text from a file
 * @filename: the name of the file
 * @letters:number of letters to read
 * Return: number of letters that can be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fh;
	char c;
	size_t i;
	ssize_t n;

	if (filename == NULL)
		return (0);

	fh = fopen(filename, "r");
	if (fh == NULL)
		return (0);
	c = fgetc(fh);
	i = 0;
	while (c != EOF && (i < letters))
	{
		putchar(c);
		i++;
		c = fgetc(fh);
	}
	fclose(fh);
	if (i != letters)
		return (0);
	n = count(filename);
	return (n);
}
/**
 * count - counts letters that could be printed
 * @filename: name of the file
 * Return: number of chars
 */
ssize_t count(const char *filename)
{
	char c;
	FILE *fh;
	ssize_t i;

	fh = fopen(filename, "r");

	if (fh == NULL)
	{
		return (100);
	}

	c = fgetc(fh);
	i = 0;
	while (c != EOF)
	{
		i++;
		c = fgetc(fh);
	}
	fclose(fh);
	return (i);
}
