#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function
 * @head: beginning of list
 *
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);
	ret = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (ret);
}
