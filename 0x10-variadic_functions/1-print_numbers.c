#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: argument
 * @n: argument
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int result;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(args, int);
		printf("%d", result);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
