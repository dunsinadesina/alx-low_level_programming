#include "main.h"
/**
 * err_and_exit - function to print error and exit
 * @err_code: error code
 * @content: the error message
 *
 * Return: null
 */
void err_and_exit(int err_code, const char *content)
{
	dprintf(STDERR_FILENO, "%s\n", content);
	exit(err_code);
}
/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer to arguments
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	char file_to[1024];
	int fd_from, fd_to;
	ssize_t byte_read, byte_wri;
	char buffer[BUFFER_SIZE];

	file_from = argv[1];
	if (argc != 3)
		err_and_exit(97, "Usage: cp file_from file_to");
	if (_strlen(argv[2]) >= sizeof(file_to))
		err_and_exit(99, "Error: Can't write to file");
	_strcpy(file_to, argv[2]);
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		err_and_exit(98, "Error: Can't read from file");
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		err_and_exit(99, "Error: Can't write to file");
	while ((byte_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		byte_wri = write(fd_to, buffer, byte_read);
		if (byte_wri == -1)
			err_and_exit(99, "Error: Can't write to file");
	}
	if (byte_read == -1)
		err_and_exit(98, "Error: Can't read from file");
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
/**
 * _strlen -  to calculate length of string
 * @string: pointer paramter
 *
 * Return: length
 */
size_t _strlen(const char *string)
{
	size_t len;

	len = 0;
	while (string[len] != '\0')
		len++;
	return (len);
}
/**
 * _strcpy - function to copy string
 * @dest: destination
 * @source: source
 *
 * Return: string
 */
char *_strcpy(char *dest, const char *source)
{
	char *origin;

	if (dest == NULL || source == NULL)
		return (NULL);
	origin = dest;
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
	return (origin);
}
