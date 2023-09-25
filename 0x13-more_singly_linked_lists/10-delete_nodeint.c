#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - function
 * @head: parameter
 * @index: parameter
 *
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current = *head;
	unsigned int i;

	previous = NULL;
	for (i = 0; i < (index - 1); i++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		previous = current;
		current = current->next;
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
	}
	else
	{
		previous->next = current->next;
		free(current);
	}
	return (1);
}
