#include "3-calc.h"
/**
 * main - main function
 * @argc: argument
 * @argv: argument
 * Return: integer
 */
int main(int argc, char *argv[])
{
	char *operator = argv[2];
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;
	int (*func)(int, int) = get_op_func(operator);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
