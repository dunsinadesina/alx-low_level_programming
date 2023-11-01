#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: pointer parameter to file name
 * @text_content: pointer paramter to text
 *
 * Return: an integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t text_len, byte_wri;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file_des);
		return (1);
	}
	text_len = _strlen(text_content);
	byte_wri = write(file_des, text_content, text_len);
	close(file_des);
	if (byte_wri == -1)
		return (-1);
	return (1);
}
/**
 * _strlen - function to calculate length of string
 * @string: pointer parameter to string
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
