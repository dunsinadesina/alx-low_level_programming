#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index -  function
 * @head: parameter
 * @index: parameter
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_node;

	for (current_node = 0; current_node < index; current_node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
