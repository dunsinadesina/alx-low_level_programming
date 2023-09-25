#include "lists.h"
/**
 * listint_len - function
 * @h: parameter for the head of the list
 *
 * Return: count
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
