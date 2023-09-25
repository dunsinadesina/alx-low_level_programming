#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function
 * @head: parameter
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
