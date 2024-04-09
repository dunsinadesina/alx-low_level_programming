#include "search_algos.h"
/**
 * rec_search - searches a value in an array using binary search
 * @array: pointer to first element
 * @size: size of the array
 * @value: value being searched
 *
 * Return: intger
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half;
	size_t i;

	half = size / 2;
	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");
	if (half && size % 2 == 0)
		half--;
	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}
	if (value < array[half])
		return (rec_search(array, half + 1, value));
	half++;
	return (rec_search(array + half, size - half, value) + half);
}
/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element
 * @size: size of array
 * @value: value being searched for
 *
 * Return: integer
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = rec_search(array, size, value);
	if (index >= 0 && array[index] != value)
		return (-1);
	return (index);
}
