#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void print_opcodes(void (*func_ptr)(), int byte_count);
int main(int argc, char *argv[]);
#endif /*MAIN_H*/
