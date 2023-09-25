#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - function
 * @head: parameter
 *
 * Return: integer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *previous_node;

	if (head == NULL || *head == NULL)
		return (NULL);
	previous_node = NULL;
	while ((*head)->next != NULL)
	{
		current_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = current_node;
	}
	(*head)->next = previous_node;
	return (current_node);
}
