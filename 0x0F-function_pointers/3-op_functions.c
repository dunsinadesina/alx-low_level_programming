#include "3-calc.h"
/**
 * op_add - function to add
 * @a: argument
 * @b: argument
 * Return: integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to subtract
 * @a: argument
 * @b: argument
 * Return: integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to multiply
 * @a: argument
 * @b: argument
 * Return: integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function to divide
 * @a: argument
 * @b: argument
 * Return: integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function to find modulus
 * @a: argument
 * @b: argument
 * Return: integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
