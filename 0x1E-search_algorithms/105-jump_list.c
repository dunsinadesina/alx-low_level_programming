#include "search_algos.h"
#include <math.h>
/**
 * jump_list - function pointer that search for value in a list by Jump search
 * @list: pointer parameter to the list
 * @size: size of the list
 * @value: value being searched for
 *
 * Return: NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, i, j;
	listint_t *pre;

	if (list == NULL || size == 0)
		return (NULL);
	j = (size_t)sqrt((double)size);
	index = 0;
	i = 0;
	do {
		pre = list;
		i++;
		index = i * j;
		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && index != list->index)
			index = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
	} while (index < size && list->next && list->n < value);
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)pre->index, pre->n);
	for (; pre && pre->index <= list->index; pre = pre->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)pre->index, pre->n);
		if (pre->n == value)
			return (pre);
	}
	return (NULL);
}
