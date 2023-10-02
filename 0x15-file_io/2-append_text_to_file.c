#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: pointer variable
 * @text_content: file contents
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;

	i = 0;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	write(file, text_content, i);
	return (1);
}
