#include "lists.h"
/**
 * print_listint - function for printing list
 * @h: parameter of the head of the list
 *
 * Return: node
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current_point = h;
	size_t node;

	node = 0;
	while (current_point != NULL)
	{
		printf("%d\n", current_point->n);
		node++;
		current_point = current_point->next;
	}
	return (node);
}
