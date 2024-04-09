#include "search_algos.h"
/**
 * interpolation_search - searches for value in a sorted array by Interpolation
 * @array: pointer to the first element of array
 * @size: size of array
 * @value: value being searched for
 *
 * Return: integer
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t p, l, h;
	double f;

	if (array == NULL)
		return (-1);
	while (size)
	{
		f = (double)(h - l) / (array[h] - array[l] * (value - array[l]));
		p = (size_t)(l + f);
		printf("Value checked array[%d]", (int)p);
		if (p >= size)
		{
			printf(" is out of range\n");
			break;
		}
		printf(" = [%d]\n", array[p]);
		if (array[p] == value)
			return ((int)p);
		if (array[p] < value)
			l = p + 1;
		else
			h = l + 1;
		if (l == h)
			break;
	}
	return (-1);
}
