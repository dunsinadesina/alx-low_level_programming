#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: variable pointer
 * @letters: letters
 *
 * Return: number of letters could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file, bytes_written, bytes_read;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buf);
		return (0);
	}
	bytes_read = read(file, buf, letters);
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	close(file);
	return (bytes_written);
}
