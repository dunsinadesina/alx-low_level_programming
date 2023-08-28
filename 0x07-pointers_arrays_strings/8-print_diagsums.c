#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagonal sum function
 * @a: parameter
 * @size: parameter
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int diagonal_sum = 0;
	int second_diagonal_sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diagonal_sum += a[i * size + i];
		second_diagonal_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diagonal_sum, second_diagonal_sum);
}
