#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *copy_node = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		copy_node = *head;
		for (node = 0; node < (idx - 1); node++)
		{
			if (copy_node == NULL)
			{
				free(new_node);
				return (NULL);
			}
			copy_node = copy_node->next;
		}
		new_node->next = copy_node->next;
		copy_node->next = new_node;
	}
	return (new_node);
}
