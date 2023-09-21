#include "lists.h"
/**
 * print_list - function to print list
 * @h: parameter
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
