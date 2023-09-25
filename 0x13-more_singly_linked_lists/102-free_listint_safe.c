#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - function
 * @h: parameter
 *
 * Return: integer
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = loop_listint_count(*h);
	if (nodes == 0)
	{
		for (nodes = 0; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (nodes);
}
/**
 * loop_listint_count - function
 * @head: parameter
 *
 * Return: integer
 */
size_t loop_listint_count(listint_t *head)
{
	listint_t *i, *j;
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
