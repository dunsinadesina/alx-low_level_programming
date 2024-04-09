#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array using the Jump search
 * @array: pointer to first element
 * @size: size of array
 * @value: value being serched for
 *
 * Return: integer
 */
int jump_search(int *array, size_t size, int value)
{
	int index, i, j, pre;

	if (array == NULL || size == 0)
		return (-1);
	i = (int)sqrt((double)size);
	j = 0;
	pre = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		j++;
		pre = index;
		index = j * i;
	} while (index < (int)size && array[index] < value);
	printf("Value found between indexes [%d] and [%d]\n", pre, index);
	for (; pre <= index && pre < (int)size; pre++)
	{
		printf("Value checked array[%d] = [%d]\n", pre, array[pre]);
		if (array[pre] == value)
			return (pre);
	}
	return (-1);
}
