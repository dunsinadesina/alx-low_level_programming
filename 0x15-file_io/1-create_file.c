#include "main.h"
/**
 * create_file -  a function that creates a file
 * @filename: pointer parameter for file name
 * @text_content: pointer parameter for text content
 *
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t text_len, byte_wri;

	if (filename == NULL)
		return (0);
	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_len = _strlen(text_content);
		byte_wri = write(file_des, text_content, text_len);
		if (byte_wri == -1)
		{
			close(file_des);
			return (-1);
		}
	}
	close(file_des);
	return (1);
}
/**
 * _strlen - custom function for strlen
 * @string: pointer parameter for string
 *
 * Return: length of string
 */
size_t _strlen(const char *string)
{
	size_t len;

	len = 0;
	while (string[len] != '\0')
		len++;
	return (len);
}
