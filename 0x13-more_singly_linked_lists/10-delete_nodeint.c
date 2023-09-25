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

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	previous = current->next;
	current->next = previous->next;
	free(previous);
	return (1);
}
