#include "function_pointers.h"
/**
 * print_name - function
 * @name: argument
 * @f: argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
