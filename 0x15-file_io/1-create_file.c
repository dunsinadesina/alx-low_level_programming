#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_file - a function that creates a file
 * @filename: pointer variable
 * @text_content: file content
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, i;

	i = 0;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	write(file, text_content, i);
	return (1);
}
