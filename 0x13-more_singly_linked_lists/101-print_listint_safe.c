#include "lists.h"
#include <stdlib.h>
/**
 * print_listint_safe - function
 * @head: parameter
 *
 * Return: integer
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = loop_listint_len(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
/**
 * loop_listint_len - function
 * @head: parameter
 *
 * Return: integer
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *i, *j;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	i = head->next;
	j = (head->next)->next;
	while (j)
	{
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				nodes++;
				i = i->next;
				j = j->next;
			}
			i = i->next;
			while (i != j)
			{
				nodes++;
				i = i->next;
			}
			return (nodes);
		}
		i = i->next;
		j = (j->next)->next;
	}
	return (0);
}
