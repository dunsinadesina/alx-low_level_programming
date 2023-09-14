#include "variadic_functions.h"
/**
 * print_all - function to print all
 * @format: argument
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *separator = "";

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			char c = va_arg(args, int);

			printf("%s%c", separator, c);
		}
		else if (format[i] == 'i')
		{
			int num = va_arg(args, int);

			printf("%s%d", separator, num);
		}
		else if (format[i] == 'f')
		{
			double f = va_arg(args, double);

			printf("%s%f", separator, f);
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s%s", separator, str);
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
