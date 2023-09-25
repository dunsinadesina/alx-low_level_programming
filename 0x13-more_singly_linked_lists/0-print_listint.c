#include "lists.h"
/**
 * print_listint - function for printing list
 * @h: parameter
 * Return: node
 */
size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
