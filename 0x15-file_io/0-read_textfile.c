#include "main.h"

/**
 * read_textfile - prints the number of bytes
 * @filename: name of the file
 * @letters: number of bytes to read
 *
 * Return: nbr of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	ssize_t byt;
	char buffer[READ_BUFFER_SIZE * 10];

	if (!filename || !letters)
		return (0);
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);
	byt = read(ptr, &buffer[0], letters);
	byt = write(STDOUT_FILENO, &buffer[0], byt);
	close(ptr);
	return (byt);
}
