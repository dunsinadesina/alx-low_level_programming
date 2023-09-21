#include "lists.h"
/**
 * list_len - function to print length of list
 * @h: pointer parameter
 * Return: counter
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
