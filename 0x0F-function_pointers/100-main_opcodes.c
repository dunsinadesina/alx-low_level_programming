#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * print_opcodes - function
 * @func_ptr: argument pointer
 * @byte_count: argument
 *
 * Return: void
 */
void print_opcodes(int (*func_ptr)(), int byte_count)
{
	int i;
	unsigned char *opcodes = (unsigned char *)func_ptr;

	for (i = 0; i < byte_count; i++)
	{
		printf("%02x", opcodes[i]);
		if (i < byte_count - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - function
 * @argc: argument
 * @argv: argument
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int byte_count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	byte_count = atoi(argv[1]);
	if (byte_count < 0)
	{
		printf("Error\n");
		return (2);
	}
	if (byte_count == 0)
	{
		return (0);
	}
	print_opcodes(main, byte_count);
	return (0);
}
