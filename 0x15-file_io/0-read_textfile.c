#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read and print to STDOUT.
 * @filename: text file to read
 * @letters: number lettre to read
 * Return: w- or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t value;
	ssize_t wr;
	ssize_t tr;

	if (filename == NULL)
		return (0);
	value = open(filename, O_RDONLY);
	if (value == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	tr = read(value, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, tr);

	free(buffer);
	close(value);
	return (wr);
}
