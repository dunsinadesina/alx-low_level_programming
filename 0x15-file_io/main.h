#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#define BUFFER_SIZE 1024
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
size_t _strlen(const char *string);
void err_and_exit(int err_code, const char *content);
int main(int argc, char *argv[]);
char *_strcpy(char *dest, const char *source);
#endif /*MAIN_H*/
