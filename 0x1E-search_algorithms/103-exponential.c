#include "search_algos.h"
/**
 * _binary_search - searches for value in an array using binary search
 * @array: pointer to the first element
 * @left: starting index of subarray
 * @right: ending index of subarray
 * @value: value being searched for
 *
 * Return: integer
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in an array by Exponential search
 * @array: pointer to the first element
 * @size: size of the array
 * @value: value being search for
 *
 * Return: integer
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, right;

	i = 0;
	if (array == NULL)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
