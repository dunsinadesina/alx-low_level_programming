#include "main.h"
/**
 * read_textfile - function reads a text file and prints it to standard output
 * @filename: pointer parameter for filename
 * @letters: paraeter
 *
 * Return: byte read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	char *buffer;
	ssize_t byte_read, byte_wri;

	if (filename == NULL)
		return (0);
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	buffer = (char *)malloc(letters + 1);
	if (buffer == NULL)
	{
		close(file_des);
		return (0);
	}
	byte_read = read(file_des, buffer, letters);
	if (byte_read == -1)
	{
		close(file_des);
		free(buffer);
		return (0);
	}
	buffer[byte_read] = '\0';
	byte_wri = write(STDOUT_FILENO, buffer, byte_read);
	close(file_des);
	free(buffer);
	if (byte_wri == -1 || (size_t)byte_wri != (size_t)byte_read)
		return (0);
	return (byte_read);
}
