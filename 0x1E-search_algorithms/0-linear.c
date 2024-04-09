#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using Linear search
 * @array: pointer parameter to the first element
 * @size: size of the array
 * @value: value being searched for
 *
 * Return: integer
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
